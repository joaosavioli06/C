#include <stdio.h>

int main() {
    int codigo;
    printf("Digite o código do seu produto: ");
    scanf("%d", &codigo);
    
    switch(codigo){
        case 1: printf("Alimento não-perecível");
            break;
        
        case 2:
        case 3:
        case 4:
            printf("Alimento perecível");
            break;
        case 5:
        case 6:
            printf("Vestuário");
            break;
        case 7:
            printf("Higiene pessoal");
            break;
        case 8:
        case 9:
        case 10:
            printf("Utensílios domésticos");
            break;
         default:
            printf("Codigo invalido");
    }

    return 0;
}
