#include <stdio.h>

int main() {
float altura, peso, imc;

printf("Digite o seu peso: ");
scanf("%f",&peso);
printf("Digite a sua altura: ");
scanf("%f",&altura);

imc = peso / (altura * altura);

if (imc < 18.5){
printf("Você está abaixo do peso ideal");
}
if (imc > 18.5 && imc <= 25){
printf("Peso ideal");
}
else if (imc > 25 && imc <= 30){
printf("Sobrepeso");
}
else if (imc > 30 && imc <= 40){
printf("Obesidade");
}
else if (imc >= 40){
printf("Obesidade mórbida");
}
return 0;
}
