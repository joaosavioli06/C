 #include <stdio.h>

int main() {
  
   float nota1, nota2, calc;
   printf("Bem vindo ao sistema de avalição da disciplina de Programação!\n");
   printf("Vamos pedir para você digitar as suas duas principais notas da disciplina, e o sistema irá mostrar se você foi reprovado ou aprovado\n");
   
   printf("\nQual foi a sua nota da primeira avaliação? ");
   scanf("%f", &nota1);
   printf("Qual foi a sua nota da segunda avaliação? ");
   scanf("%f", &nota2);
   
   calc = (nota1 + nota2) / 2;
   
   printf("\nSua média final foi %.2f\n",calc);
 
   if (calc >= 7){
       printf("\nVocê foi aprovado!");
   }
   else if (calc <= 6){
       printf("\nVocê foi reprovado!");
   }
   
    return 0;
}
