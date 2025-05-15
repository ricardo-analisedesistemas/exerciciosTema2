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
    
    
    if(umidade >= 30 && umidade <= 70){
        printf("Nivel normaL de umidade realtiva do ar\n");
    }
    else if (umidade < 30 && umidade >= 12)
        {
        printf("ALERTA NÍVEL CRITICO DE UMIDADE REALTIVA DO AR!\n");
    }
    else if (umidade < 12){
        printf("ALERTA CLIMA DESÉRTICO\n");
    }
    else{
        printf("ALERTA NÍVEL MUITO ACIMA DE UMIDADE RELATIVA DO AR!!\n");
    }

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


