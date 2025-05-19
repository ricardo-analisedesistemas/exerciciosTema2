#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char const *argv[])
{
    int opcao = 0 ;
    int numeroSecreto;
    int palpite;

    printf("Menu Principal\n");
    printf("1.Inciar Jogo\n");
    printf("2.Ver Regras\n");
    printf("3.Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d",&opcao);

    switch (opcao)
    {
    case 1:
        srand(time(0));
        numeroSecreto = rand() % 10;
        printf("Digite um numero de 0 a 9: ");
        scanf("%d",&palpite);
        if(numeroSecreto == palpite){
           printf("Párabens você acertou!\n");
           printf("número secreto %d\n",numeroSecreto);        
        }else{
            printf("Voce errou tente novamente\n");
            printf("número secreto %d\n",numeroSecreto);
        }
        printf("número secreto %d\n",numeroSecreto);
        break;

    case 2:
        break;
        
    case 3:
        break;    
    
    default:
       printf("Opção inválida");
       break;
    }


    return 0;
}
