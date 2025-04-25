#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    //---variáveis---
	char c1_estado;
	char c1_codigo[5];
	char c1_nome[50];
	int c1_populacao;
	float c1_area;
	float c1_pib;
	int c1_pontos_turisticos;
	float c1_densidade;
	float c1_pibpc;

	float c1_super_poder;

	char c2_estado;
	char c2_codigo[5];
	char c2_nome[50];
	int c2_populacao;
	float c2_area;
	float c2_pib;
	int c2_pontos_turisticos;
	float c2_densidade;
	float c2_pibpc;

	float c2_super_poder;
    
    //---Criação de cartas---

	//---Carta 1---
	printf("carta 1:\n");

	printf("digite um estado (primeira letra):\n");
	scanf(" %c", &c1_estado);

	printf("digite o código: (de 01 a 04)\n");
	scanf( " %s", &c1_codigo);

	printf("digite o nome da cidade:\n");
	scanf(" %s", &c1_nome);

	printf("digite o tamanho da população\n");
	scanf(" %d", &c1_populacao);

	printf("digite o tamanho do pib (em bilhões)\n");
	scanf(" %f", &c1_pib);

	printf("digite a área (kilometros quadrados)\n");
	scanf(" %f", &c1_area);

	printf("digite a quantidade de pontos turisticos\n\n");
	scanf(" %d", &c1_pontos_turisticos);

	//---Carta 2---
	printf("carta 2:\n\n");

	printf("digite um estado (primeira letra):\n");
	scanf(" %c", &c2_estado);

	printf("digite o código: (de 01 a 04)\n");
	scanf( " %s", &c2_codigo);

	printf("digite o nome da cidade:\n");
	scanf(" %s", &c2_nome);

	printf("digite o tamanho da população\n");
	scanf(" %d", &c2_populacao);

	printf("digite o tamanho do pib (em bilhões)\n");
	scanf(" %f", &c2_pib);

	printf("digite a área (kilometros quadrados)\n");
	scanf(" %f", &c2_area);

	printf("digite a quantidade de pontos turisticos\n\n");
	scanf(" %d", &c2_pontos_turisticos);

    //--------Calculo---------

	c1_densidade = (float) c1_populacao / c1_area;
	c1_pibpc = c1_pib / (float) c1_populacao;

	c2_densidade = (float) c2_populacao / c2_area;
	c2_pibpc = c2_pib / (float) c2_populacao;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    printf("comparação: \n\npopulação carta 1 - %s: %d\npopulação carta 2 - %s: %d\n\n", c1_nome, c1_populacao, c2_nome, c2_populacao);

    if (c1_populacao>c2_populacao) {
        printf("Cidade 1 tem maior população.\n\n");
        printf("---Carta 1 Ganhou!---\n");
    }
    else if (c1_populacao<c2_populacao) {
        printf("Cidade 2 tem maior população.\n\n");
        printf("---Carta 2 Ganhou!---\n");
    }
    else{
        printf("Cidade 2 tem a mesma quant. de população.\n");
        printf("---Empate!---\n");
    }
    
    // if (c1_area>c2_area)
    //     printf("Cidade 1 tem maior area.\n");
    // else if (c1_area<c2_area)
    //     printf("Cidade 2 tem maior area.\n");
    // else
    //     printf("Cidade 2 tem a mesma quant. de area que a Cidade 1.\n");

    //     if (c1_area>c2_area)
    //     printf("Cidade 1 tem maior area.\n");
    // else if (c1_area<c2_area)
    //     printf("Cidade 2 tem maior area.\n");
    // else
    //     printf("Cidade 2 tem a mesma quant. de area que a Cidade 1.\n");
    
    // if (c1_pib>c2_pib)
    //     printf("Cidade 1 tem maior PIB.\n");
    // else if (c1_pib<c2_pib)
    //     printf("Cidade 2 tem maior PIB.\n");
    // else
    //     printf("Cidade 2 tem a mesma quant. de PIB que a Cidade 1.\n");
    

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
