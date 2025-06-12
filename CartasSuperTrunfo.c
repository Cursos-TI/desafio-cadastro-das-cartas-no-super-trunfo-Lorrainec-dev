#include <stdio.h>

int main() {

    char estado [2]; 
    char codigo [5];
    char cidade [15];
    int populacao;
    int PontosTuristicos;
    float PIB;
    float area;

    printf("**Digite os dados da carta 1**\n");
    printf("Digite o Estado:\n");
    scanf("%s", &estado);

    printf("Digite o Código:\n");
    scanf("%s", &codigo);

    printf("Digite o Nome da Cidade:\n");
    scanf("%s", &cidade);

    printf("População total:\n");
    scanf("%d", &populacao);

    printf("Quantidade de Pontos Turísticos:\n");
    scanf("%d", &PontosTuristicos);

    printf("Área total:\n");
    scanf("%f", &area);

    printf("PIB:\n");
    scanf("%f", &PIB);



    printf("**Carta 1!**\n");
    printf("Estado: %s \n", estado);
    printf("Código da Carta: %s%s \n", estado ,codigo);
    printf("Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Pontos Turisticos: %d \n" , PontosTuristicos);
    printf("Área total: %f KM²\n", area);
    printf("PIB: %f Bilhões de Reais\n\n", PIB);


//dados da carta 2
    printf("**Digite os dados da carta 2**\n");
    printf("Digite o Estado:\n");
    scanf("%s", &estado);

    printf("Digite o Código:\n");
    scanf("%s", &codigo);

    printf("Digite o Nome da Cidade:\n");
    scanf("%s", &cidade);

    printf("População total:\n");
    scanf("%d", &populacao);

    printf("Quantidade de Pontos Turísticos:\n");
    scanf("%d", &PontosTuristicos);

    printf("Área total:\n");
    scanf("%f", &area);

    printf("PIB:\n");
    scanf("%f", &PIB);

    printf("Carta 2!\n");
    printf("Estado: %s \n", estado);
    printf("Código da Carta: %s%S \n\n", estado ,codigo);
    printf("Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Pontos Turisticos: %d \n" , PontosTuristicos);
    printf("Área total: %f KM² \n", area);
    printf("PIB: %f Bilhões de Reais\n", PIB);


    return 0;
} 
