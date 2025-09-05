#include <stdio.h>
#include <stdlib.h>

void inverte_valores(int* pa, int* pb){
    pa = pb
    pb = pa
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