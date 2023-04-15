#include <stdio.h>

int main() {
int larg, comp, calc;
    
printf("Digite a largura do terreno: ");
scanf("%d", &larg);
printf("Digite o comprimento do terreno: ");
scanf("%d", &comp);

calc = larg * comp;

if (calc < 100){
    printf("Terreno POPULAR");
}
else if (calc >= 100 && calc <= 500){
    printf("Terreno MASTER");
}
else if (calc > 500){
    printf("Terreno VIP");
}

    return 0;
}
