#include<stdio.h>

int main(int argc, char const *argv[])
{
     int numero1 = 235;
     int numero2 = 236;

       if(numero1 < numero2){
      printf("Numero 1 é MENOR que numero2\n"); 
      }
      
      else if (numero1 > numero2){
        printf("Os numero1 MAIOR do que numero2\n");     
      } else{

        printf("Os números são IGUAIS\n");
      }


      /*(numero1 > numero2 ? printf("numero 1 MAIOR que numero2\n"): 
       numero1 == numero2 ? printf("Os dois numeros são IGUAIS\n"):printf("numero 2 é MAIOR que numero1\n"));*/

    return 0;
}
