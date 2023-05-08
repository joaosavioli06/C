#include <stdio.h>

int main() {
   float sal, bonus;
   int anos;
   printf("Sistema de bônus salarial - Empresa XKW\n");
   printf("\nDigite o seu salário atual: ");
   scanf("%f", &sal);
   printf("Digite quantos anos você trabalha na empresa: ");
   scanf("%d", &anos);

   if (anos >= 5){
       bonus = sal * 0.2;
   }
   else{
       bonus = sal * 0.1;
   }
   
   printf("\nO valor do seu bônus salarial é:  R$ %.2f\n", bonus);
   
   
    return 0;
}
