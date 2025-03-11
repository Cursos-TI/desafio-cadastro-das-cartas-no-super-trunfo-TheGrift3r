#include <stdio.h>
#include <string.h>

//estrutura para representar a carta.
typedef struct {
    char estado[3];
    char codigo[10];
    char cidade[50];
    int populaçao;
    float area;
    float pib;
    int pontosturisticos;
}Carta;

//funçao para calcular densidade.
float calcularDensidade(Carta carta){
    return carta.populaçao / carta.area;
}

//funçao para calcular o pib per capita,
float calcularPibPerCapita(Carta carta){
    return carta.pib / carta.populaçao;
}

//funçao para comparar 2 cartas de acordo com o escolhido.
int compararCartas(Carta carta1, Carta carta2, char atributo[]){
    float valor1, valor2;
    int menorVence = 0; //flag apara saber se o menor vence.

    if (strcmp(atributo, "populaçao") == 0)
    {
    valor1 = carta1.populaçao;
    valor2 = carta2.populaçao;
    }else if (strcmp(atributo,"area") == 0)
    {
    valor1 = carta1.area;
    valor2 = carta2.area;
    }else if (strcmp(atributo, "pib") == 0)
    {
    valor1 = carta1.pib;
    valor2 = carta2.pib;
    }else if (strcmp(atributo, "densidade") == 0)
    {
    valor1 = calcularDensidade(carta1);
    valor2 = calcularDensidade(carta2);
    }else if (strcmp(atributo, "pibpercapita") == 0)
    {
    valor1 = calcularPibPerCapita(carta1);
    valor2 = calcularPibPerCapita(carta2);
    }else
    {
        printf("Atributo Inválido!\n");
        return -1;
    }

    //exibir a comparaçao.
    printf("\nComparação Das Cartas (Atributo:%s)\n", atributo);
    printf("Carta 1 ->%s (%s): %.2f\n", carta1.cidade, carta1.estado, valor1);
    printf("Carta 2 ->%s (%s): %.2f\n", carta2.cidade, carta2.estado, valor2);

    //vendo quem vence.
    if (valor1 == valor2)
    {
       printf("EMPATE, quais a chances?\n");
       return 0;
    }else if (valor1 > valor2)
    {
        printf("Carta 1 Vence (%s)\n", carta1.cidade);
        return 1;
    }else if (valor1 < valor2)
    {
        printf("Carta 2 Vence (%s)\n", carta2.cidade);
        return 2;
    }

}
    
int main(){
//Cartas Cadastradas.
Carta carta1 = {"SP", "001", "São Paulo", 12300000, 1521.11, 699.28, 25};
Carta carta2 = {"RJ", "002", "Rio De Janeiro", 670000, 1200.27, 400.50, 18};

// Escolha do atributo para comparação (pode ser alterado)
char atributoEscolhido[] = "populaçao"; // Modifique para "area", "pib", "densidade", etc.

// Comparar as cartas
int resultado = compararCartas(carta1, carta2, atributoEscolhido);



}