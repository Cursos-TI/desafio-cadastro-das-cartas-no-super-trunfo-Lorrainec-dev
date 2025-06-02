#include <stdio.h>

int main() {

    char estado [20]; 
    char codigo[20];
    char cidade [20];
    int populacao;
    int PontosTuristicos;
    float PIB;
    float area;

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

    printf("PIB\n");
    scanf("%f", &PIB);



    printf("Carta 1:\n");
    printf("Estado: %s \n", estado);
    printf("Código da Carta: %s \n" ,codigo);
    printf("Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Pontos Turisticos: %d \n" , PontosTuristicos);
    printf("Área total: %f \n", area);
    printf("PIB: %f \n", PIB);


    return 0;
}
