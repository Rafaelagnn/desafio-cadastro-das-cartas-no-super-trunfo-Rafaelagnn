#include <stdio.h>

int main()
{

    // carta 1
    char Estado[30];
    int Codigo;
    char Cidade[30];
    int Populacao;
    int Pontos_turisticos;
    float Area;
    float PIB;

    // carta2
    char Estado2[30];
    int Codigo2;
    char Cidade2[30];
    int Populacao2;
    int Pontos_turisticos2;
    float Area2;
    float PIB2;

    printf(" ***Super Trunfo*** \n");

    printf("Digite a sigla do seu Estado para carta 1: \n");
    scanf("%s", Estado);
    // printf("Estado: %s \n", Estado);

    printf("Digite o codigo da carta 1: \n");
    scanf("%d", &Codigo);
    // printf("Codigo: %d \n", Codigo);

    printf("Digite uma Cidade para carta 1: \n");
    scanf("%s", Cidade);
    // printf("Cidade: %s\n", Cidade);

    printf("Digite a quantidade de Pontos turisticos para carta 1: \n");
    scanf("%d", &Pontos_turisticos);
    // printf("Pontos turisticos: %d \n", Pontos_turisticos);

    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &PIB);
    // printf("PIB: %.2f \n", PIB);

    printf("Digite a populacao da carta 1: \n");
    scanf("%d", &Populacao);
    // printf("Populacao: %d \n", Populacao);

    printf("Digite a Area em km2 para carta 1: \n");
    scanf("%f", &Area);
    // printf("Area: %.2f km2\n", Area);

    float Dens_populacional = (float)Populacao / Area;
    printf("A Densidade populacional e: %.2f\n", Dens_populacional);

    float PIB_percapta = (float)PIB / Populacao;
    printf("O PIB Per capta da carta n1: %.2f\n", PIB_percapta);

    printf("---------------------------- \n");
    printf("Voce finalizou a carta 1 \n");
    printf("---------------------------- \n");

    printf("Digite a sigla do seu Estado para carta 2: \n");
    scanf("%s", Estado2);
    // printf("Estado: %s \n", Estado2);

    printf("Digite o codigo da carta 2: \n");
    scanf("%d", &Codigo2);
    // printf("Codigo: %d\n", Codigo2);

    printf("Digite uma cidade para carta 2: \n");
    scanf("%s", Cidade2);
    // printf("Cidade: %s\n", Cidade2);

    printf("Digite a quantidade de Pontos turisticos para carta 2: \n");
    scanf("%d", &Pontos_turisticos2);
    // printf("Pontos turisticos: %d\n", Pontos_turisticos2);

    printf("Digite a populacao da carta 2:\n");
    scanf("%d", &Populacao2);
    // printf("Populacao: %d\n", Populacao2);

    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &PIB2);
    // printf("PIB: %.2f\n", PIB2);

    printf("Digite a area em km2 para carta 2: \n");
    scanf("%f", &Area2);
    // printf("Area: %.2f km2\n", Area2);

    float Dens_populacional2 = (float)Populacao2 / Area2;
    printf("A Densidade populacional carta n2: %.2f\n", Dens_populacional);

    float PIB_percapta2 = (float)PIB2 / Populacao2;
    printf("PIB Per capta da carta n2: %.2f\n", PIB_percapta2);

    printf("---------------------------- \n");
    printf("Voce finalizou a carta 2 \n");
    printf("---------------------------- \n");

    printf(" ***Informacoes Carta 1*** \n");
    printf("Estado: %s \n", Estado);
    printf("Codigo: %d \n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("Populacao: %d \n", Populacao);
    printf("Pontos turisticos: %d \n", Pontos_turisticos);
    printf("PIB: %.2f\n", PIB);
    printf("Area: %.2f km2\n", Area);
    printf("Densidade populacional: %.2f \n", Dens_populacional);
    printf("PIB Per capta: %.2f\n", PIB_percapta);

    printf("---------------------------- \n");

    printf(" ***Informacoes da Carta 2*** \n");
    printf("Estado: %s \n", Estado2);
    printf("Codigo: %d\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Pontos turisticos: %d\n", Pontos_turisticos2);
    printf("PIB: %.2f\n", PIB2);
    printf("Area: %.2f km2\n", Area2);
    printf("Densidade populacional: %.2f \n", Dens_populacional2);
    printf("PIB Per capta: %.2f\n", PIB_percapta2);

    return 0;
}
