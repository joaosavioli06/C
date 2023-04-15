#include <stdio.h>

int main() {

int numero1;
int numero2;
int soma;
int sub;
int mult;
int divisao;

printf("Digite o seu primeiro número: ");
scanf("%d", &numero1);
printf("Digite o seu segundo número: ");
scanf("%d", &numero2);

soma = numero1 + numero2;
sub = numero1 - numero2;
mult = numero1 * numero2;
divisao = numero1 / numero2;

printf("\nA soma dos números é: %d", soma);
printf("\nA subtração dos números é: %d", sub);
printf("\nA multiplicação dos números é: %d", mult);
printf("\nA divisão dos números é: %d", divisao);


return 0;
}
