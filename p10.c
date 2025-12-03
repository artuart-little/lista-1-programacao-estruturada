#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, delta;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    delta = ((b*b) - (4*a*c));

    if ( (a == 0) || (delta < 0) ) {
        printf("Impossível calcular");
    } else {
        float r1 = (-b + sqrt(delta)) / (2*a);
        float r2 = (-b - sqrt(delta)) / (2*a);

        printf("R1 = %.2f\n", r1);
        printf("R2 = %.2f\n", r2);
    }

    return 0;
    
}