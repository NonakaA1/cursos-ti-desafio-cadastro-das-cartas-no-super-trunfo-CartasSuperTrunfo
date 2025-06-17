#include <stdio.h>
#include <string.h>

int main() {
    char codigo1[20], codigo2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;
    char buffer[100];

    // ===== Cadastro da Carta 1 =====
    printf("\n===== Cadastro da Carta 1 =====\n");
    printf("Digite o código da cidade (ex: A01): ");
    fgets(codigo1, sizeof(codigo1), stdin);
    codigo1[strcspn(codigo1, "\n")] = 0; // Remove ENTER

    printf("Digite a população (somente números): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%lu", &populacao1);

    printf("Digite a área (em km²): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &pontos_turisticos1);

    // ===== Cadastro da Carta 2 =====
    printf("\n===== Cadastro da Carta 2 =====\n");
    printf("Digite o código da cidade (ex: A01): ");
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo2, "\n")] = 0;

    printf("Digite a população (somente números): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%lu", &populacao2);

    printf("Digite a área (em km²): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &pontos_turisticos2);

    // ===== Cálculo dos atributos =====
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;

    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade1);
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade2);

    // ===== Exibição dos dados =====
    printf("\n===== Dados da Carta 1 =====\n");
    printf("Código: %s\n", codigo1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.6f bilhões/hab\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n===== Dados da Carta 2 =====\n");
    printf("Código: %s\n", codigo2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.6f bilhões/hab\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // ===== Comparações =====
    printf("\n===== Resultado das Comparações =====\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional (MENOR vence): %d\n", densidade1 < densidade2);
    printf("PIB per Capita: %d\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: %d\n", super_poder1 > super_poder2);

    return 0;
}
