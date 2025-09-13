#include <stdio.h>

// Desafio Super Trunfo - Países 
// O objetivo deste programa é cadastrar as cartas do jogo.
// Usamos 'printf' para exibir mensagens na tela, guiando o usuário.
// Usamos 'scanf' para ler as informações que o usuário digita no teclado.

int main(){

// Declaracao de variaveis para a carta 1    
    char estado1;
    char CodigoDaCarta1 [5];
    char NomeDaCidade1 [20];
    int populacao1;
    float areaEmKm2_1;
    float PIB1;
    int NumeroDePontosTuristicos1;

 // Declaracao de variaveis para a carta 2 
    char estado2;
    char CodigoDaCarta2 [5];
    char NomeDaCidade2 [20];
    int populacao2;
    float areaEmKm2_2;
    float PIB2;
    int NumeroDePontosTuristicos2;

 // Cadastro da carta 1
 // Usamos printf para pedir as informações ao usuário.
 // Usamos scanf para ler a entrada do teclado e armazenar na variável

   printf("Digite uma letra de 'A' a 'H'\n");
   scanf(" %c", &estado1);

   printf("Digite uma número de '1' a '8'\n");
   scanf(" %s", CodigoDaCarta1);

   printf("Qual o nome da cidade?\n");
   scanf(" %[^\n]", NomeDaCidade1);

   printf("Digite a população da cidade!\n");
   scanf("%d", &populacao1);

   printf("Digite a Aréa em KM²!\n");
   scanf("%f", &areaEmKm2_1);

   printf("Digite o PIB!\n");
   scanf("%f", &PIB1);

   printf("Digite os números de pontos turisticos!\n");
   scanf("%i", &NumeroDePontosTuristicos1);

   // Usamos printf para exibir os dados da carta 1

   printf("Estado: %c\n", estado1);
   printf("Codigo: %s\n", CodigoDaCarta1);
   printf("Cidade: %s\n", NomeDaCidade1);
   printf("População: %d\n", populacao1);
   printf("Aréa: %.2f\n", areaEmKm2_1);
   printf("PIB: %.2f\n", PIB1);
   printf("Pontos turisticos: %d\n", NumeroDePontosTuristicos1);

 // Cadastro da carta 2
 // Usamos printf para pedir as informações ao usuário.
 // Usamos scanf para ler a entrada do teclado e armazenar na variável

   printf("Digite uma letra de 'A' a 'H'\n");
   scanf(" %c", &estado2);

   printf("Digite uma número de '1' a '8'\n");
   scanf(" %s", CodigoDaCarta2);

   printf("Qual o nome da cidade?\n");
   scanf(" %[^\n]", NomeDaCidade2);

   printf("Digite a população da cidade!\n");
   scanf("%d", &populacao2);

   printf("Digite a Aréa em KM²!\n");
   scanf("%f", &areaEmKm2_2);

   printf("Digite o PIB!\n");
   scanf("%f", &PIB2);

   printf("Digite os números de pontos turisticos!\n");
   scanf("%i", &NumeroDePontosTuristicos2);


   // Usamos printf para exibir os dados da carta 2

   printf("Estado: %c\n", estado2);
   printf("Codigo: %s\n", CodigoDaCarta2);
   printf("Cidade: %s\n", NomeDaCidade2);
   printf("População: %d\n", populacao2);
   printf("Aréa: %.2f\n", areaEmKm2_2);
   printf("PIB: %.2f\n", PIB2);
   printf("Pontos turisticos: %d\n", NumeroDePontosTuristicos2);

return 0;

}