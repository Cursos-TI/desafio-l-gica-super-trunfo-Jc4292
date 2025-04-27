#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    //---variáveis---
	char c1_estado = 'A';
	char c1_codigo[5] = "03";
	char c1_nome[50] = "brasil";
	unsigned int c1_populacao = 500000000;
	float c1_area = 500;
	float c1_pib = 150;
	unsigned int c1_pontos_turisticos = 240;
	float c1_densidade;
	float c1_pibpc;

	float c1_soma;

	char c2_estado = 'C';
	char c2_codigo[5] = "02";
	char c2_nome[50] = "unitedstates";
	unsigned int c2_populacao = 800000000;
	float c2_area = 800;
	float c2_pib = 500;
	unsigned int c2_pontos_turisticos = 520;
	float c2_densidade;
	float c2_pibpc;

	float c2_soma;

	int escolha, escolha2;
    
    //---Criação de cartas---

	//---Carta 1---
	// printf("carta 1:\n");

	// printf("digite um estado (primeira letra):\n");
	// scanf(" %c", &c1_estado);

	// printf("digite o código: (de 01 a 04)\n");
	// scanf( " %s", &c1_codigo);

	// printf("digite o nome do país:\n");
	// scanf(" %s", &c1_nome);

	// printf("digite o tamanho da população\n");
	// scanf(" %d", &c1_populacao);

	// printf("digite o tamanho do pib (em bilhões)\n");
	// scanf(" %f", &c1_pib);

	// printf("digite a área (kilometros quadrados)\n");
	// scanf(" %f", &c1_area);

	// printf("digite a quantidade de pontos turisticos\n\n");
	// scanf(" %d", &c1_pontos_turisticos);

	// //---Carta 2---
	// printf("carta 2:\n\n");

	// printf("digite um estado (primeira letra):\n");
	// scanf(" %c", &c2_estado);

	// printf("digite o código: (de 01 a 04)\n");
	// scanf( " %s", &c2_codigo);

	// printf("digite o nome do país:\n");
	// scanf(" %s", &c2_nome);

	// printf("digite o tamanho da população\n");
	// scanf(" %d", &c2_populacao);

	// printf("digite o tamanho do pib (em bilhões)\n");
	// scanf(" %f", &c2_pib);

	// printf("digite a área (kilometros quadrados)\n");
	// scanf(" %f", &c2_area);

	// printf("digite a quantidade de pontos turisticos\n\n");
	// scanf(" %d", &c2_pontos_turisticos);

    //--------Calculo---------

	c1_densidade = (float) c1_populacao / c1_area;
	c1_pibpc = c1_pib / (float) c1_populacao;

	c2_densidade = (float) c2_populacao / c2_area;
	c2_pibpc = c2_pib / (float) c2_populacao;

	//--------comparação---------

    printf("escolha que atributo que deseja comparar:\n 1 - população\n 2 - área\n 3 - PIB\n 4 - dens. demográfica\n 5 - pontos turisticos\n");
	scanf(" %d", &escolha);	

	switch(escolha){
		case 1:
			printf("comparação: \n\npopulação carta 1 - %s: %u\npopulação carta 2 - %s: %u\n\n", c1_nome, c1_populacao, c2_nome, c2_populacao);
			c1_soma = c1_populacao;
			c2_soma = c2_populacao;
			if (c1_populacao>c2_populacao) {
				printf("Cidade 1 tem maior população.\n\n");
				
			}
			else if (c1_populacao<c2_populacao) {
				printf("Cidade 2 tem maior população.\n\n");
				
			}
			else{
				printf("Cidade 2 tem a mesma quant. de população.\n");
				
			}
			break;
		case 2:
			printf("comparação: \n\nárea carta 1 - %s: %f\nárea carta 2 - %s: %f\n\n", c1_nome, c1_area, c2_nome, c2_area);
			c1_soma = c1_area;
			c2_soma = c2_area;
			if (c1_area>c2_area) {
				printf("Cidade 1 tem maior área.\n\n");
				
			}
			else if (c1_area<c2_area) {
				printf("Cidade 2 tem maior área.\n\n");
				
			}
			else{
				printf("Ambos tem a mesma quant. de área.\n");
				
			}
			break;
		case 3:
			printf("comparação: \n\nPIB carta 1 - %s: %f\nPIB carta 2 - %s: %f\n\n", c1_nome, c1_pib, c2_nome, c2_pib);
			c1_soma = c1_pib;
			c2_soma = c2_pib;
			if (c1_pib>c2_pib) {
				printf("Cidade 1 tem maior PIB.\n\n");
				
			}
			else if (c1_pib<c2_pib) {
				printf("Cidade 2 tem maior PIB.\n\n");
				
			}
			else{
				printf("Ambos tem a mesma quant. de PIB.\n");
				
			}
			break;
		case 4:
			printf("comparação: \n\nDens. Demográfica carta 1 - %s: %f\nDens. Demográfica carta 2 - %s: %f\n\n", c1_nome, c1_densidade, c2_nome, c2_densidade);
			c1_soma = c1_densidade;
			c2_soma = c2_densidade;
			if (c1_densidade<c2_densidade) {
				printf("Cidade 1 tem menor Dens. Demográfica.\n\n");
				
			}
			else if (c1_densidade>c2_densidade) {
				printf("Cidade 2 tem menor Dens. Demográfica.\n\n");
				
			}
			else{
				printf("Ambos tem a mesma quant. de Dens. Demográfica.\n");
				
			}
			break;
		case 5:
			printf("comparação: \n\nPontos Turisticos carta 1 - %s: %u\nPontos Turisticos carta 2 - %s: %u\n\n", c1_nome, c1_pontos_turisticos, c2_nome, c2_pontos_turisticos);
			c1_soma = c1_pontos_turisticos;
			c2_soma = c2_pontos_turisticos;
			if (c1_pontos_turisticos>c2_pontos_turisticos) {
				printf("Cidade 1 tem maior Pontos Turisticos.\n\n");
				
			}
			else if (c1_pontos_turisticos<c2_pontos_turisticos) {
				printf("Cidade 2 tem maior Pontos Turisticos.\n\n");
				
			}
			else{
				printf("Ambos tem a mesma quant. de Pontos Turisticos.\n");
				
			}
			break;
		default:
			printf("invalido!");
}

	printf("escolha mais um atributo que deseja comparar (não pode ser a mesma da anterior):\n 1 - população\n 2 - área\n 3 - PIB\n 4 - dens. demográfica\n 5 - pontos turisticos\n");
	scanf(" %d", &escolha2);
	if(escolha2!=escolha){
		switch(escolha2){
			case 1:
				printf("comparação: \n\npopulação carta 1 - %s: %u\npopulação carta 2 - %s: %u\n\n", c1_nome, c1_populacao, c2_nome, c2_populacao);
				c1_soma += c1_populacao;
				c2_soma += c2_populacao;
				if (c1_populacao>c2_populacao) {
					printf("Cidade 1 tem maior população.\n\n");
					
				}
				else if (c1_populacao<c2_populacao) {
					printf("Cidade 2 tem maior população.\n\n");
					
				}
				else{
					printf("Cidade 2 tem a mesma quant. de população.\n");
					
				}
				break;
			case 2:
				printf("comparação: \n\nárea carta 1 - %s: %f\nárea carta 2 - %s: %f\n\n", c1_nome, c1_area, c2_nome, c2_area);
				c1_soma += c1_area;
				c2_soma += c2_area;
				if (c1_area>c2_area) {
					printf("Cidade 1 tem maior área.\n\n");
					
				}
				else if (c1_area<c2_area) {
					printf("Cidade 2 tem maior área.\n\n");
				}
				else{
					printf("Ambos tem a mesma quant. de área.\n");
				}
				break;
			case 3:
				printf("comparação: \n\nPIB carta 1 - %s: %f\nPIB carta 2 - %s: %f\n\n", c1_nome, c1_pib, c2_nome, c2_pib);
				c1_soma += c1_pib;
				c2_soma += c2_pib;
				if (c1_pib>c2_pib) {
					printf("Cidade 1 tem maior PIB.\n\n");
				}
				else if (c1_pib<c2_pib) {
					printf("Cidade 2 tem maior PIB.\n\n");
				}
				else{
					printf("Ambos tem a mesma quant. de PIB.\n");
				}
				break;
			case 4:
				printf("comparação: \n\nDens. Demográfica carta 1 - %s: %f\nDens. Demográfica carta 2 - %s: %f\n\n", c1_nome, c1_densidade, c2_nome, c2_densidade);
				c1_soma += c1_densidade;
				c2_soma += c2_densidade;
				if (c1_densidade<c2_densidade) {
					printf("Cidade 1 tem menor Dens. Demográfica.\n\n");
				}
				else if (c1_densidade>c2_densidade) {
					printf("Cidade 2 tem menor Dens. Demográfica.\n\n");
				}
				else{
					printf("Ambos tem a mesma quant. de Dens. Demográfica.\n");
				}
				break;
			case 5:
				printf("comparação: \n\nPontos Turisticos carta 1 - %s: %u\nPontos Turisticos carta 2 - %s: %u\n\n", c1_nome, c1_pontos_turisticos, c2_nome, c2_pontos_turisticos);
				c1_soma += c1_pontos_turisticos;
				c2_soma += c2_pontos_turisticos;
				if (c1_pontos_turisticos>c2_pontos_turisticos) {
					printf("Cidade 1 tem maior Pontos Turisticos.\n\n");
				}
				else if (c1_pontos_turisticos<c2_pontos_turisticos) {
					printf("Cidade 2 tem maior Pontos Turisticos.\n\n");
				}
				else{
					printf("Ambos tem a mesma quant. de Pontos Turisticos.\n");
				}
				break;
			default:
				printf("invalido!");
		}
	}

	printf("soma carta 1: %f\n soma carta 2: %f\n", c1_soma, c2_soma);

	if(c1_soma>c2_soma)
		printf("carta 1 ganhou!");
	else if (c1_soma<c2_soma)
		printf("carta 2 ganhou");
	else
		printf("empate!");

    return 0;
}
