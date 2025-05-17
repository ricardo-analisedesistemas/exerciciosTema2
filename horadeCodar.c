#include<stdio.h>


int main(int argc, char const *argv[])
{
    float temperatura, umidade;
    signed int estoque = 0;
    int estoqueMinimo = 0;
    
    printf("Entre coam temperatura em Graus Celsius: ");
    scanf("%f",&temperatura);
    //while (getchar() != '\n');
    
    printf("Entre com o valor da umidade do ar: ");
    scanf("%f",&umidade);

    printf("Entre com a quantidade total em estoque: ");
    scanf("%d",&estoque);
    
    printf("\n");
    
    if (temperatura >= 10 || temperatura == 9)//temperatura entre 9 e acima de 10
    {
        printf("ALERTA TEMPERATURA ALTA PARA O AMBIENTE\n");
    } 
    else if (temperatura <= 8 && temperatura >= 5)//temperartura entre 8 e 5
    {
        printf("Temperatura ideal!\n");
    } 
    else if (temperatura < 5)
    {
        printf("ALERTA RISCO DE CONGELAMENTO!!\n");
    }
    
    (umidade >= 71)                   ?  printf("ALERTA NÍVEIS ELEVADOS DE UMIDADE RELATIVA\n"):
    (umidade >= 30 && umidade <= 70)  ?  printf("Níveis normais de umidade realtiva do ar.\n"):
    (umidade >=13  && umidade <= 29)  ?  printf("ALERTA NÍVEIS BAIXOS DE UMIDADE REALTIVA DO AR.\n"):
                                         printf("ESTADO DE ALERTA NÍVEIS EXTREMAMENTE CRÍTICOS!!\n");
    
    
    if(estoque < estoqueMinimo){
        printf("ALERTA ESTOQUE NEGATIVO!!\n");
    }
    else if(estoque == 0){
        printf("ALERTA ESTOQUE ZERADO!!\n");
    }
    else{
        printf("Estoque positivo!!\n");
    }


    return 0;
}


