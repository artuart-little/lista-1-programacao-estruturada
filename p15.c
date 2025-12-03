#include <stdio.h>

int main() {
    int N;

    printf("Insira a quantidade de pares a serem informados:\n");
    scanf("%i", &N);
    
    for (int i = 0; i < N; i++){

        printf("\nDigite o %iº par:\n", i+1);

        float x, y;

        printf("Digite o valor de X:\n");
        scanf("%f", &x);

        printf("Digite o valor de Y:\n");
        scanf("%f", &y);

        if (y == 0){
            printf("Divisao impossível pois Y é igual a 0\n");
        } else {
            printf("Resultado X/Y: %.4f\n", x/y);
        }
    }

    return 0;

}