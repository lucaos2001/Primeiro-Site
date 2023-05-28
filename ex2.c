#include <stdio.h>

//2) Faça um programa que imprime a soma do quadrado dos números entre 0 e 50
int main(){
    int N, soma2;
    soma2 = 0;
    for(int i=0; i <= 50; i++){
        soma2 = soma2 + (i*i);
    }
    
    printf("A soma do quadrado é: %d \n", soma2);

    return 0;
}