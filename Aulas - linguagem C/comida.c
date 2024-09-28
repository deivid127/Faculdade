#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char nomeanimal[100];
    int qtdanimal;
    float custocomida, qtdcomida;
    float custodia, qtdmes, customes;

    printf("Digite o nome do animal: ");
    fgets(nomeanimal, sizeof(nomeanimal), stdin);

    printf("Quantos animais dessa espécie tem no zoológico ? ");
    scanf("%d", &qtdanimal);

    printf("Qual o custo estimado por Kg de comida dessa espécie ? ");
    scanf("%f", &custocomida);

    printf("Quantos kg de comida esse animal come por dia ? ");
    scanf("%f", &qtdcomida);

    custodia = qtdanimal*qtdcomida*custocomida;
    qtdmes = qtdanimal*qtdcomida*30;
    customes = custodia*30;

    system("clear");
    printf("Tipo de animal: %s", nomeanimal);
    printf("Quantidade de animais dessa espécie: %d \nle", qtdanimal);
    printf("Custo estimado por dia: R$ %.2f\n", custodia);
    printf("Quantidade de comida consumida por mês: %.2f Kg\n", qtdmes);
    printf("Custo estimado por mês: R$ %.2f\n", customes);
    return 0;
}