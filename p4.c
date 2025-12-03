#include <stdio.h>

int main(){

    int N;

    printf("Digite o total de segundos: ");
    scanf("%i", &N);

    printf("%d:%d:%d\n", N/3600, (N/60)%60, N%60);

    return 0;
    
}