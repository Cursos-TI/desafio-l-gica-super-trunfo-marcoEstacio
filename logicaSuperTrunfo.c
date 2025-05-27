#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main()
{
    // Definição das variáveis para armazenar as propriedades das cidades
    // Obs: conforme orientações da aula para o nível aventureiro, utilizar:
    // nome do país (string), população (int), área (float), PIB (float), número de pontos turísticos (int), densidade demográfica (float)

    int carta, atributo;
    // nome do país
    char pais1[15], pais2[15];

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

    // Cadastro das Cartas:
    carta = 1;
    printf("Carta %d:\n", carta);

    // País
    printf("Digite o nome do País: ");
    scanf("%14s", pais1);

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

    // PIB per capita
    pib_per_capita1 = pib1 / populacao1;
    printf("\n");

    carta = 2;
    printf("Carta %d:\n", carta);
    // Estado
    printf("Digite o nome do País: ");
    scanf("%14s", pais2);

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

    // PIB per capita
    pib_per_capita2 = pib2 / populacao2;
    printf("\n");

    // Escolha do atributo
    printf("Escolha o atributo de comparação pelo número correspondente: \n");
    printf("População: 1\n");
    printf("Área: 2\n");
    printf("PIB: 3\n");
    printf("Número de Pontos Turísticos: 4\n");
    printf("Densidade Demográfica: 5\n\n");
    printf("Digite o número aqui:");
    scanf("%d", &atributo);
    printf("\n");

    switch (atributo)
    {
    case 1:
        printf("Atributo escolhido foi População!\n");
        if (populacao1 > populacao2)
        {
            printf("População de %s (%lu habitantes) é maior que população de %s (%lu habitantes)\n", pais1, populacao1, pais2, populacao2);
            printf("%s venceu do(a) %s\n!", pais1, pais2);
        }
        else if (populacao1 < populacao2)
        {
            printf("População de %s (%lu habitantes) é maior que população de %s (%lu habitantes)\n", pais2, populacao2, pais1, populacao1);
            printf("%s venceu do(a) %s\n!", pais2, pais1);
        }
        else
        {
            printf("Os dois países possuem o mesmo tamanho de população (%lu habitantes)\n", populacao1);
            printf("%s empatou com %s!\n", pais1, pais2);
        }
        break;
    case 2:
        printf("Atributo escolhido foi Área!\n");
        if (area1 > area2)
        {
            printf("Área de %s (%.2f km2) é maior que a área de %s (%.2f km2)\n", pais1, area1, pais2, area2);
            printf("%s venceu do(a) %s\n!", pais1, pais2);
        }
        else if (populacao1 < populacao2)
        {
            printf("Área de %s (%.2f km2) é maior que a área de %s (%.2f km2)\n", pais2, area2, pais1, area1);
            printf("%s venceu do(a) %s\n!", pais2, pais1);
        }
        else
        {
            printf("Os dois países possuem a mesma área (%.2f km2)\n", area1);
            printf("%s empatou com %s!\n", pais1, pais2);
        }
        break;
    case 3:
        printf("Atributo escolhido foi PIB!\n");
        if (pib1 > pib2)
        {
            printf("PIB de %s (%.2f reais) é maior que o PIB de %s (%.2f reais)\n", pais1, pib1, pais2, pib2);
            printf("%s venceu do(a) %s\n!", pais1, pais2);
        }
        else if (pib1 < pib2)
        {
            printf("PIB de %s (%.2f reais) é maior que o PIB de %s (%.2f reais)\n", pais2, pib2, pais1, pib1);
            printf("%s venceu do(a) %s\n!", pais2, pais1);
        }
        else
        {
            printf("Os dois países possuem o mesmo PIB (%.2f reais)\n", pib1);
            printf("%s empatou com %s!\n", pais1, pais2);
        }
        break;
    case 4:
        printf("Atributo escolhido foi o número de pontos turísticos!\n");
        if (numero_pontos_turisticos1 > numero_pontos_turisticos2)
        {
            printf("O número de pontos turísticos de %s (%u) é maior que o de %s (%u)\n", pais1, numero_pontos_turisticos1, pais2, numero_pontos_turisticos2);
            printf("%s venceu do(a) %s\n!", pais1, pais2);
        }
        else if (numero_pontos_turisticos1 < numero_pontos_turisticos2)
        {
            printf("O número de pontos turísticos de %s (%u) é maior que o de %s (%u)\n", pais2, numero_pontos_turisticos2, pais1, numero_pontos_turisticos1);
            printf("%s venceu do(a) %s\n!", pais2, pais1);
        }
        else
        {
            printf("Os dois países possuem o mesmo número de pontos turísticos (%u)\n", numero_pontos_turisticos1);
            printf("%s empatou com %s!\n", pais1, pais2);
        }
        break;
    case 5:
        printf("Atributo escolhido foi a densidade demográfica!\n");
        if (densidade1 < densidade2)
        {
            printf("A densidade demográfica de %s (%.2f pessoas/km2) é menor que a de %s (%.2f pessoas/km2)\n", pais1, densidade1, pais2, densidade2);
            printf("%s venceu do(a) %s\n!", pais1, pais2);
        }
        else if (densidade1 > densidade2)
        {
            printf("A densidade demográfica de %s (%.2f pessoas/km2) é menor que a de %s (%.2f pessoas/km2)\n", pais2, densidade2, pais1, densidade1);
            printf("%s venceu do(a) %s\n!", pais2, pais1);
        }
        else
        {
            printf("Os dois países possuem a mesma densidade demográfica (%.2f pessoas/km2)\n", densidade1);
            printf("%s empatou com %s!\n", pais1, pais2);
        }
        break;
    default:
        break;
    }

    printf("\n");

    return 0;
}
