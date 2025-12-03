#include <stdio.h>

int main() {
    int valores[10];
    int valor;

    for (int i = 0; i < 10; i++){
        printf("Digite o %iº número: ", i+1);
        scanf("%i", &valor);
        valores[i] = valor;
    }

    int maior = valores[0];
    int posicao = 0;

    for (int i = 0; i < 10; i++){
        if (maior < valores[i]){
            maior = valores[i];
            posicao = i;
        }
    }

    printf("\nO maior valor é %i e está na posição %i \n", maior, posicao+1);

    return 0;
}