#include<stdio.h>
int main()
{
    /*Cadastro da primeira Carta*/
    printf("### Cadastro da Primeira Carta ###\n");
    char estado[3], estado2[3]; /*Declaração de variaveis primeira e segunda cartas*/
    char codigo[4], codigo2[4];
    char cidade[40], cidade2[40];
    int populacao, pontos, populacao2, pontos2;
    float area, PIB, area2, PIB2;

    printf("Digite o estado: "); /*Cadastro 1*/
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

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontos);

    /*Cadastro da Segunda Carta*/
    printf("\n\n**** Cadastro Segunda Carta ****");
    
    printf("\nDigite o Estado: ");
    scanf("%2s", estado2);

    printf("Digite o código de 3 digitos: ");
    scanf("%3s", codigo2);

    printf("Digite a cidade: ");
    scanf(" %[^\n]", cidade2);
    
    printf("População: ");
    scanf("%d", &populacao2);

    printf("Area total da cidade Km2: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontos2);

    /*Exibição das Cartas*/
    printf("\n\n##** Cartas na Mesa **##\n");
    printf("Estado %s - Codigo: %s ** Estado %s - Codigo: %s\n", estado, codigo, estado2, codigo2);
    printf("Cidade %s *** Cidade %s\n", cidade, cidade2);
    printf("População %s - %d *********** População %s - %d\n", cidade, populacao, cidade2, populacao2);
    printf("Area Km2 %s - %.2f ************ Area Km2 %s - %.2f\n", cidade, area, cidade2, area2);
    printf("Total PIB %s - %.2f *********** Total PIB %s - %.2f\n", cidade, PIB, cidade2, PIB2);
    printf("Pontos Turísticos %s - %d *** Pontos Turísticos %s - %d\n\n", cidade, pontos, cidade2, pontos2);



    return(0);
}
