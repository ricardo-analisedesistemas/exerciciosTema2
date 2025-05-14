#include<stdio.h>

int main(int argc, char const *argv[])
{
    const int tamam = 100;
    char nome [tamam];
    int numero = 0;
    int restoZero;
    restoZero = numero % 2;
    
    
    
    printf("Digite seu nome: ");
    fgets(nome,tamam,stdin);
    fflush(stdin);
    printf("Digite um numero: ");
    scanf("%d",&numero);
    
    /*(numero % 2 != 0 ? printf("%s""O numero digitado %d é IMPAR\n",nome,numero):
    printf("%sO numero digitado é PAR\n",nome));*/

    if(numero %2 == 0){
        printf("%sO numero digitado é PAR!\n",nome);
    }
     else{
        printf("%sO numero digitado é IMPAR!\n",nome);
     }
return 0;
}
