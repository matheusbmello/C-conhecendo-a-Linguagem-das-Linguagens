#include <stdio.h>

int main(){
    int x;   
    int i = 1;

    printf("Escolha um número de 0 a 10\n");
    scanf("%d",&x);

    while(i<=10){
        int resultado = x*i;
        printf("%d x %d = %d\n",x,i,resultado);
        i++;
    }
    return 0;
}