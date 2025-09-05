#include <stdio.h>

void inverte_valores(int* pa, int* pb){
    int aux = *pa;
    *pa = *pb;
    *pb = aux;
    return;
}

int main(int argc, char* argv[]){
    int a;
    int b;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    inverte_valores(&a, &b);

    printf("a: %d\nb: %d\n", a, b);

    return 0;
}
