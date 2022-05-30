#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include "structsFuncoes.h"

int main()
{
	jogador j;
	arma a;
	inimigo1 i1;
	inimigo2 i2;
	inimigo3 i3;
	inimigo4 i4;
	chefe1 c1;
	chefe2 c2;
	chefe3 c3;
	int e;
	char op;
	int def;
	int vida;
	
	Menu();
	Nome(&j);
	Classes(&j);
	Atributos(&j);
	Vida(&j);
	do
	{
		printf("\n\nPressione qualquer tecla para continuar: ");
		scanf(" %c", &op);
		system("cls");
		printf("1- Continuar\n2- Refazer personagem");
		printf("\n\nEscolha: ");
		scanf("%d", &e);
		if(e == 1)
		{
			break;
		}
		else if(e == 2)
		{
			Nome(&j);
			Classes(&j);
			Atributos(&j);
			Nome(&j);
			Vida(&j);
			e = 3;
		}
		else
		{
			printf("Opcao invalida\n");
			printf("Pressione qualquer tecla para continuar: ");
			scanf(" %c", &op);
			e = 3;
		}
	}while(e > 2);
	system("cls");
	SelecaoArmas(&j, &a);
	ArmaduraInicial(&j);
        printf("Voce ganhou: Armadura Enferrujada");
	def = j.defesa;
	vida = j.pv;
	printf("Um inimgo apareceu");
        printf("\n\nPressione qualquer tecla para continuar: ");
	scanf(" %c", &op);
	system("cls");
	printf("\nPressione qualquer tecla para continuar: ");
	scanf(" %c", &op);
	system("cls");
	CombateUm(&j, &i1, &a);
	if(j.vf <= 0)
	{
		system("cls");
		printf("Voce morreu");
		exit(0);
	}
	printf("Outro inimigo apareceu");
	printf("\nPressione qualquer tecla para continuar: ");
	scanf(" %c", &op);
	CombateDois(&j, &i2, &a);
	if(j.vf <= 0)
	{
		system("cls");
		printf("Voce morreu");
		exit(0);
	}
	printf("Outro inimigo apareceu");
	printf("\nPressione qualquer tecla para continuar: ");
	scanf(" %c", &op);
	CombateChefe1(&j, &c1, &a);
	if(j.vf <= 0)
	{
		system("cls");
		printf("Voce morreu");
		exit(0);
	}
	j.defesa = def;
	j.pv = vida;
	printf("Voce recuperou: Item 1");
        printf("\nVoce ganhou: Armadura Comum");
        ArmaduraMedia(&j);
	printf("\n\nVoce avancou para o Segundo andar");
	printf("\n\nPressione qualquer tecla para continuar: ");
	scanf(" %c", &op);
	Atributos2(&j);
	def = j.defesa;
	vida = j.pv;
	printf("\n\nPressione qualquer tecla para continuar: ");
	scanf(" %c", &op);
	CombateTres(&j, &i3, &a);
	if(j.vf <= 0)
	{
		system("cls");
		printf("Voce morreu");
		exit(0);
	}
	printf("Outro inimigo apareceu");
	printf("\nPressione qualquer tecla para continuar: ");
	scanf(" %c", &op);
	CombateQuatro(&j, &i4, &a);
	if(j.vf <= 0)
	{
		system("cls");
		printf("Voce morreu");
		exit(0);
	}
	printf("Outro inimigo apareceu");
	printf("\nPressione qualquer tecla para continuar: ");
	scanf(" %c", &op);
	CombateChefe2(&j, &c2, &a);
	if(j.vf <= 0)
	{
		system("cls");
		printf("Voce morreu");
		exit(0);
	}
	printf("Voce recuperou: Item 1");
        printf("Voce ganhou: Armadura Lendaria");
        ArmaduraFinal(&j);
	printf("\n\nVoce avancou para o Terceiro andar");
	printf("\n\nPressione qualquer tecla para continuar: ");
	scanf(" %c", &op);
	j.defesa = def;
	j.pv = vida;
	Atributos2(&j);
	j.pv + 5;
	def = j.defesa;
	vida = j.pv;
	printf("\nPressione qualquer tecla para continuar: ");
	scanf(" %c", &op);
	printf("Um inimigo apareceu");
	printf("\nPressione qualquer tecla para continuar: ");
	scanf(" %c", &op);
	CombateChefe3(&j, &c3, &a);
	if(j.vf <= 0)
	{
		system("cls");
		printf("Voce morreu");
		exit(0);
	}
	printf("Voce recuperou: Item 3");
	printf("\nPressione qualquer tecla para continuar: ");
	scanf(" %c", &op);
	system("cls");
	printf("Parabens! Voce recuperou todos os itens e ficara vivo");
	printf("\nPressione qualquer tecla para continuar: ");
	scanf(" %c", &op);
	system("cls");
	exit(0);
	
}




