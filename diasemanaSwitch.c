#include<stdio.h>
int main(int argc, char const *argv[])
{
    int dia;//variavel a ser usada no controle do switch
    printf("Entre com um número correspondente ao dia desejado:");
    scanf("%d",&dia);
    
    switch(dia){
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda-Feira\n");
        break;
    case 3:
        printf("Terça-Feira\n");
        break;
    case 4:
        printf("Quarta-Feira\n");
        break;
    case 5:
        printf("Quinta-Feira\n");
        break;
    case 6:
        printf("Sexta-Feira");
        break;
    case 7:
        printf("Sábado\n");
        break;

    default:
        printf("Valor Inválido");    
    break;
    };
    return 0;
}
