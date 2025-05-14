#include<stdio.h>

int main(int argc, char const *argv[])
{
     int numero1 = 15;
     int numero2 = 15;

     /*/ if(numero1 <= numero2){
      printf("Numero 1 é MENOR que numero2"); 
      }
      
      else printf("Numero 1 é MAIOR que numero2!");*/
      (numero1 > numero2 ? printf("numero 1 MAIOR que numero2\n"): 
       numero1 == numero2 ? printf("os dois são IGUAIS\n"):printf("numero 2 é MAIOR que numero1\n"));

    return 0;
}
