#include <stdio.h>

int main(){

    float x, y;

    printf("Digite o valor de x: ");
    scanf("%f", &x);

    printf("Digite o valor de y: ");
    scanf("%f", &y);

    printf("Localização: ");

    if (x == 0){
        if (y == 0){
            printf("Origem");
        }
        else {
            printf("Eixo Y");
        }
    } else {
        if (y == 0){
            printf("Eixo X");
        }
        else {      
            if (x > 0) {
                if (y > 0) {
                    printf("1º Quadrante");
                } 
                else {
                    printf("4º Quadrante");
                }
            } else {
                if (y > 0) {
                    printf("2º Quadrante");
                }
                else {
                    printf("3º Quadrante");
                }
            }
        } 
    } 
        
    return 0;
    
}