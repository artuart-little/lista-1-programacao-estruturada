#include <stdio.h>

#define PI 3.14159

int main(){

    float raio, V;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    V = (4.0/3.0) * PI * (raio*raio*raio);

    printf("VOLUME: %.3f\n ", V);

    return 0;
    
}