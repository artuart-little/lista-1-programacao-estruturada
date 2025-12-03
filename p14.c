#include <stdio.h>

int main() {

    int v1, v2 = 1;

    printf("Digite o primeiro número:\n");
    scanf("%i", &v1);

    printf("Digite o segundo número:\n");
    scanf("%i", &v2);

    while (v1 > 0 && v2 > 0) {
        
        int soma = 0;

        if (v1 > v2) {
            int temp = v1;
            v1 = v2;
            v2 = temp;
        }

        for (int i = v1; i < v2+1; i++) {
            printf("%i, ", i);
            soma += i;
        }

        printf("Soma dos números entre %i e %i: %i\n", v1, v2, soma);

        printf("Digite o primeiro número:\n");
        scanf("%i", &v1);
        
        printf("Digite o segundo número:\n");
        scanf("%i", &v2);
    }   

    return 0;

}