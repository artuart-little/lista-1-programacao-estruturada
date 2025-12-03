#include <stdio.h>

int main() {

    int v1, v2, v3;
    
    printf("Digite o 1º valor: "); 
    scanf("%i", &v1);

    printf("Digite o 2º valor: "); 
    scanf("%i", &v2);

    printf("Digite o 3º valor: "); 
    scanf("%i", &v3);

    int a = v1, b = v2, c = v3;
    int temp; 

    if (a > b) {
        temp = a; a = b; b = temp;
    }

    if (a > c) {
        temp = a; a = c; c = temp;
    }

    if (b > c) {
        temp = b; b = c; c = temp;
    }

    printf("\nOrdenado: %d, %d, %d\n", a, b, c);
    printf("-----------------------\n");
    printf("Original: %d, %d, %d\n", v1, v2, v3);

    return 0;
}