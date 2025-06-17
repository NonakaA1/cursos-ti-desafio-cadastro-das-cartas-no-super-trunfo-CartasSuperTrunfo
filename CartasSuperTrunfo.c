#include <stdio.h>

int main() {
    char codigo1[4], codigo2[4];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);
    printf("Digite a area (em km2): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", codigo2);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);
    printf("Digite a area (em km2): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;

    // Super Poder
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade1);
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade2);

    // Exibição dos dados
    printf("\n==== Dados da Carta 1 ====\n");
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.6f bilhoes/hab\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n==== Dados da Carta 2 ====\n");
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.6f bilhoes/hab\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparações
    printf("\n==== Resultado das Comparacoes ====\n");
    printf("Populacao: %d\n", populacao1 > populacao2);
    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional (menor vence): %d\n", densidade1 < densidade2);
    printf("PIB per Capita: %d\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: %d\n", super_poder1 > super_poder2);

    return 0;
}
