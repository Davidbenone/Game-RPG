#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include "structsFuncoes2.h"

void main()
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
	
	int di;
	int m;
	
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
	system("cls");
	ArmasComp(&j, &a);
	Inimigo1(&i1);
	CombateUm(&j, &i1);
}