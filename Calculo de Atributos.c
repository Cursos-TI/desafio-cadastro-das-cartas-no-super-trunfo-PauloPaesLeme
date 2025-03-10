#include <stdio.h>
#include <stdlib.h>

int main() {
    char estado_c1, estado_c2;
    char codigo_c1[50], codigo_c2[50];
    char cidade_c1[50], cidade_c2[50];
    int populacao_c1, populacao_c2;
    int pontos_c1, pontos_c2;
    float area_c1, area_c2;
    float pib_c1, pib_c2;

    // Cadastro da primeira carta
    printf("Cadastro da Primeira Carta:\n");
    printf("Digite a letra que representa o estado (ex.: RJ, SP, etc.): ");
    scanf(" %c", &estado_c1);
    printf("Digite o código da cidade (ex.: RJ01): ");
    scanf("%s", codigo_c1);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade_c1);
    printf("Digite a população: ");
    scanf("%d", &populacao_c1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area_c1);
    printf("Digite o PIB (em milhões): ");
    scanf("%f", &pib_c1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_c1);

    // Cadastro da segunda carta
    printf("\nCadastro da Segunda Carta:\n");
    printf("Digite a letra que representa o estado (ex.: RJ, SP, etc.): ");
    scanf(" %c", &estado_c2);
    printf("Digite o código da cidade (ex.: RJ02): ");
    scanf("%s", codigo_c2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade_c2);
    printf("Digite a população: ");
    scanf("%d", &populacao_c2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area_c2);
    printf("Digite o PIB (em milhões): ");
    scanf("%f", &pib_c2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_c2);

    // Cálculos
    float densidade_c1 = (area_c1 != 0) ? (populacao_c1 / area_c1) : 0;
    float densidade_c2 = (area_c2 != 0) ? (populacao_c2 / area_c2) : 0;
    float pib_per_capita_c1 = (populacao_c1 != 0) ? (pib_c1 / populacao_c1) : 0;
    float pib_per_capita_c2 = (populacao_c2 != 0) ? (pib_c2 / populacao_c2) : 0;

    // Exibição dos dados das cartas cadastradas
    printf("\n======== Dados da Primeira Carta ========\n");
    printf("Estado: %c\n", estado_c1);
    printf("Código: %s\n", codigo_c1);
    printf("Nome da Cidade: %s\n", cidade_c1);
    printf("População: %d\n", populacao_c1);
    printf("Área: %.2f km²\n", area_c1);
    printf("PIB: R$ %.2f milhões\n", pib_c1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_c1);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita_c1);
    printf("Pontos Turísticos: %d\n", pontos_c1);

    printf("\n======== Dados da Segunda Carta ========\n");
    printf("Estado: %c\n", estado_c2);
    printf("Código: %s\n", codigo_c2);
    printf("Nome da Cidade: %s\n", cidade_c2);
    printf("População: %d\n", populacao_c2);
    printf("Área: %.2f km²\n", area_c2);
    printf("PIB: R$ %.2f milhões\n", pib_c2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_c2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita_c2);
    printf("Pontos Turísticos: %d\n", pontos_c2);

    return 0;
}