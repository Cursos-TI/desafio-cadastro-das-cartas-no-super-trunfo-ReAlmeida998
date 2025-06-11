#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
     char estado;
     char codigo[3];
     char cidade[20];
     int populacao;
     float area;
     float pib;
     int pontos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

     printf("Estado: \n");
     scanf("%c", &estado);
     
     printf("Código da carta: \n");
     scanf("%s", &codigo);
     
     printf("Nome da cidade: \n");
     scanf("%s", &cidade);
     
     printf("População: \n");
     scanf("%d", &populacao);
     
     printf("Área: \n");
     scanf("%f", &area);
     
     printf("PIB: \n");
     scanf("%f", &pib);
     
     printf("N° de pontos turísticos: \n");
     scanf("%d", &pontos);
     
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

     printf("Estado: %c \n", estado);
     printf("Código da carta: %s\n", codigo);
     printf("Nome da cidade: %s\n", cidade);
     printf("População: %d\n", populacao);
     printf("Área: %f\n", area);
     printf("PIB: %f\n", pib);
     printf("Pontos turísticos: %d\n", pontos);

    return 0;
}
