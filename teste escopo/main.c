#include <stdio.h>

int c = 1;

void somar(int *v){
    (*v)++;
}

void testeStatic(){
    static int c;
    c++;
    printf("o valor de c é %d\n", c);
}

int main(){
    printf("%d\n", c);
    somar(&c);
    printf("%d\n", c);

    testeStatic();
    testeStatic();
    testeStatic();
    testeStatic();
    return 0;
}