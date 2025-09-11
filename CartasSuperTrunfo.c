#include <stdio.h>

// Desafio Super Trunfo - Países 

int main(){

// Declaracao de variaveis para a carta 1    
    char estado;
    char CodigoDaCarta [5];
    char NomeDaCidade [20];
    int populacao;
    float areaEmKm2;
    float PIB;
    int NumeroDePontosTuristicos;

 printf("Digite uma letra de 'A' a 'H'");
 scanf("%c", &estado);

 printf("Digite uma número de '1' a '8'");
 scanf("%s", CodigoDaCarta);

 printf("Qual o nome da cidade?");
 scanf(" %[^\n]", NomeDaCidade);

 printf("Digite a população da cidade!");
 scanf("%d", &populacao);



return 0;

}