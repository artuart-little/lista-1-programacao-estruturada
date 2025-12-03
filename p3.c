#include <stdio.h>

int main(){
    
    int distancia;
    float tempo;
   
    printf("Insira a distancia em quilometros entre os carros:\n");
    scanf("%i", &distancia);
    
    tempo = distancia/(150);
    
    printf("Os carros se encontrarão no minuto %f", tempo*60);
    
    return 0;

}