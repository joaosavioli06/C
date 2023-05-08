#include <stdio.h>

int main() {
   int idade;
   printf("Qual é a sua idade? ");
   scanf("%d", &idade);
   
   if (idade >= 18){
       printf("\nVocê é maior de idade!");
   }
   else if (idade <= 17){
       printf("\nVocê é menor de idade!");
   }
   
   
    return 0;
}
