

#include <stdio.h>

int main() {
    // variáveis para a primeira carta:()
    char estado1, codigo1[4], nome1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1;

    // Cadastro: primeira carta, aqui tu vais digitar as informações que serão exibidas.
    printf("\n📍 Cadastro da Carta 1\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (Ex: A01, B03): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %s", nome1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // variáveis para a segunda carta:
    char estado2, codigo2[4], nome2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    // Cadastro: segunda carta(parte 2, mesmo protocolo da outra, amém.)
    printf("\n📍 Cadastro da Carta 2\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (Ex: A01, B03): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %s", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição das cartas cadastradas(aqui vão as informações anteriormente informadas.)
    printf("\n🔹 Cartas Cadastradas 🔹\n");

    printf("\n📜 Carta 1:\n");
    printf("- Estado: %c\n", estado1);
    printf("- Código: %s\n", codigo1);
    printf("- Nome da Cidade: %s\n", nome1);
    printf("- População: %d\n", populacao1);
    printf("- Área: %.2f km²\n", area1);
    printf("- PIB: %.2f bilhões de reais\n", pib1);
    printf("- Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\n📜 Carta 2:\n");
    printf("- Estado: %c\n", estado2);
    printf("- Código: %s\n", codigo2);
    printf("- Nome da Cidade: %s\n", nome2);
    printf("- População: %d\n", populacao2);
    printf("- Área: %.2f km²\n", area2);
    printf("- PIB: %.2f bilhões de reais\n", pib2);
    printf("- Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}


