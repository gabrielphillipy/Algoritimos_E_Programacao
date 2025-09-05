#include <stdio.h>
#include <stdlib.h>

void mm(int *v, int *min, int *max, int tam){
    int maior = v[0];
    int menor = v[0];
    for(int i = 0; i < tam; i++){
        if(v[i] > maior){
            maior = v[i];
        }
        if(v[i] < menor){
            menor = v[i];
        }
    } 
    *min = menor;
    *max = maior;
    return;
}

int main(int argc, char* argv[]){
    int vet[] = {8, 3, 15, -2, 7, 10};
    int minimo;
    int maximo;

    mm(vet, &minimo, &maximo, 6);

    printf("Valor mínimo: %d\tValor maximo: %d\n", minimo, maximo);

    return 0;
}