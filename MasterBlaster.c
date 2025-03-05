#include <stdio.h>

int main() {
    // variáveis para a primeira carta:()
    char estado1, codigo1[4], nome1[50];
    int pontos_turisticos1;
    float area1, pib1, densidade_populacional1, pib_per_capita1, super_poder1; // *Novidade*
    unsigned long int populacao1;

    // Cadastro: primeira carta, aqui tu vais digitar as informações que serão exibidas.
    printf("\n Cadastro da Carta 1\n");
    printf("Estado (A-H): ");
    scanf("%c", &estado1);
    printf("Código da Carta (Ex: A01, B03): ");
    scanf("%s", &codigo1);
    printf("Nome da Cidade: ");
    scanf("%s", &nome1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("Densidade Populacional: \n"); // *Novidade*, calculado automaticamente pela funçao, sem necessidade de adicionar info.
    printf("Pib Per Capita: \n"); // *Novidade*, calculado automaticamente pela funçao, sem necessidade de adicionar info.
    printf("Super Poder (Soma De Todos): \n"); // *Novidade*, calculado automaticamente pela função.
    
    
    // variáveis para a segunda carta:
    char estado2, codigo2[4], nome2[50];
    int pontos_turisticos2;
    float area2, pib2, densidade_populacional2, pib_per_capita2, super_poder2; // *Novidade*
    unsigned long int populacao2;

    // Cadastro: segunda carta(parte 2, mesmo protocolo da outra, amém.)
    printf("\n Cadastro da Carta 2\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (Ex: A01, B03): ");
    scanf(" %s", &codigo2);
    printf("Nome da Cidade: ");
    scanf(" %s",&nome2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("Densidade Populacional: \n"); // *Novidade*, calculado automaticamente pela funçao, sem necessidade de adicionar info. 
    printf("Pib Per Capita: \n"); // *Novidade*, calculado automaticamente pela funçao, sem necessidade de adicionar info.
    printf("Super Poder(Soma De Todos): \n"); // *novidade*, calculado automaticamente pela funçao.

    // Exibição das cartas cadastradas(aqui vão as informações anteriormente informadas.)
    printf("\n Cartas Cadastradas \n");
    
    densidade_populacional1 = (populacao1/area1); //função adicionada para fazer os calculos da densidade sem necessidade de adicionar números a mais no terminal.
    pib_per_capita1 = (pib1/populacao1);
    super_poder1 = (populacao1+area1+pib1+pontos_turisticos1);

    printf("\n Carta 1:\n");
    printf("- Estado: %c\n", estado1);
    printf("- Código: %s\n", codigo1);
    printf("- Nome da Cidade: %s\n", nome1);
    printf("- População: %lu\n", populacao1);
    printf("- Área: %.2f km²\n", area1);
    printf("- PIB: %.2f bilhões de reais\n", pib1);
    printf("- Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("- Densidade Populacional: %.2f\n", densidade_populacional1); // *Novidade*
    printf("- Pib Per Capita: %.2f\n", pib_per_capita1); // *Novidade*
    printf("- Super Poder: %.2f\n", super_poder1); // *Novidade*

    densidade_populacional2 = (populacao2/area2); //função adicionada para fazer os calculos da densidade sem necessidade de adicionar números a mais no terminal.
    pib_per_capita2 = (pib2/populacao2);
    super_poder2 = (populacao2+area2+pib2+pontos_turisticos2);

    printf("\n Carta 2:\n");
    printf("- Estado: %c\n", estado2);
    printf("- Código: %s\n", codigo2);
    printf("- Nome da Cidade: %s\n", nome2);
    printf("- População: %lu\n", populacao2);
    printf("- Área: %.2f km²\n", area2);
    printf("- PIB: %.2f bilhões de reais\n", pib2);
    printf("- Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("- Densidade Populacional: %.2f\n", densidade_populacional2); // *Novidade*
    printf("- Pib Per Capita: %.2f\n", pib_per_capita2); // *Novidade*
    printf("- Super Poder: %.2f\n", super_poder2); // *Novidade*

    //a partir daqui vem as comparaçoes, apenas coisas chatas de nerd, mas se quiser conferir, fique a vonte.
    
    int escolha;
    
    do {
        printf("\nEscolha uma categoria para comparar:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("6 - PIB Per Capita\n");
        printf("7 - Super Poder\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &escolha);

    switch (escolha) {
    case 1:
    if (populacao1 > populacao2)
        printf("Carta 1 vence com %lu habitantes!\n", populacao1);
    else if (populacao1 < populacao2)
        printf("Carta 2 vence com %lu habitantes!\n", populacao2);
    else
        printf("EMPATE na população!\n");
                break;

    case 2:
    if (area1 > area2)
        printf("Carta 1 vence com %.2f km²!\n", area1);
    else if (area1 < area2)
        printf("Carta 2 vence com %.2f km²!\n", area2);
    else
        printf("EMPATE na área!\n");
                break;

    case 3:
    if (pib1 > pib2)
        printf("Carta 1 vence com PIB de %.2f bilhões!\n", pib1);
    else if (pib1 < pib2)
        printf("Carta 2 vence com PIB de %.2f bilhões!\n", pib2);
    else
        printf("EMPATE no PIB!\n");
               break;

    case 4:
    if (pontos_turisticos1 > pontos_turisticos2)
        printf("Carta 1 vence com %d pontos turísticos!\n", pontos_turisticos1);
    else if (pontos_turisticos1 < pontos_turisticos2)
        printf("Carta 2 vence com %d pontos turísticos!\n", pontos_turisticos2);
    else
        printf("EMPATE nos pontos turísticos!\n");
               break;

    case 5:
    if (densidade_populacional1 < densidade_populacional2)
        printf("Carta 1 vence com densidade populacional de %.2f!\n", densidade_populacional1);
    else if (densidade_populacional1 > densidade_populacional2)
        printf("Carta 2 vence com densidade populacional de %.2f!\n", densidade_populacional2);
    else
        printf("EMPATE na densidade populacional!\n");
               break;

    case 6:
    if (pib_per_capita1 > pib_per_capita2)
        printf("Carta 1 vence com PIB per capita de %.2f!\n", pib_per_capita1);
    else if (pib_per_capita1 < pib_per_capita2)
        printf("Carta 2 vence com PIB per capita de %.2f!\n", pib_per_capita2);
    else
        printf("EMPATE no PIB per capita!\n");
               break;

    case 7:
    if (super_poder1 > super_poder2)
        printf("Carta 1 vence com super poder de %.2f!\n", super_poder1);
    else if (super_poder1 < super_poder2)
        printf("Carta 2 vence com super poder de %.2f!\n", super_poder2);
    else
        printf("EMPATE no super poder!\n");
              break;

    case 0:
        printf("Saindo da comparação...\n");
               break;

    default:
        printf("Opção inválida, tente novamente.\n");
        }

    } while (escolha != 0);
    
    printf("Comparaçoes(Quem Leva essa ?): \n");
    
    if (populacao1 > populacao2){
        printf("Carta 1 Vence! %lu\n", populacao1);
    }else if (populacao1 < populacao2){
        printf("Carta 2 Vence! %lu\n", populacao2);
    } else {
        printf("EMPATE, Quais As Chances?\n");   
    }


    if (area1 > area2){
       printf("Carta 1 Vence! %.2f\n", area1);
    }else if (area1 < area2){
        printf("Carta 2 Vence! %.2f\n", area2);
    }else{
        printf("EMPATE, Quais As Chances?\n");
    }


    if (pib1 > pib2){
        printf("Carta 1 Vence! %.2f\n", pib1);
    }else if (pib1 < pib2){
        printf("Carta 2 Ganha! %.2f\n", pib2);
    }else{
        printf("EMPATE, Quais As Chances? \n");
    }


    if (pontos_turisticos1 > pontos_turisticos2){
        printf("Carta 1 Vence! %d\n", pontos_turisticos1);
    }else if (pontos_turisticos1 < pontos_turisticos2){
        printf("Carta 2 Vence! %d\n", pontos_turisticos2);
    }else{
        printf("EMPATE, Quais As Chances? \n");
    }


    if (densidade_populacional1 < densidade_populacional2){
        printf("Carta 1 Vence! %.2f\n", densidade_populacional1);
    }else if (densidade_populacional1 > densidade_populacional2){
        printf("Carta 2 Vence! %.2f\n", densidade_populacional2);
    }else{
        printf("EMPATE, Quais As Chances? \n");   
    }


    if (pib_per_capita1 > pib_per_capita2){
        printf("Carta 1 Vence! %.2f\n", pib_per_capita1);
    }else if (pib_per_capita1 < pib_per_capita2){
        printf("Carta 2 Vence! %.2f\n", pib_per_capita2);
    } else {
        printf("EMPATE, Quais As Chances?\n");   
    }

    
    if (super_poder1 > super_poder2){
        printf("Carta 1 Vence! %.2f\n", super_poder1);
    }else if (super_poder1 < super_poder2){
        printf("Carta 2 Vence! %.2f\n", super_poder2);
    } else {
        printf("EMPATE, Quais As Chances?\n");   
    }
  
    
    




    return 0;
}
