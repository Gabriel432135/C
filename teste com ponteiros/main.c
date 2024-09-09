#include <stdio.h>
#include <stdlib.h>

int var = 2;
int *p = &var; 
int *p2;

int* alocarVetor(int size){
    return (int*)malloc(size*sizeof(int));
}

int main(){

    p2 = alocarVetor(2); //criação de vetor de inteiro de duas posições

    p2[0]=2;
    *(p2+1)=33;
    printf("%d\n", var);
    printf("%d\n", *p);
    (*p)++;
    printf("%d\n", var);

    printf("%d", *(p2+1));



    return 0;
}