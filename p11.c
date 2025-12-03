#include <stdio.h>

int main() {
    
    int v1, v2, inicio, fim, soma = 0;

    printf("Digite o primeiro número:\n");
    scanf("%i", &v1);
    
    printf("Digite o segundo número:\n");
    scanf("%i", &v2);

    if (v1 > v2){
        inicio = v2;
        fim = v1;
    } else {
        inicio = v1;
        fim = v2;
    }

    for (int i = inicio+1; i < fim; i++){
        if (i%2 != 0){
            soma += i;
        }
    }

    printf("Resultado soma: %i\n", soma);

    return 0;

}