#include <stdio.h>

int main() {
   int num1, num2, num3;
   printf("Programa para ver o qual é o maior de três números\n");
   printf("\nOBS: Não digite números iguais, cada número deve ser diferente\n");
   
   printf("\nDigite o valor do seu primeiro número: ");
   scanf("%d", &num1);
   printf("Digite o valor do seu segundo número: ");
   scanf("%d", &num2);
   printf("Digite o valor do seu terceiro número: ");
   scanf("%d", &num3);
   
   if (num1 > num2 && num1 > num3){
       printf("\nO primeiro número é maior do que o segundo e o terceiro número");
   }
   else if  (num2 > num1 && num2 > num3){
       printf("\nO segundo número é maior do que o primeiro e o terceiro número");
   }
   else  {
       printf("\nO terceiro número é maior do que o primeiro e o segundo número");
   }
   
    return 0;
}
