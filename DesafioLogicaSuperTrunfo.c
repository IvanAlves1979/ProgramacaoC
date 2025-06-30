#include<stdio.h>
int main()
{
    
        
    /*Declaração de variaveis primeira e segunda cartas*/
    char estado[3], estado2[3]; 
    char codigo[4], codigo2[4];
    char cidade[40], cidade2[40];
    int populacao, pontos, populacao2, pontos2;
    float area, PIB, area2, PIB2, densidade, densidade2;

    /*Cadastro Carta 1*/
    printf("### Cadastro da Primeira Carta ###\n");
    printf("Digite o estado: "); 
    scanf("%2s", estado);

    printf("Digite o codigo de 3 digitos: ");
    scanf("%3s", codigo);

    printf("Digite a cidade: ");
    scanf(" %[^\n]", cidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Area total da cidade Km2: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &PIB);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &pontos);

    /*Cadastro Carta 2*/
    printf("\n\n**** Cadastro Segunda Carta ****");

    printf("\nDigite o Estado: ");
    scanf("%2s", estado2);

    printf("Digite o codigo de 3 digitos: ");
    scanf("%3s", codigo2);

    printf("Digite a cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area total da cidade Km2: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &pontos2);
    printf("\n\n");

    if (area != 0){
        densidade = populacao / area;
        printf("A densidade populacional de %s: %.2f habitantes\n", cidade, densidade);
    } else {
        printf("A area nao pode ser zero!\n");
    }
    if (area2 != 0){
        densidade2 = populacao2 / area2;
        printf("A densidade populacional de %s: %.2f habitantes\n\n", cidade2, densidade2);
    } else {
        printf("A area nao pode ser zero!\n\n");
    }
    if (densidade > densidade2){
        printf("Comparação de cartas(Atributo: Densidade)\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade, estado, densidade);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, densidade2);
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Comparação de cartas(Atributo: Densidade)\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade, estado, densidade);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, densidade2);
        printf("Resultado: Carta 1 (%s) venceu!\n\n", cidade);
    }
    printf("Os pontos turisticos de %s: %d\n", cidade, pontos);
    printf("Os pontos turisticos de %s: %d\n\n", cidade2, pontos2);

    if (pontos > pontos2){
        printf("Comparação de cartas(Atributo: pontos turisticos)\n");
        printf("Carta 1 - %s (%s): %d\n", cidade, estado, pontos);
        printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, pontos2);
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
    } else {
        printf("Comparação de cartas(Atributo: pontos turisticos)\n");
        printf("Carta 1 - %s (%s): %d\n", cidade, estado, pontos);
        printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, pontos2);
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }


    return(0);
}
