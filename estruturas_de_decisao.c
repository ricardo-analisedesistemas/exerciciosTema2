#include<stdio.h>
#include<stdlib.h>
float calcula_media(float nota[], int tamanho);


int main(int argc, char const *argv[])
{
    
    int opcao;
    float nota[3] = {0.0, 0.0, 0.0};
    int tamanho = 3;//quantidade de elementos do array nota
    
    printf("OPÇÃO 1.Calcular sua Média:\n");
    printf("OPÇÃO 2.Verificar APROVAÇÃO:\n");
    printf("OPÇÃO 3.Sair do programa:\n");
    printf("Escolha uma opção:");
    scanf("%d",&opcao);
    
    switch (opcao)
    {
    case 1:
    do
    {
      system("clear");
      for (int i = 0; i < tamanho; i++) {
        printf("\n");
        printf("Digite sua nota: ");
         scanf("%f",&nota[i]);
         
           
    }  
       if(nota[0] < 0 || nota[0] > 10 || nota[1] < 0 || nota[1] > 10 || nota[2] < 0 || nota[2] > 10){
         printf(("Nota inválida -- REPITA A OPERAÇÃO pressionando 'ENTER'\n"));
         while ((getchar()) != '\n'); // Limpa o buffer
         getchar(); // Agora espera corretamente
     }else{
         float media =  calcula_media(nota, 3);
         printf("\n");
         printf("Primeira nota 1 =%.2f : Segunda nota 2 =%.2f : Terceira nota 3 =%.2f\n\n",nota[0],nota[1],nota[2]);
         printf("A média entre suas 3 últimas notas = %.2f\n",media);
     }
    } while (nota[0] < 0 || nota[0] > 10 || nota[1] < 0 || nota[1] > 10 || nota[2] < 0 || nota[2] > 10);
    
        
     
     
     
     
        /*printf("Digite a nota 1 : ");
           scanf("%f",&nota[0]);
           printf("Digite a nota 2 : ");
           scanf("%f",&nota[1]);
           printf("Digite a nota 3 : ");
           scanf("%f",&nota[2]);*/
    
           
      
      
    break;
    
        default:
        break;
    }
    
    
    
    
            return 0;
   }

float calcula_media(float nota[], int tamanho){
    float soma = 0.0; //declara variavel dentro da função
    int i = 0;
    for(i = 0; i < tamanho; i++){
        soma += nota[i];}
        return soma / tamanho;
}