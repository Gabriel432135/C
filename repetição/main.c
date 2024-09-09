int main(){
    int n, valid;
    do{
        printf("Digite um algarismo inteiro de 1 a 9: ");
        valid = scanf("%d", &n);

        if(valid!=1){while(getchar() != '\n');}
    
    }while (1>n||n>9);

    printf("\nA tabuada de %d:\n", n);

    for(int i = 1; i<=10; i++){
        printf("%d x %d = %d\n", n, i, (i*n));
    }

    return 0;
}