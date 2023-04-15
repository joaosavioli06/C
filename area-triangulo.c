#include <stdio.h>

int main() {
 
int base;
int altura;

printf("\nVamos calcular a área de um triângulo\n");
printf("\nDigite a base de seu triângulo: ");
scanf("%d",&base);
printf("\nDigite a altura de seu triângulo: ");
scanf("%d",&altura);

int calc;
calc = base * altura / 2;

printf("\nA área de seu triângulo é: %d", calc);

return 0;
}
