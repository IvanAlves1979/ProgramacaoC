#include<stdio.h>
int main()
{
    /*Cadastro da primeira Carta*/
    printf("### Cadastro da Primeira Carta ###\n\n");
    char estado[3]; /*Declaração de variaveis*/
    char codigo[4];
    char cidade[40];
    int populacao, pontos;
    float area, PIB;

    printf("Digite o estado: ");
    scanf("%2s", estado);

    printf("Digite o codigo de 3 digitos: ");
    scanf("%3s", codigo);

    printf("Digite a cidade: ");
    scanf(" %[^\n]", cidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Area total da cidade Km2: ");
    scanf("%d", &area);

    printf("Digite o PIB: ");
    scanf("%d", &PIB);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontos);



    return(0);
}
