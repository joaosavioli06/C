#include <stdio.h>
int main() {
  
int num1, num2, num3, num4;

printf("Digite o valor do primeiro número: ");
scanf("%d", &num1);
printf("Digite o valor do segundo número: ");
scanf("%d", &num2);
printf("Digite o valor do terceiro número: ");
scanf("%d", &num3);
printf("Digite o valor do quarto número: ");
scanf("%d", &num4);

if (num1 < num2 & num1 < num3 & num1 < num4){
printf("O primeiro número é o menor de todos");
}
if (num2 < num1 & num2 < num3 & num2 < num4){
printf("O segundo número é o menor de todos");
}
if (num3 < num2 & num3 < num1 & num3 < num4){
printf("O terceiro número é o menor de todos");
}
if (num4 < num2 & num4 < num3 & num4 < num1){
printf("O quarto número é o menor de todos");
}

return 0;
}
