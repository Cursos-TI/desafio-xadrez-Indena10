#include <stdio.h>
int main(){
int torre,bispo,rainha;
    while (torre < 5)
    {
        printf("TORRE SE move\n");
        printf("Direita\n");
        torre++;
    }
    
    for (int  bispo = 0; bispo < 5; bispo++)
    {
        printf(" BISPO se move\n");
        printf("Cima \n Direita\n");
    }
    for (rainha = 0; rainha < 8; rainha++)
    {
        printf(" RAINHA se move\n");
        printf("esquerda\n");
    }
    
    
    }