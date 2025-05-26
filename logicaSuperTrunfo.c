#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main()
{
    // Definição das variáveis para armazenar as propriedades das cidades

    int carta;
    // Uma letra de 'A' a 'H' (representando um dos oito estados)
    char estado1[15], estado2[15];
    // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    char codigo1[3], codigo2[3];
    // Nome da cidade
    char cidade1[15], cidade2[15];
    // Número de habitantes da cidade
    unsigned long int populacao1, populacao2;
    // Área da cidade em quilômetros quadrados
    float area1, area2;
    // Produto Interno Bruto da cidade
    float pib1, pib2;
    // quantidade de pontos turísticos na cidade
    unsigned int numero_pontos_turisticos1, numero_pontos_turisticos2;
    // densidade populacional
    float densidade1, densidade2;
    // pib per capita
    float pib_per_capita1, pib_per_capita2;
    // super poder
    // float super_poder1, super_poder2;

    // Cadastro das Cartas:
    carta = 1;
    printf("Carta %d:\n", carta);
    // Estado
    printf("Digite o nome do Estado: ");
    scanf("%14s", estado1);
    // Código
    printf("Digite o código do estado: ");
    scanf("%2s", codigo1);
    // Cidade
    printf("Digite o nome da cidade: ");
    scanf("%14s", cidade1);
    // População
    printf("Digite o número de habitantes da cidade: ");
    scanf("%lu", &populacao1);
    // Area
    printf("Digite a área (km2) da cidade: ");
    scanf("%f", &area1);
    // PIB
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    // Pontos turísticos
    printf("Digite o número de pontos turísticos: ");
    scanf("%u", &numero_pontos_turisticos1);
    // Densidade populacional
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    printf("\n");

    carta = 2;
    printf("Carta %d:\n", carta);
    // Estado
    printf("Digite o nome do Estado: ");
    scanf("%14s", estado2);
    // Código
    printf("Digite o código do estado: ");
    scanf("%2s", codigo2);
    // Cidade
    printf("Digite o nome da cidade: ");
    scanf("%14s", cidade2);
    // População
    printf("Digite o número de habitantes da cidade: ");
    scanf("%lu", &populacao2);
    // Area
    printf("Digite a área (km2) da cidade: ");
    scanf("%f", &area2);
    // PIB
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    // Pontos turísticos
    printf("Digite o número de pontos turísticos: ");
    scanf("%u", &numero_pontos_turisticos2);
    // Densidade populacional
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    printf("\n");

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Atributo escolhido: PIB
    if (pib1 > pib2)
    {
        printf("Cidade 1 tem o maior PIB.\n");
        printf("A cidade vencedora é: %s\n", cidade1);
    }
    else
    {
        printf("Cidade 2 tem o maior PIB.\n");
        printf("A cidade vencedora é: %s\n", cidade2);
    }

    return 0;
}
