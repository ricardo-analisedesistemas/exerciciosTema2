#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x = 2;
    int y = 10;
    printf(" x NÃO é igual x?:%d\n",  !x == x);// x não é igual a x? 0
    printf(" x   É   igual a x?: %d\n",  x == x);// x é igual a x ? 1

  if(!(y > 9)){ // é verdade que Y NÃO É MAIOR QUE 9 ?
       printf("Resultado verdadeiro porque y NÃO É MENOR QUE ZERO\n");
  }else{
       printf("Resultado FALSO\n");
  }

    return 0;
}