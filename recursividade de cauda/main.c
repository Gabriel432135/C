#include <stdio.h>

unsigned long fatorial_trail(int valor, unsigned long estado){
    if(valor <= 1) return estado; 
    return fatorial_trail((valor-1), (estado*valor));
}

unsigned long fatorial(int n){
    return fatorial_trail(n, 1);
}

void limpa_buffer(){
    char c;
    do{
        c = getchar();
    }while(c != '\n' && c != EOF);
}

int main(){
    int numero, resultado;
    do{
        printf("Digite o número para calcular o fatorial: ");
        resultado = scanf("%d", &numero);
        limpa_buffer();
        if(resultado == 1 && numero <= 1){
            resultado = 0;
            printf("Apenas números maiores que 1\n");
        }
    }while(resultado != 1);

    printf("O fatorial de %d é %lu", numero, fatorial(numero));
    return 0;
}