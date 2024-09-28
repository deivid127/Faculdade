#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int cont = 1;

    while (cont <=20)
    {
        printf("\n%d", cont)
        /*printf("Seja bem vindo a linguagem C !\n");*/;
        cont++;
    }
    printf("\n fim do programa");
    return 0;
}