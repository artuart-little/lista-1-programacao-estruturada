#include <stdio.h>


int main(){
    
    int distancia;
    float combustivel, consumo;
    
    printf("Insira a distancia total percorrida:\n");
    scanf("%i", &distancia);
    
    printf("Insira quantos litros de combustivel foram gastos:\n");
    scanf("%f", &combustivel);
    
    consumo = distancia/combustivel;
    
    printf("Consumo médio foi de: %.3f km/l", consumo);
    
    return 0;
    
}