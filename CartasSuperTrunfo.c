//teste gustavo rodrigues de carvalho//
#include <stdio.h>
int main(){
    /*Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). 
    Nome da Cidade: O nome da cidade. 
    População: O número de habitantes da cidade. 
    Área (em km²): A área da cidade em quilômetros quadrados. 
    PIB: O Produto Interno Bruto da cidade. 
    Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade.*/

    char estado[3];
    
    char codigo[4];

    char nome_cidade[50];

    int populacao;

    float area;

    float PIB;

    int pontos_turisticos;

    printf("Carta 1: (essa é a carta 1 a partir daqui você tera que colocar os dados a mão)\n");
    printf("estado:\n");
    scanf("%s",&estado);
    printf("codigo:\n");
    scanf("%s",&codigo);
    printf("nome_cidade:(coloque '-' para simular os espaços) :\n");
    scanf("%s",&nome_cidade);
    printf("populacao:\n");
    scanf("%d",&populacao);
    printf("area (Km²):\n");
    scanf("%f", &area);
    printf("PIB:\n");
    scanf("%f",&PIB);
    printf("pontos_turisticos:\n");
    scanf("%i",&pontos_turisticos);

    printf("****************************************************************\n");

    char estado2[3];

    char codigo2[4];

    char nome_cidade2[50];

    int populacao2;

    float area2;

    float PIB2;

    int pontos_turisticos2;
    

    printf("Carta 2: (essa é a carta 2 a partir daqui você tera que colocar os dados a mão)\n:");
    printf("estado2:\n");
    scanf("%s",&estado2);
    printf("codigo2:\n");
    scanf("%s",&codigo2);
    printf("nome_cidade2(coloque '-' para simular os espaços) :\n");
    scanf("%s",&nome_cidade2);
    printf("populacao2:\n");
    scanf("%d",&populacao2);
    printf("area2(Km²):\n");
    scanf("%f",&area2);
    printf("PIB2:\n");
    scanf("%f",&PIB2);
    printf("pontos_turisticos2:\n");
    scanf("%i",&pontos_turisticos2);    

    return 0;
}
