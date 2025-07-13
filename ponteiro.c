#include<stdio.h>

int main(int argc, char const *argv[])
{
    int r = 10;
    int *pr;

    pr = &r;

    printf("Valor de *pr : %d\n", *pr);
    printf("Endereços de r: %p / Endreço de *pr: %p\n",&r,pr);

    r = 150;//muda diretamente o valor da variavel r e muda tambem o ponteiro
    printf("Valor de *pr : %d\n", *pr);

    *pr = 200; //muda o valor da variavel r através do ṕonteiro
    printf("Valor de *pr : %d\n", *pr);
    printf("Valor de r após modficação via ponteiro: %d\n",r);
    return 0;
}
