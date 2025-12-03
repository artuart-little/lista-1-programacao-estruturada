#include <stdio.h>

int main() {
    int N;

    printf("Insira o número inteiro:\n");
    scanf("%i", &N);
    
    printf("Tabuada do %i:\n", N);

    for (int i = 1; i <= 20; i++){
        printf("%i x %i = %i\n", N, i, i*N);
    }

    return 0;

}