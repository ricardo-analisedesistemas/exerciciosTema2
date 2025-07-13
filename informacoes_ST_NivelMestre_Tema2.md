# Explicação em detalhes da implementação:

# 1 - Etapa:
# Criação de um novo tipo de dado através da implementação de uma struct
Inicialmente, criei uma struct e nomeei como Cadastro usando comando typedef, o objetivo foi elaborar o cadastro das cartas fazendo reaproveitamento do código através dessa struct, eliminando a necessidade de declarar as novas variaveis para cada carta a ser cadastrada, sendo assim, ao invés de decalarar individualmente cada variável para cada carta, essas variaveis agora compõem os campos de uma única struct.

Agora, cada variavel compõe uma estrutura única funcionando como 'campos' a serem preenchidos com as entradas dos dados no ato do cadastro. Podemos então reaproveitar essa estrutura para cadastro de n cartas do Jogo Super Trunfo!

# 2 - Etapa:
# Criação de todas as funções necessárias para efetuar os calculos de alguns atributos
Todos atributos responsáveis por exibirem resultados os quais serão os critérios de vitória ou derrota na comparação entre as cartas, serão devidamente calculados com resultados precisos, adotei a estratégia de declarar antes do main apenas os protótipos das funções para facilitar a leitura do código e não haver execesso de linhas até a função main.



# 3 - Etapa:
# Implemetação da função para cadastrar as cartas e exbir os dados de cada carta
Criei essa função para automatizar o processo do cadastro das cartas do jogo Super Trunfo!Usando uma única struct para cadastrar diversas cartas!
Passei como parâmetro uma variavel tipo struct Cadastro, essa é a maravilha de usar struct! Junto com a sua criação tem-se um novo tipo de dado!! Agora toda função que invoca Cadastro também herda todo seu contéudo!!

Foi fundamental assegurar o reaproveitamento da struct passando como parametro um vetor 'cadastra', e dentro da função main na chamda dessa função, foi passado como argumento a variavel do tipo Cadastro supertrunfo[2]!!O vetor de tamanho 2 indica a possibilidade de cadastrar 2 cartas!

Outrossim, já implementei durante o cadastro das cartas os calculos necessarios para exibição e comparação entre os atributos, chamando todas as funções anteriormente criadas!
Ao concluir o cadastro já temos calculados e armazenados no vetor da struct Cadastro os resultados da densidade demografica, PIB per capita, etc...

Após, implementei a função para exibir as cartas cadastradas e todas sua informações, passando como parâmetros os mesmos da função cadastra_carta, um vetor do tipo Cadastro e o tamanho do vetor!

# 4 - Etapa:
# Implementação das funções de comparação de atributos e do menu para interação com usuário.
Essa foi a etapa mais complexa, porque junto a função de comparação foi implementada uma estrutura switch/case já colocando dentro de cada case a lógica de comparação entre as cartas, a exibição dos resultados de cada atributo escolhido para comparação e a declaração de qual carta venceu determinado atributo.
Para que essa função não ficasse demasiadamente grande, optei por criar uma função separada de menu com interface para iteração com usuário.

# 5 - Etapa:
# Chamada das funções dentro do main, e passagem dos argumentos;
Foi declarada dentro do main um vetor do tipo Cadastro com tamanho 2, para cadastrar e armazenar um total de 2 cartas!
Seguido de todas as chamadas das funções!