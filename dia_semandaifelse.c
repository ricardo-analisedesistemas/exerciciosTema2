#include <stdio.h>

int main(int argc, char const *argv[])
{
    int dia;
    printf("Enter com m número referente ao dia desejado");
    scanf("%d",&dia);

    if (dia == 1){
        printf("Domingo\n");
    }else if (dia == 2){
        printf("Segunda-Feira\n");
    }else if(dia ==3 ){
        printf("Terça-Feira\n");
    }else if(dia == 4){
        printf("Quarta-feira\n");
    }else if(dia == 5){
        printf("Quinta-Feira\n");
    }else if(dia == 6 ){
        printf("Sexta-feira\n");
    }else if(dia == 7 ){
        printf("Sábado\n");
    }
    return 0;
}
