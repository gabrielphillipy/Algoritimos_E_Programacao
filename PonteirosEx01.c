#include <stdio.h>
#include <stdlib.h>

int maiorElemento (int *v, int *maNum, int tam){
    *maNum = v[0];
    for(int i = 0; i < tam; i++){
        if(v[i] > *maNum){
            *maNum = v[i];
        }
    }
    printf("Na função, o maior valor é %d\n", *maNum);
    
    return *maNum;
}

int main(int argc, char* argv[]){
    int vet[] = {5, 10, 15, 20, 25};
    int maior;

    maior = maiorElemento(vet, &maior, 5);
    printf("Na main, o maior número é %d\n", maior);

    return 0;
}