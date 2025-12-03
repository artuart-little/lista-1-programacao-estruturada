#include <stdio.h>

int main() {
    int h_i, m_i, h_f, m_f;
    int horas, minutos;

    printf("Digite a hora e minuto do início do jogo: ");
    scanf("%d %d", &h_i, &m_i);

    printf("Digite a hora e minuto do fim do jogo: ");
    scanf("%d %d", &h_f, &m_f);

    horas = h_f - h_i;
    minutos = m_f - m_i;

    if (minutos < 0) {
        minutos = minutos + 60;
        horas = horas - 1; 
    }

    if (horas < 0) {
        horas = horas + 24;
    }

    printf("Duração do jogo: %d hora(s) e %d minuto(s)\n", horas, minutos);

    return 0;
    
}