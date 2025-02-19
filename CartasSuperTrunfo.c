#include <stdio.h>

int main() {
    int população, número de pontos turísticos;
    char estado[20], cidade[20], carta[5];
    float área, PIB;
    
    //primeira cidade, Porto Alegre, escolhida por ser meu local de origem.

    printf("A \n"); 
    scanf("%c", &estado);
    
    printf("Porto Alegre \n");
    scanf("%s", &cidade)

    printf("A01 \n");
    scanf("%s", &carta);

    printf("11.229.915 hab. \n");
    scanf("%e", &população);

    printf("32 \n");
    scanf("%d", &número de pontos turísticos);

    printf("281.730,233 km² \n");
    scanf("%e", &área);

    printf("593,634 bilhões de reais \n");
    scanf("%e", &PIB);

    //segunda cidade, São Paulo, escolhida por ser a maior do Brasil.
    
    printf("B \n");
    scanf("%c", &estado);

    printf("São Paulo \n");
    scanf("%s", &cidade);

    printf("B01 \n");
    scanf("%s", &carta);

    printf("46.649.132 hab. \n");
    scanf("%e", &população);

    printf("36 \n");
    scanf("%d", &número de pontos turísticos);

    printf("248.219,48 km² \n");
    scanf("%e", &área);

    printf("3,130,333 trilhões de reais \n");
    scanf("%e", &PIB);

    printf("Digite sua carta: \n");
    scanf("%s" &carta);

    
    




    








    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
