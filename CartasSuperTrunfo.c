#include <stdio.h>
#include <stdlib.h>

int main() {
    char estado_c1;
    char estado_c2;
    char codigo_c1[50];  
    char codigo_c2[50];  
    char cidade_c1[50];  
    char cidade_c2[50];  
    int populacao_c1;
    int populacao_c2;
    int pontos_c1;
    int pontos_c2;
    float area_c1;
    float area_c2;
    float pib_c1;
    float pib_c2;

    // Cadastro da primeira carta
    printf("Cadastro da Primeira Carta:\n");
    printf("Digite a letra da primeira carta: ");
    scanf(" %c", &estado_c1);  
    printf("Digite o codigo da primeira carta: ");
    scanf("%s", codigo_c1);
    printf("Digite o nome da cidade da primeira carta: ");
    scanf("%s", cidade_c1);
    printf("Digite a populacao da primeira carta: ");
    scanf("%d", &populacao_c1);
    printf("Digite a area da primeira carta: ");
    scanf("%f", &area_c1);
    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib_c1);
    printf("Digite o numero de pontos turisticos da primeira carta: ");
    scanf("%d", &pontos_c1);

    // Cadastro da segunda carta
    printf("\nCadastro da Segunda Carta:\n");
    printf("Digite a letra da segunda carta: ");
    scanf(" %c", &estado_c2);  
    printf("Digite o codigo da segunda carta: ");
    scanf("%s", codigo_c2);
    printf("Digite o nome da cidade da segunda carta: ");
    scanf("%s", cidade_c2);
    printf("Digite a populacao da segunda carta: ");
    scanf("%d", &populacao_c2);
    printf("Digite a area da segunda carta: ");
    scanf("%f", &area_c2);
    printf("Digite o PIB da segunda carta: ");
    scanf("%f", &pib_c2);
    printf("Digite o numero de pontos turisticos da segunda carta: ");
    scanf("%d", &pontos_c2);

    // Exibição dos dados das cartas cadastradas
    printf("\n\nDados da Primeira Carta:\n");
    printf("\nEstado: %c", estado_c1);
    printf("\nCodigo: %s", codigo_c1);
    printf("\nNome da Cidade: %s", cidade_c1);
    printf("\nPopulacao: %d", populacao_c1);
    printf("\nArea: %.2f", area_c1);
    printf("\nPIB: %.2f", pib_c1);
    printf("\nPontos turisticos: %d", pontos_c1);

    printf("\n\nDados da Segunda Carta:\n");
    printf("\nEstado: %c", estado_c2);
    printf("\nCodigo: %s", codigo_c2);
    printf("\nNome da Cidade: %s", cidade_c2);
    printf("\nPopulacao: %d", populacao_c2);
    printf("\nArea: %.2f", area_c2);
    printf("\nPIB: %.2f", pib_c2);
    printf("\nPontos turisticos: %d", pontos_c2);

    return 0;
}