#include<stdio.h>
#include<stdlib.h>


void recursivo(int *numero){ //se afunção retorna um ponteiro para int, então passarei por argumento dentro do main
    if(*numero > 0){        //o endereço de uma variavel de mesmo tipo esperado e retornado pela função
        printf("%d \n",*numero);
        (*numero)--;
        recursivo(numero);
    
    }
}


int main(int argc, char const *argv[])
{
    int valor;
    printf("Digite um número: ");
    scanf("%d",&valor);

    recursivo(&valor);//a função retorna um *int, entao aqui se passa o endereço da variavel &valor
    printf("Contagem regressiva %d\n",valor);
    return 0;
}
