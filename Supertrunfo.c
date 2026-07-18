#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  int codigo_carta1, codigo_carta2;
  char estado1 [3], estado2 [3];
  char cidade1 [50], cidade2 [50];
  int populacao1, populacao2;
  float area_km1, area_km2;
  unsigned int pib1, pib2;
  int pontos_turisticos1, pontos_turisticos2;
  float densidadePopulaciona1, densidadePopulacional2;
  float pibPercapita1, pibPercapita2;

    
    // Área para entrada de dados

    //Carta1

  printf("digite o codigo_carta1: \n");
  scanf("%d", &codigo_carta1);

  printf("Digite o estado1: \n");
  scanf("%s", estado1);

  printf("Digite o nome da cidade : \n");
  scanf("%s", cidade1);

  printf("digite a populacao1: \n");
  scanf("%d", &populacao1);

  printf("digite a area1: \n");
  scanf("%f", &area_km1);

  printf("digite o pib1: \n");
  scanf("%ud", &pib1);

  printf("Digite numero de pontos turisticos1: \n");
  scanf("%d", &pontos_turisticos1);

  printf("A densidade populacional é: %.2f\n", (populacao1 / area_km1));

  printf("O pib per capita é: %u\n",(pib1 / populacao1));

  //Carta2

  printf("digite o codigo_carta2: \n");
  scanf("%d", &codigo_carta2);

  printf("Digite o estado2: \n");
  scanf("%s", estado2);

  printf("Digite o nome da cidade2 : \n");
  scanf("%s", cidade2);

  printf("digite a populacao2: \n");
  scanf("%d", &populacao2);

  printf("digite a area2: \n");
  scanf("%f", &area_km2);

  
  printf("digite o pib2: \n");
  scanf("%u", &pib2);

  printf("Digite numero de pontos turisticos2: \n");
  scanf("%d", &pontos_turisticos2);

  printf("A densidade populacional é: %.2f\n", (populacao2 / area_km2));

  printf("O pib per capita é: %u\n",(pib2 / populacao2));

    // Área para exibição dos dados da cidade

    //Carta1
    
  printf("Codigo: %d\n", codigo_carta1);
  printf("Estado: %s\n", estado1);
  printf("Cidade: %s\n", cidade1);
  printf("populacao: %d\n", populacao1);
  printf("Area: %f\n", area_km1);
  printf("Pib: %u\n", pib1);
  printf("Pontos Turisticos: %d\n", pontos_turisticos1);
  printf("Densidade populaconal: %.2f\n", (populacao1 / area_km1));
  printf("Pib per cápita: %u\n", (pib1 / populacao1));

    //Carta2

  printf("Codigo: %d\n", codigo_carta2);
  printf("Estado: %s\n", estado2);
  printf("Cidade: %s\n", cidade2);
  printf("populacao: %d\n", populacao2);
  printf("Area: %f\n", area_km2);
  printf("Pib: %u\n", pib2);
  printf("Pontos Turisticos: %d\n", pontos_turisticos2);
  printf("Densidade populaconal: %.2f\n", (populacao2 / area_km2));
  printf("Pib per cápita: %u\n", (pib2 / populacao2) );


  if(populacao1 > populacao2){
    printf("A carta 1 venceu no item populaçaõ! \n");
  }else{
    printf("A carta 2 venceu no item população! \n");
  }

  if(area_km1 > area_km2){
    printf("A carta 1 venceu no item area km2! \n");
  } else {
    printf("A carta 2 venceu no item area km2! \n");
  }

  if(densidadePopulaciona1 > densidadePopulacional2){
    printf("A carta 1 venceu quanto à densidade populacional! \n");
  } else {
    ("A carta 2 venceu quanto à densidade populacinal! \n");
  }

  if(pibPercapita1 > pibPercapita2){
    printf("A carta 1 venceu quanto ao Pib percapta! \n");
  } else {
    printf("A carta 2 venceu quanto ao Pib percapta! \n");
    
  }

  return 0;
 
} 
