#include<stdio.h>

typedef struct{
    //variáveis para dados cadastrais das cartas
    char idestado;
    char codigocarta [5];
    char nomecidade [50];
    int populacao;
    float area;
    long long int pib;
    int pontostur;
   ///variáveis para todos os calculos necessaŕios do programa
   float pibper; //pib per capita
   float densidadepop;
   long double densidadeinversa;
   long double superpoder;
}Cadastro;

//prototipos das funçoes de comparaçao e menu 
void menu_comparacao(const Cadastro *carta1,const Cadastro *carta2);
void compara_atributo(const Cadastro *c1, const Cadastro *c2, int atributo);

//função para calcular renda per capita
float calcula_pibper(long long int pib, int populacao){
    return (float)pib / populacao;
}

//funcao para calcular densidade demografica    
float calcula_densidade(int populacao, float area){
    return (float)populacao / area;
}

//função para calcular densidade demografica inversa
long double calcula_densidadeinversa(float area, int populacao){
    return area / populacao;
}

//função para calcular superpoder
long double calcula_superpoder(long long int pib, float area, int populacao, int pontosturisticos, float pibper){
    return (long double)pib + area + populacao + pontosturisticos + pibper;
}

void cadastra_carta(Cadastro cadastra[], int quantidade){
    for(int i = 0; i < quantidade; i++){
        printf("   CADASTRO DE CARTAS JOGO SUPER TRUNFO   \n");
        printf("Digite o id da carta(Letra de A a H): ");
        scanf(" %c",&cadastra[i].idestado);
        printf("Digite o código da carta: ");
        scanf("%4s",cadastra[i].codigocarta);
        printf("Digite o nome da cidade: ");
        scanf(" %49[^\n]",cadastra[i].nomecidade);
        while(getchar() != '\n');
        printf("Digite a população total: ");
        scanf("%d",&cadastra[i].populacao);
        printf("Digite a area total em km2: ");
        scanf("%f",&cadastra[i].area);
        printf("Digite o PIB anual em bilhões de R$(sem pontos ou vírgulas): ");
        scanf("%lld",&cadastra[i].pib);
        printf("Digite a quantidade de pontos turísticos: ");
        scanf("%d",&cadastra[i].pontostur);

        //calculos
        cadastra[i].pibper = calcula_pibper(cadastra[i].pib,cadastra[i].populacao);
        cadastra[i].densidadepop = calcula_densidade(cadastra[i].populacao,cadastra[i].area);
        cadastra[i].densidadeinversa = calcula_densidadeinversa(cadastra[i].area, cadastra[i].populacao);
        cadastra[i].superpoder = calcula_superpoder((long double)cadastra[i].pib, cadastra[i].area, cadastra[i].populacao,
                                                     cadastra[i].pontostur, cadastra[i].pibper);
    }
}

void exibe_resultado(Cadastro cartas[], int quantidade){
    printf("\n=== DADOS DAS CARTAS ===\n");
    for(int i = 0; i < quantidade; i++){
        printf("ID-ESTADO:  %c\n",cartas[i].idestado);
        printf("Código da Carta:  %s\n",cartas[i].codigocarta);
        printf("Nome da cidade:  %s\n",cartas[i].nomecidade);
        printf("População total:  %d\n",cartas[i].populacao);
        printf("Area total:  %.2f km2\n",cartas[i].area);
        printf("PIB:  %lld\n", cartas[i].pib);
        printf("Total de pontos turísticos: %d\n",cartas[i].pontostur);
        printf("PIB PER CAPITA:  R$ %.2f\n",cartas[i].pibper);
        printf("Densidade populacional:  %.2f habitantes/km2\n",cartas[i].densidadepop);
        printf("Densidade pop/inversa:   %.8Lf km2/habitantes\n",cartas[i].densidadeinversa);
        printf("SUPERPODER:  %.2Lf\n",cartas[i].superpoder);
        printf("\n");
    }
}

void compara_atributo(const Cadastro *c1, const Cadastro *c2, int atributo){
    switch(atributo){
        case 1: // Área
            printf("\n=== COMPARANDO ÁREA ===\n");
            if(c1->area > c2->area){
                printf("%s: %.2f km2\n%s: %.2f km2\n",
                      c1->nomecidade, c1->area, c2->nomecidade, c2->area);
                printf(">> %s VENCE em área/km2\n",c1->nomecidade);
            }else if(c1->area < c2->area){
                printf("%s: %.2f km2\n%s: %.2f km2\n",
                      c2->nomecidade, c2->area, c1->nomecidade, c1->area);
                printf(">> %s VENCE em área/km2\n",c2->nomecidade);
            }else{
                printf(">> EMPATE em área: %.2f km2\n",c1->area);
            }
            break;
            
        case 2: // População
            printf("\n=== COMPARANDO POPULAÇÃO ===\n");
            if(c1->populacao > c2->populacao){
                printf("%s: %d hab.\n%s: %d hab.\n",
                      c1->nomecidade, c1->populacao, c2->nomecidade, c2->populacao);
                printf(">> %s VENCE em população!\n",c1->nomecidade);
            }else if(c1->populacao < c2->populacao){
                printf("%s: %d hab.\n%s: %d hab.\n",
                      c2->nomecidade, c2->populacao, c1->nomecidade, c1->populacao);
                printf(">> %s VENCE em população!\n",c2->nomecidade);
            }else{
                printf(">> EMPATE em população: %d hab.\n",c1->populacao);
            }
            break;
            
        case 3: // PIB
            printf("\n=== COMPARANDO PIB ===\n");
            if(c1->pib > c2->pib){
                printf("%s: %lld bi\n%s: %lld bi\n",
                      c1->nomecidade, c1->pib, c2->nomecidade, c2->pib);
                printf(">> %s VENCE em PIB!\n",c1->nomecidade);
            }else if(c1->pib < c2->pib){
                printf("%s: %lld bi\n%s: %lld bi\n",
                      c2->nomecidade, c2->pib, c1->nomecidade, c1->pib);
                printf(">> %s VENCE em PIB!\n",c2->nomecidade);
            }else{
                printf(">> EMPATE em PIB: %lld bi\n",c1->pib);
            }
            break;
            
        case 4: // Pontos Turísticos
            printf("\n=== COMPARANDO PONTOS TURÍSTICOS ===\n");
            if(c1->pontostur > c2->pontostur){
                printf("%s: %d pontos\n%s: %d pontos\n",
                      c1->nomecidade, c1->pontostur, c2->nomecidade, c2->pontostur);
                printf(">> %s VENCE em pontos turísticos!\n",c1->nomecidade);
            }else if(c1->pontostur < c2->pontostur){
                printf("%s: %d pontos\n%s: %d pontos\n",
                      c2->nomecidade, c2->pontostur, c1->nomecidade, c1->pontostur);
                printf(">> %s VENCE em pontos turísticos!\n",c2->nomecidade);
            }else{
                printf(">> EMPATE em pontos turísticos: %d pontos\n",c1->pontostur);
            }
            break;
            
        case 5: // PIB per capita
            printf("\n=== COMPARANDO PIB PER CAPITA ===\n");
            if(c1->pibper > c2->pibper){
                printf("%s: R$ %.2f\n%s: R$ %.2f\n",
                      c1->nomecidade, c1->pibper, c2->nomecidade, c2->pibper);
                printf(">> %s VENCE em PIB per capita!\n",c1->nomecidade);
            }else if(c1->pibper < c2->pibper){
                printf("%s: R$ %.2f\n%s: R$ %.2f\n",
                      c2->nomecidade, c2->pibper, c1->nomecidade, c1->pibper);
                printf(">> %s VENCE em PIB per capita!\n",c2->nomecidade);
            }else{
                printf(">> EMPATE em PIB per capita: R$ %.2f\n",c1->pibper);
            }
            break;
            
        case 6: // Densidade Demográfica
            printf("\n=== COMPARANDO DENSIDADE DEMOGRÁFICA ===\n");
            if(c1->densidadepop < c2->densidadepop){
                printf("%s: %.2f hab/km2\n%s: %.2f hab/km2\n",
                      c1->nomecidade, c1->densidadepop, c2->nomecidade, c2->densidadepop);
                printf(">> %s VENCE pois tem a menor densidade demográfica!\n",c1->nomecidade);
            }else if(c1->densidadepop > c2->densidadepop){
                printf("%s: %.2f hab/km2\n%s: %.2f hab/km2\n",
                      c2->nomecidade, c2->densidadepop, c1->nomecidade, c1->densidadepop);
                printf(">> %s VENCE pois tem a menor densidade demográfica!\n",c2->nomecidade);
            }else{
                printf(">> EMPATE em densidade demográfica: %.2f hab/km2\n",c1->densidadepop);
            }
            break;
            
        case 7: // Densidade Inversa
            printf("\n=== COMPARANDO DENSIDADE INVERSÁ ===\n");
            if(c1->densidadeinversa > c2->densidadeinversa){
                printf("%s: %.8Lf km2/hab\n%s: %.8Lf km2/hab\n",
                      c1->nomecidade, c1->densidadeinversa, c2->nomecidade, c2->densidadeinversa);
                printf(">> %s VENCE em densidade inversa!\n",c1->nomecidade);
            }else if(c1->densidadeinversa < c2->densidadeinversa){
                printf("%s: %.8Lf km2/hab\n%s: %.8Lf km2/hab\n",
                      c2->nomecidade, c2->densidadeinversa, c1->nomecidade, c1->densidadeinversa);
                printf(">> %s VENCE em densidade inversa!\n",c2->nomecidade);
            }else{
                printf(">> EMPATE em densidade inversa: %.8Lf km2/hab\n",c1->densidadeinversa);
            }
            break;
            
        case 8: // Superpoder
            printf("\n=== COMPARANDO SUPER PODER ===\n");
            if(c1->superpoder > c2->superpoder){
                printf("%s: %.2Lf\n%s: %.2Lf\n",
                      c1->nomecidade, c1->superpoder, c2->nomecidade, c2->superpoder);
                printf(">> %s VENCE em SUPER PODER!\n",c1->nomecidade);
            }else if(c1->superpoder < c2->superpoder){
                printf("%s: %.2Lf\n%s: %.2Lf\n",
                      c2->nomecidade, c2->superpoder, c1->nomecidade, c1->superpoder);
                printf(">> %s VENCE em SUPER PODER!\n",c2->nomecidade);
            }else{
                printf(">> EMPATE em SUPER PODER: %.2Lf\n",c1->superpoder);
            }
            break;
            
        default:
            printf("Opção inválida!\n");
    }
}
//*carta1 e *carta 2 indicam ponteiros e não cópías da struct Cadastro 
void menu_comparacao(const Cadastro *carta1, const Cadastro *carta2){//assinatura da função
    int opcao;
    do{
        printf("\n=== MENU DE COMPARAÇÃO ===\n");
        printf("1. Comparar Área\n");
        printf("2. Comparar População total\n");
        printf("3. Comparar PIB ANUAL\n");
        printf("4. Comparar Pontos turísticos\n");
        printf("5. Comparar PIB per capita\n");
        printf("6. Comparar Densidade Demográfica\n");
        printf("7. Comparar Densidade Demográfica Inversa\n");
        printf("8. Comparar SUPERPODER\n");
        printf("0. SAIR\n");
        printf("Escolha: ");
        
        if(scanf("%d", &opcao) != 1){
            printf("Entrada inválida!\n");
            while(getchar() != '\n');
            continue;
        }

        if(opcao == 0) break;
        
        if(opcao < 1 || opcao > 8){
            printf("Opção inválida! Tente novamente.\n");
            continue;
        }

        compara_atributo(carta1, carta2, opcao);
        
        printf("\nPressione Enter para continuar...");
        while(getchar() != '\n');
        getchar();
        
    } while(opcao != 0);
}

int main(){
    const int numcartas = 2;
    Cadastro supertrunfo[numcartas];
    
    cadastra_carta(supertrunfo, numcartas);
    exibe_resultado(supertrunfo, numcartas);
    menu_comparacao(&supertrunfo[0], &supertrunfo[1]);//variavel supertrunfo foi passada como array de struct
                                                      // contém operador & que retorna o endereço de memória da primeira carta array[0], e da segunda no array [1] 
    return 0;
}