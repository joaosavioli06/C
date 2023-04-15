#include <stdio.h>

int main() {

int altura;
int base;
int retangulo;

printf("\n****Calcule a área de um retângulo****\n");
printf("\nDigite o valor de sua base: ");
scanf("%d", &base);
printf("\nDigite o valor de sua altura: ");
scanf("%d", &altura);

retangulo = base * altura;

printf("\nO valor do retangulo é: %d",retangulo);
return 0;
}
