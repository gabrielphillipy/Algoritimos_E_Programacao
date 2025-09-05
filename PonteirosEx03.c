#include <stdio.h>
#include <stdlib.h>

void hm(int *minutos_totais, int *horas, int *minutos){
    *horas = *minutos_totais / 60;
    *minutos = *minutos_totais % 60;
    return;
}

int main(int argc, char* argv[]){
    int h;
    int m;
    int mnts;

    printf("Digite os minutos totais: ");
    scanf("%d", &mnts);

    hm(&mnts, &h, &m);

    printf("Horas: %d\tMinutos: %d", h, m);
}