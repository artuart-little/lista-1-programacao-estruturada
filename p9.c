#include <stdio.h>

int main(){
    float salario, reajuste;
    int porcentagem;

    printf("Digite o salário: ");
    scanf("%f", &salario);

    if (salario < 1500){
        porcentagem = 20;
        reajuste = salario * 0.2;
        salario = salario + reajuste;
    }
    else if (salario >= 1500 && salario <= 5000){
        porcentagem = 15;
        reajuste = salario * 0.15;
        salario = salario + reajuste;
    }
    else {
        porcentagem = 10;
        reajuste = salario * 0.1;
        salario = salario + reajuste;
    }

    printf("Novo salário: R$ %.2f\n", salario);
    printf("Reajuste: R$ %.2f\n", reajuste);
    printf("Percentual de reajuste aplicado: %i \n", porcentagem);

    return 0;
    
}