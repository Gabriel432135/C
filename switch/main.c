int nota;

int main() {
    printf("Digite a nota do aluno: ");
    scanf("%d", &nota);

    switch(nota){
        case nota > 70:
        printf("Grupo A");
        break;

        default:
        printf("Grupo B");
    }

    return 0;
}