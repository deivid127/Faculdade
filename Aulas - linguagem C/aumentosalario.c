#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    float sal_atual, novo_sal_bruto, novo_sal_liquido, imposto; 

    printf("Qual seu salário atual ?");
    scanf("%f", &sal_atual);
    if (sal_atual <= 3000.0)
    {
        sal_atual = sal_atual/100;
        novo_sal_bruto = sal_atual*115.45;
    }
    else{
        if (sal_atual < 5500.0)
        {
        sal_atual = sal_atual/100;
        novo_sal_bruto = sal_atual * 110.15;
        }
    }
    if (sal_atual > 5500.0)
    {
        sal_atual = sal_atual/100;
        novo_sal_bruto = sal_atual*107.5;
    }
    system("clear");
    printf("Salário bruto com aumento R$ %.2f\n", novo_sal_bruto);
    imposto = (20.5/100)*novo_sal_bruto;
    novo_sal_liquido = novo_sal_bruto - imposto;
    printf("Salário líquido com imposto descontado R$ %.2f\n", novo_sal_liquido);
    return 0;
}