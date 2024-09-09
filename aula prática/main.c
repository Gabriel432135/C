#include <stdio.h>
#include <float.h> 

float wattMaximo = 0;
float wattMinimo = FLT_MAX;

void compararWatt(float watt){
    if(wattMaximo<watt){
        wattMaximo = watt;
    }

    if(wattMinimo>watt){
        wattMinimo = watt;
    }
}

void limpaBuffer(){
    //Função usada para resetar o scanf
    char c;
    do{
        c = getchar();
    }while(c != '\n' && c != EOF);
}

int main(){
    float leituraAtual;
    for(int i = 1; i<=20; i++){
        printf("\nDigite o %d° valor de potência em Watts: ", i);
        while((scanf("%f", &leituraAtual)) != 1){ //O usuário digitou algo inesperado
            printf("\nDigite apenas valores válidos: ");
            limpaBuffer();
        };
        limpaBuffer();
        compararWatt(leituraAtual);
    }

    printf("A maior leitura do dia foi: %0.2f Watts", wattMaximo);
    printf("\nA menor leitura do dia foi: %0.2f Watts", wattMinimo);

    return 0;
}