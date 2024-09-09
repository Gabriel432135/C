#include <stdio.h>
#include <stdlib.h>
#include <float.h> 

typedef struct {
    float *leitura;
} Dia;

float maxWatt_trail(float mLeitura, int index, Dia* diap){ //Função recursiva de cauda para leitura
    if(index>=20){
        return mLeitura;
    }
    if(diap->leitura[index]>mLeitura){
        mLeitura = diap->leitura[index];
    }
    return maxWatt_trail(mLeitura, index+1, diap);
}

float minWatt_trail(float mLeitura, int index, Dia* diap){ //Função recursiva de cauda para leitura
    if(index>=20){
        return mLeitura;
    }
    if(diap->leitura[index]<mLeitura){
        mLeitura = diap->leitura[index];
    }
    return minWatt_trail(mLeitura, index+1, diap);
}

void limpaBuffer(){
    //Função usada para resetar o scanf
    char c;
    do{
        c = getchar();
    }while(c != '\n' && c != EOF);
}

void marcarDia(Dia* dia){
    float leituraAtual;
    for(int i = 1; i<=20; i++){
        printf("\nDigite o %d° valor de potência em Watts: ", i);
        while((scanf("%f", &leituraAtual)) != 1){ //O usuário digitou algo inesperado
            printf("\nDigite apenas valores válidos: ");
            limpaBuffer();
        };
        limpaBuffer();
        dia->leitura[i-1]=leituraAtual;
    }
}

int main(){
    Dia dia;
    dia.leitura = (float*) malloc(sizeof(float)*20); //Inicializando o vetor com ponteiros
    marcarDia(&dia);
    printf("A maior leitura do dia foi: %0.2f Watts", maxWatt_trail(0, 0, &dia));
    printf("\nA menor leitura do dia foi: %0.2f Watts", minWatt_trail(FLT_MAX, 0, &dia));
    free(dia.leitura); //Libera  memória para evitar vazamento
    return 0;
}