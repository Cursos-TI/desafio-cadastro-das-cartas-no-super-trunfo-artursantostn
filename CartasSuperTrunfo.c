#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // ESTADO 1
    char estado_um[20];
    char codigo_carta_estado_um[20];
    char nome_cidade_estado_um[20];
    int populacao_estado_um, pontos_turisticos_estado_um;
    float area_estado_um, PIB_estado_um, densidade_populacional_estado_um, PIB_percapita_estado_um;

    // ESTADO 2
    char estado_dois[20];
    char codigo_carta_estado_dois[20];
    char nome_cidade_estado_dois[20];
    int populacao_estado_dois, pontos_turisticos_estado_dois;
    float area_estado_dois, PIB_estado_dois, densidade_populacional_estado_dois, PIB_percapita_estado_dois;

    printf("\n----------------------------------------------------\n\n");

    // Entrada Carta 1
    printf("VAMOS CADASTRAR OS DADOS DA PRIMEIRA CIDADE\n");
    printf("Digite o nome da Cidade: \n");
    scanf("%s", nome_cidade_estado_um);
    printf("-----------\n");

    printf("Digite o Estado desta Cidade: \n");
    scanf("%s", estado_um);
    printf("-----------\n");

    printf("Digite o Codigo desta Cidade: \n");
    scanf("%s", codigo_carta_estado_um);
    printf("-----------\n");

    printf("Digite a População desta Cidade: \n");
    scanf("%d", &populacao_estado_um);
    printf("-----------\n");

    printf("Digite o Número de Pontos Turísticos desta Cidade: \n");
    scanf("%d", &pontos_turisticos_estado_um);
    printf("-----------\n");

    printf("Digite a Área em km² desta Cidade: \n");
    scanf("%f", &area_estado_um);
    printf("-----------\n");

    printf("Digite o Produto Interno Bruto (PIB) em bilhões de reais desta Cidade: \n");
    scanf("%f", &PIB_estado_um);

    printf("\n----------------------------------------------------\n\n");

    // Entrada Carta 2
    printf("VAMOS CADASTRAR OS DADOS DA SEGUNDA CIDADE\n");
    printf("Digite o nome da Cidade: \n");
    scanf("%s", nome_cidade_estado_dois);
    printf("-----------\n");

    printf("Digite o Estado desta Cidade: \n");
    scanf("%s", estado_dois);
    printf("-----------\n");

    printf("Digite o Codigo desta Cidade: \n");
    scanf("%s", codigo_carta_estado_dois);
    printf("-----------\n");

    printf("Digite a População desta Cidade: \n");
    scanf("%d", &populacao_estado_dois);
    printf("-----------\n");

    printf("Digite o Número de Pontos Turísticos desta Cidade: \n");
    scanf("%d", &pontos_turisticos_estado_dois);
    printf("-----------\n");

    printf("Digite a Área em km² desta Cidade: \n");
    scanf("%f", &area_estado_dois);
    printf("-----------\n");

    printf("Digite o Produto Interno Bruto (PIB) em bilhões de reais desta Cidade: \n");
    scanf("%f", &PIB_estado_dois);

    printf("\n----------------------------------------------------\n");

    // Cálculos
    densidade_populacional_estado_um = populacao_estado_um / area_estado_um;
    densidade_populacional_estado_dois = populacao_estado_dois / area_estado_dois;

    PIB_percapita_estado_um = (PIB_estado_um * 1000000000) / populacao_estado_um; // conversão p/ reais
    PIB_percapita_estado_dois = (PIB_estado_dois * 1000000000) / populacao_estado_dois;

    // Saída Carta 1
    printf("Carta 1\n");
    printf("Codigo da Carta: %s\n", codigo_carta_estado_um);
    printf("---\n");
    printf("Cidade: %s.\n", nome_cidade_estado_um);
    printf("Estado: %s.\n", estado_um);
    printf("População: %d Habitantes.\n", populacao_estado_um);
    printf("Área: %.2f km².\n", area_estado_um);
    printf("Produto Interno Bruto (PIB): %.2f bilhões de reais.\n", PIB_estado_um);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_estado_um);
    printf("Densidade Populacional: %.2f hab/km².\n", densidade_populacional_estado_um);
    printf("PIB Per Capita: %.2f reais.\n", PIB_percapita_estado_um);

    printf("\n----------------------------------------------------\n");

    // Saída Carta 2
    printf("Carta 2\n");
    printf("Codigo da Carta: %s\n", codigo_carta_estado_dois);
    printf("---\n");
    printf("Cidade: %s.\n", nome_cidade_estado_dois);
    printf("Estado: %s.\n", estado_dois);
    printf("População: %d Habitantes.\n", populacao_estado_dois);
    printf("Área: %.2f km².\n", area_estado_dois);
    printf("Produto Interno Bruto (PIB): %.2f bilhões de reais.\n", PIB_estado_dois);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_estado_dois);
    printf("Densidade Populacional: %.2f hab/km².\n", densidade_populacional_estado_dois);
    printf("PIB Per Capita: %.2f reais.\n", PIB_percapita_estado_dois);

    return 0;
}
