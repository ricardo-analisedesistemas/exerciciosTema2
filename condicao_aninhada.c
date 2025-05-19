#include <stdio.h>
#include <string.h>

//struct com objetivo de cadastrar uma venda, toda struct inaugura um novo tipo (como int, float, char,etc)
typedef struct {
    //dados a obter do cliente
    char nomeCliente[50];
    float salario;
    int idade;
    //dados a obter da compra
    float valorBruto;
    //dado condicional, aplicado caso sejam satisfeitas as condiçoes para aplicação do desconto
    int percentualDesc; // Percentual de desconto (10, 20, 30, etc.)
    float valorDesconto;
} Venda;

// Função que calcula o desconto com base no percentual
float calcula_desconto(float valorBruto, int percentualDesc) {
    return valorBruto - (valorBruto * percentualDesc / 100.0f);
}

// Função que define a política de desconto com base na idade e salário
// foi criado um ponteiro *venda para Venda(struct), ele armazena valores dos campos cadastrais ou condicionais apontando para os endereços de memoria referente aos seus respectivos campos na struct 
// sim é possível fazer if else através de ponteiro
void politica_desconto(Venda *venda) {
    if (venda->idade >= 60) {
        venda->percentualDesc = 20; // 20% de desconto para idosos
    } else if (venda->salario < 2000) {
        venda->percentualDesc = 15; // 15% de desconto para baixa renda
    } else {
        venda->percentualDesc = 0; // Sem desconto
    }

    venda->valorDesconto = calcula_desconto(venda->valorBruto, venda->percentualDesc);
}

// Função para cadastrar uma venda
void cadastra_venda(Venda cadastra[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("\n*** SISTEMA CADASTRA VENDA ***\n");

        // Lê até a quebra de linha, como nomeCliente é um array de char então %[ %\n] lẽ todo array
        printf("Digite o nome completo do cliente: ");
        scanf(" %[^\n]", cadastra[i].nomeCliente); 
        
        printf("Digite sua renda mensal: ");
        scanf("%f", &cadastra[i].salario);

        printf("Digite a idade do cliente: ");
        scanf("%d", &cadastra[i].idade);

        printf("Digite o valor total do produto: ");
        scanf("%f", &cadastra[i].valorBruto);

        // Aplica a política de desconto
        politica_desconto(&cadastra[i]);

        printf("\nDesconto aplicado: %d%%\n", cadastra[i].percentualDesc);
        printf("Valor final com desconto: R$ %.2f\n", cadastra[i].valorDesconto);
    }
}

int main() {
    //variavel 'vendas' criada essencialmente para ser passada como parametro na chamada da função
    const int numVendas = 2;
    Venda vendas[numVendas]; 

    //parametros:'vendas' equivale a 'cadastra' e 'numVendas' equivale a'tamanho', veja função cadastra_vendas
    cadastra_venda(vendas, numVendas);
                                      
    return 0;
}