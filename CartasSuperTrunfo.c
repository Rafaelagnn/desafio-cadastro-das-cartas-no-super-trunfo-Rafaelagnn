#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

 // carta 1
    char Estado[30];
    int Codigo;
    char Cidade[30];
    float Populacao;
    int Pontos_turisticos;
    float Area;

    // carta2
    char Estado2[30];
    int Codigo2;
    char Cidade2[30];
    float Populacao2;
    int Pontos_turisticos2;
    float Area2;

    printf("Super Trunfo \n");

    printf("Digite um Estado para carta 1: \n");
    scanf("%s", Estado);
    printf("Estado: %s \n", Estado);

    printf("Digite o codigo da carta 1: \n");
    scanf("%d", &Codigo);
    printf("Codigo: %d \n", Codigo);

    printf("Digite uma Cidade para carta 1: \n");
    scanf("%s", Cidade);
    printf("Cidade: %s\n", Cidade);

    printf("Digite a populacao da carta 1: \n");
    scanf("%f", &Populacao);
    printf("Populacao: %f \n", Populacao);

    printf("Digite a quantidade de Pontos turisticos para carta 1: \n");
    scanf("%d", &Pontos_turisticos);
    printf("Pontos turisticos: %d \n", Pontos_turisticos);

    printf("Digite a Area em km2 para carta 1: \n");
    scanf("%f", &Area);
    printf("Area: %f km2\n", Area);

    printf("Voce finalizou a carta 1 \n");

    printf("Digite um Estado para carta 2: \n");
    scanf("%s", Estado2);
    printf("Estado: %s \n", Estado2);

    printf("Digite o codigo da carta 2: \n");
    scanf("%d", &Codigo2);
    printf("Codigo: %d\n", Codigo2);

    printf("Digite uma cidade para carta 2: \n");
    scanf("%s", Cidade2);
    printf("Cidade: %s\n", Cidade2);

    printf("Digite a populacao da carta 2:\n");
    scanf("%f", &Populacao2);
    printf("Populacao: %f\n", Populacao2);

    printf("Digite a quantidade de Pontos turisticos para carta 2: \n");
    scanf("%d", &Pontos_turisticos2);
    printf("Pontos turisticos: %d\n", Pontos_turisticos2);

    printf("Digite a area em km2 para carta 2: \n");
    scanf("%f", &Area2);
    printf("Area: %f km2\n", Area2);

     printf("Informacoes Carta 1\n");
     printf("Estado: %s \n", Estado);
     printf("Codigo: %d \n", Codigo);
     printf("Cidade: %s\n", Cidade);
     printf("Populacao: %f \n", Populacao);
     printf("Pontos turisticos: %d \n", Pontos_turisticos);
     printf("Area: %f km2\n", Area);

     printf("Informacoes da Carta 2\n");
     printf("Estado: %s \n", Estado2);
     printf("Codigo: %d\n", Codigo2);
     printf("Cidade: %s\n", Cidade2);
     printf("Populacao: %f\n", Populacao2);
     printf("Pontos turisticos: %d\n", Pontos_turisticos2);
     printf("Area: %f km2\n", Area2);
    

    return 0;
}
