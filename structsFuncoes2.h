#ifndef ARMAS_H
#define ARMAS_H


//STRUCTS#############################################
typedef struct PERSONAGEM{
	char nome[100];
	char classe[100];
	int pv;
	int forca;
	int constituicao;
	int agilidade;
	int destreza;
	int defesa;
	int arma;
	int dano;
	int vf;
	char armadura[100];
}jogador;

typedef struct ARMAS{
	//Armas brancas
	int espadaLeve;
	int espadaPesada;
	//Magia
	int fogo;
	int agua;
	int gelo;
	int electro;
	//Arco
	int arcoLeve;
	int arcoPesado;
	//Facas
	int facaBolso;
	int facaCombate;
	//Selecao
	char selecao[100];
}arma;

typedef struct INIMIGO1{
	char nome[100];
	int pv;
	int dano;
	int agilidade;
	int defesa;
	int vf;
}inimigo1;

typedef struct INIMIGO2{
	char nome[100];
	int pv;
	int dano;
	int agilidade;
	int defesa;
	int vf;
}inimigo2;

typedef struct INIMIGO3{
	char nome[100];
	int pv;
	int dano;
	int agilidade;
	int defesa;
	int vf;
}inimigo3;

typedef struct INIMIGO4{
	char nome[100];
	int pv;
	int dano;
	int agilidade;
	int defesa;
	int vf;
}inimigo4;

typedef struct CHEFE1{
	char nome[100];
	int pv;
	int dano;
	int agilidade;
	int defesa;
	int vf;
}chefe1;

typedef struct CHEFE2{
	char nome[100];
	int pv;
	int dano;
	int agilidade;
	int defesa;
	int vf;
}chefe2;

typedef struct CHEFE3{
	char nome[100];
	int pv;
	int dano;
	int agilidade;
	int defesa;
	int vf;
}chefe3;
//###################################################




























//FUNCOES JOGADOR####################################
//NOME
void Nome(jogador *um)
{	
	system("cls");
	fflush(stdin);
	printf("Seu nome: ");
	gets(um->nome);
	system("cls");
}










//CLASSES
void Classes(jogador *um)
{
	int escolha;
	char opi;
	
	um->agilidade = 0;
	um->constituicao = 0;
	um->destreza = 0;
	um->forca = 0;
	um->defesa = 0;
	um->pv = 0;
	um->vf = 0;
	
	do
	{
		system ("cls");
		printf("Escolha uma classe\n\n1- Guerreiro\n2- Mago\n3- Arqueiro\n4- Ladrao");
		printf("\n\nEscolha: ");
		scanf("%d", &escolha);
		
		if(escolha == 1)
		{
			system("cls");
			strcpy(um->classe, "Guerreiro");
			printf("Voce escolheu Guerreiro");
			um->forca = 5;
			break;
		}
		else if(escolha == 2)
		{
			system("cls");
			strcpy(um->classe, "Mago");
			printf("Voce escolheu Mago");
			um->constituicao = 5;
			break;
		}
		else if(escolha == 3)
		{
			system("cls");
			strcpy(um->classe, "Arqueiro");
			printf("Voce escolheu Arqueiro");
			um->destreza = 5;
			break;
		}
		else if(escolha == 4)
		{
			system("cls");
			strcpy(um->classe, "Ladrao");
			printf("Voce escolheu Ladrao");
			um->agilidade = 5;
			break;
		}
		else
		{
			system("cls");
			printf("Opcao invalida\n");
			printf("Digite qualquer tecla para continuar ");
			scanf(" %c", &opi);
			escolha = 5;
		}
	}while(escolha > 4);
	
	printf("\n\nDigite qualquer tecla para continuar ");
	scanf(" %c", &opi);
	system("cls");
}










//ATRIBUTOS
void Atributos(jogador *um)
{
	int pontos = 15;
	int pontosGastos[4];
	int escolhaA;
	int escolhaA1;
	char opi;

	do
	{	
		do
		{
			system("cls");
			printf("Escolha o atributo que voce deseja atribuir pontos\n\n1- Forca\n2- Constituicao\n3- Agilidade\n4- Destreza\n\n");
			printf("Pontos restantes: %d", pontos);
			printf("\n\nEscolha: ");
			scanf("%d", &escolhaA);
			
			if(escolhaA == 1)
			{
				do
				{
					system("cls");
					printf("Forca\nVoce possui %d pontos", pontos);
					printf("\n\nPontos atribuidos: ");
					scanf("%d", &pontosGastos[0]);
					if(pontosGastos[0] < 0 || pontosGastos[0] > pontos)
					{
						system("cls");
						printf("Valor invalido");
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &opi);
						escolhaA = 1;
					}
					else
					{
						system("cls");
						pontos = pontos - pontosGastos[0];
						um->forca = um->forca + pontosGastos[0];
						if(pontos == 0)
						{
							break;
						}
						printf("teste: %d", um->forca);
						printf("\nPontos restantes: %d", pontos);
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &opi);
						escolhaA = 0;
					}
				}while(escolhaA == 1);
			}

			else if(escolhaA == 2)
			{
		   		do
				{
					system("cls");
					printf("Constituicao\nVoce possui %d pontos", pontos);
					printf("\n\nPontos atribuidos: ");
					scanf("%d", &pontosGastos[1]);
					if(pontosGastos[1] < 0 || pontosGastos[1] > pontos)
					{
						system("cls");
						printf("Valor invalido");
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &opi);
						escolhaA = 2;
					}
					else
					{
						system("cls");
						pontos = pontos - pontosGastos[1];
						um->constituicao = um->constituicao + pontosGastos[1];
						if(pontos == 0)
						{
							break;
						}
						printf("\nPontos restantes: %d", pontos);
						printf("\nteste: %d", um->constituicao);
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &opi);
						escolhaA = 0;
					}
   	  	   		}while(escolhaA == 2);
	   		}

			else if(escolhaA == 3)
			{
				do
				{
					system("cls");
					printf("Agilidade\nVoce possui %d pontos", pontos);
					printf("\n\nPontos atribuidos: ");
					scanf("%d", &pontosGastos[2]);
					if(pontosGastos[2] < 0 || pontosGastos[2] > pontos)
					{
						system("cls");
						printf("Valor invalido");
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &opi);
						escolhaA = 3;
					}
					else
					{
						system("cls");
						pontos = pontos - pontosGastos[2];
						um->agilidade = um->agilidade + pontosGastos[2];
						if(pontos == 0)
						{
							break;
						}
						printf("teste: %d", um->agilidade);
						printf("\nPontos restantes: %d", pontos);
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &opi);
						escolhaA = 0;
					}
		   		}while(escolhaA == 3);
	   	 	}

			else if(escolhaA == 4)
			{
		   		do
				{
					system("cls");
					printf("Destreza\nVoce possui %d pontos", pontos);
					printf("\n\nPontos atribuidos: ");
					scanf("%d", &pontosGastos[3]);
					if(pontosGastos[3] < 0 || pontosGastos[3] > pontos)
					{
						system("cls");
						printf("Valor invalido");
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &opi);
						escolhaA = 4;
					}
					else
					{
						system("cls");
						pontos = pontos - pontosGastos[3];
						um->destreza = um->destreza + pontosGastos[3];
						if(pontos == 0)
						{
							break;
						}
						printf("\nPontos restantes: %d", pontos);
						printf("\nteste: %d", um->destreza);
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &opi);
						escolhaA = 0;
					}
				}while(escolhaA == 4);
	   		}

			else
			{
				system("cls");
		   		printf("Opcao invalida\n");
				printf("Pressione qualquer tecla para continuar: ");
				scanf(" %c", &opi);
				escolhaA = 0;
			}
		}while(escolhaA == 0);
	}while(escolhaA > 4);
	
	system("cls");
	printf("Seu Nome: %s\n\nSua Classe: %s\n\nSeus atributos:\nForca: %d\nConstituicao: %d\nAgilidade: %d\nDestreza: %d",um->nome, um->classe, um->forca, um->constituicao, um->agilidade, um->destreza);
}

void Jogo()
{
	printf("Continuou");
}










//VIDA
void Vida(jogador *um)
{
	int dv[3];
	int i;	

	srand(time(NULL));

	for(i = 0; i < 3; i++)
	{
		
		dv[i] = rand() % 6;
   	    dv[i]++;
	}

	um->pv = dv[0] + dv[1] + dv[2] + um->constituicao;

	printf("\n\nVida: %d", um->pv);
}










//ESPADAS
void EspadaLeve(jogador *um, arma *h)
{
	int ddanoel[3];
	int i;
	
	srand(time(NULL));

	for(i = 0; i < 2; i++)
	{
		
		ddanoel[i] = rand() % 6;
   	    ddanoel[i]++;
   	}
   	
   	ddanoel[2] = rand() % 4;
   	ddanoel[2]++;
   	
   	h->espadaLeve = ddanoel[0] + ddanoel[1] + ddanoel[2] + 5;
   	um->dano = h->espadaLeve;
   	
   	printf("Dano espada leve:\n%d", h->espadaLeve);
}

void EspadaPesada(jogador *um, arma *h)
{
	int ddanoep;
	
	srand(time(NULL));
	
	ddanoep = rand() % 12;
	ddanoep++;
	
	h->espadaPesada = ddanoep + 10;
	um->dano = h->espadaPesada;
	
	printf("\n\nDano espada pesada:\n%d", h->espadaPesada);
}










//MAGIA
void MagiaAgua(jogador *um, arma *h)
{
	int ddanoagua;
	int multi;
	
	srand(time(NULL));
	
	ddanoagua = rand() % 12;
	ddanoagua++;
	
	printf("\n\nDado magia: %d", ddanoagua);
	
	multi = rand() % 5;
	printf("\n\nMultiplicador: %d", multi);
	if(multi == 0)
	{
		if(um->constituicao % 2 == 0)
		{
			h->agua = ddanoagua + (um->constituicao*0.5);
		}
		else
		{
			h->agua = ddanoagua + (um->constituicao*0.5) - 0.5;
		}
	}
	else if(multi == 1 || multi == 2 || multi == 3)
	{
		h->agua = ddanoagua;
	}
	else
	{
		if(um->constituicao % 2 == 0)
		{
			h->agua = ddanoagua + (um->constituicao*1.5);
		}
		else
		{
			h->agua = ddanoagua + (um->constituicao*1.5) - 0.5;
		}
	}
	um->dano = h->agua;
	printf("\n\nDano final a: %d\nConstituicao: %d", h->agua, um->constituicao);
}

void MagiaFogo(jogador *um, arma *h)
{
	int ddanofogo;
	int multi;
	
	srand(time(NULL));
	
	ddanofogo = rand() % 12;
	ddanofogo++;
	
	printf("Dado magia: %d", ddanofogo);
	
	multi = rand() % 20;
	printf("\n\nMultiplicador: %d", multi);
	if(multi == 0 || multi == 1 || multi == 2)
	{
		h->fogo = ddanofogo + (um->constituicao*0.5) - (um->forca*0.5);
	}
	else if(multi == 19)
	{
		h->fogo = ddanofogo + (um->constituicao*1.5) + um->forca;
	}
	else
	{
		h->fogo = ddanofogo;
	}
	um->dano = h->fogo;
	printf("\n\nDano final f: %d\nConstituicao: %d", h->fogo, um->constituicao);
}

void MagiaGelo(jogador *um, arma *h)
{
	int ddanogelo;
	int multi;
	
	srand(time(NULL));
	
	ddanogelo = rand() % 12;
	ddanogelo++;
	
	printf("\n\nDado magia: %d", ddanogelo);
	
	multi = rand() % 10;
	printf("\n\nMultiplicador: %d", multi);
	if(multi == 0 || multi == 1)
	{
		h->gelo = ddanogelo + (um->constituicao*0.5) - (um->destreza*0.5);
	}
	else if(multi == 2 || multi == 3)
	{
		h->gelo = ddanogelo + (um->constituicao*1.5) + um->destreza;
	}
	else
	{
		h->gelo = ddanogelo;
	}
	um->dano = h->gelo;
	printf("\n\nDano final g: %d\nConstituicao: %d\nDestreza: %d", h->gelo, um->constituicao, um->destreza);
}

void MagiaElectro(jogador *um, arma *h)
{
	int ddanoelectro;
	int multi;
	
	srand(time(NULL));
	
	ddanoelectro = rand() % 12;
	ddanoelectro++;
	
	printf("\n\nDado magia: %d", ddanoelectro);
	
	multi = rand() % 10;
	printf("\n\nMultiplicador: %d", multi);
	if(multi == 0 || multi == 1)
	{
		h->electro = ddanoelectro + (um->constituicao*0.5) - (um->agilidade*0.5);
	}
	else if(multi == 2 || multi == 3)
	{
		h->electro = ddanoelectro + (um->constituicao*1.5) + um->agilidade;
	}
	else
	{
		h->electro = ddanoelectro;
	}
	um->dano = h->electro;
	printf("\n\nDano final e: %d\nConstituicao: %d\nAgilidade: %d", h->electro, um->constituicao, um->agilidade);
}










//ARCOS
void ArcoLeve(jogador *um, arma *h)
{
	int ddanoal[3];
	int i;
	
	srand(time(NULL));

	for(i = 0; i < 2; i++)
	{
		
		ddanoal[i] = rand() % 6;
   	    ddanoal[i]++;
   	}
   	
   	ddanoal[2] = rand() % 4;
   	ddanoal[2]++;
   	
   	h->arcoLeve = ddanoal[0] + ddanoal[1] + ddanoal[2] + (um->destreza*1.25);
   	um->dano = h->arcoLeve;
   	
   	printf("Dano arco leve:\n%d", h->arcoLeve);
}

void ArcoPesado(jogador *um, arma *h)
{
	int ddanoap;
	
	srand(time(NULL));
	
	ddanoap = rand() % 12;
	ddanoap++;
	
	h->arcoPesado = ddanoap + (um->destreza*0.5) + (um->forca*1.5);
	um->dano = h->arcoPesado;
	
	printf("\n\nDano arco pesada:\n%d", h->arcoPesado);
}










//FACAS
void FacaBolso(jogador *um, arma *h)
{
	int ddanofb[3];
	int i;
	
	srand(time(NULL));

	for(i = 0; i < 2; i++)
	{
		
		ddanofb[i] = rand() % 6;
   	    ddanofb[i]++;
   	}
   	
   	ddanofb[2] = rand() % 4;
   	ddanofb[2]++;
   	
   	h->facaBolso = ddanofb[0] + ddanofb[1] + ddanofb[2] + um->destreza + (um->agilidade*0.25);
   	um->dano = h->facaBolso;
   	
   	printf("\n\nDano faca de bolso: %d", h->facaBolso);
}

void FacaCombate(jogador *um, arma *h)
{
	int ddanofc;
	
	srand(time(NULL));
	
	ddanofc = rand() % 12;
	ddanofc++;
	
	h->facaCombate = ddanofc + (um->destreza*0.5) + (um->forca*1.5);
	um->dano = h->facaCombate;
	
	printf("\n\nDano faca de combate:\n%d", h->facaCombate);
}










//SELECAO DE ARMAS
void SelecaoArmas(jogador *um, arma *h)
{
	int e;
	char op;
	
	printf("%d\n\n\n", strlen(um->classe));
	
	if(strlen(um->classe) == 9)
	{
		do
		{
			system("cls");
			printf("Escolha uma arma:\n1- Espada leve\n2-Espada Pesada");
			printf("\n\nEscolha: ");
			scanf("%d", &e);
		
			if(e == 1)
			{
				system("cls");
				um->arma = 1;
				strcpy(h->selecao, "Espada Leve");
				printf("Voce escolheu: %s", h->selecao);
				printf("\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
				system("cls");
				break;
			}
			else if(e == 2)
			{
				system("cls");
				um->arma = 2;
				strcpy(h->selecao, "Espada Pesada");
				printf("Voce escolheu: %s", h->selecao);
				printf("\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
				system("cls");
				break;
			}
			else
			{
				system("cls");
		   		printf("Opcao invalida\n");
				printf("Pressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
				e = 3;
			}
		}while(e > 2);
	}
	if(strlen(um->classe) == 4)
	{
		do
		{
			system("cls");
			printf("Escolha um tipo de magia:\n1- Agua\n2- Fogo\n3- Gelo\n4- Eletricidade");
			printf("\n\nEscolha: ");
			scanf("%d", &e);
		
			if(e == 1)
			{
				system("cls");
				um->arma = 3;
				strcpy(h->selecao, "Agua");
				printf("Voce escolheu: %s", h->selecao);
				printf("\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
				system("cls");
				break;
			}
			else if(e == 2)
			{
				system("cls");
				um->arma = 4;
				strcpy(h->selecao, "Fogo");
				printf("Voce escolheu: %s", h->selecao);
				printf("\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
				system("cls");
				break;
			}
			else if(e == 3)
			{
				system("cls");
				um->arma = 5;
				strcpy(h->selecao, "Gelo");
				printf("Voce escolheu: %s", h->selecao);
				printf("\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
				system("cls");
				break;
			}
			else if(e == 4)
			{
				system("cls");
				um->arma = 6;
				strcpy(h->selecao, "Eletricidade");
				printf("Voce escolheu: %s", h->selecao);
				printf("\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
				system("cls");
				break;
			}
			else
			{
				system("cls");
		   		printf("Opcao invalida\n");
				printf("Pressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
				e = 5;
			}
		}while(e > 4);
	}
	if(strlen(um->classe) == 8)
	{
		do
		{
			system("cls");
			printf("Escolha uma arma:\n1- Arco leve\n2-Arco Pesado");
			printf("\n\nEscolha: ");
			scanf("%d", &e);
		
			if(e == 1)
			{
				system("cls");
				um->arma = 7;
				strcpy(h->selecao, "Arco Leve");
				printf("Voce escolheu: %s", h->selecao);
				printf("\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
				system("cls");
				break;
			}
			else if(e == 2)
			{
				system("cls");
				um->arma = 8;
				strcpy(h->selecao, "Arco Pesada");
				printf("Voce escolheu: %s", h->selecao);
				printf("\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
				system("cls");
				break;
			}
			else
			{
				system("cls");
		   		printf("Opcao invalida\n");
				printf("Pressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
				e = 3;
			}
		}while(e > 2);
	}
	
	if(strlen(um->classe) == 6)
	{
		do
		{
			system("cls");
			printf("Escolha uma arma:\n1- Faca de bolso\n2-Faca de combate");
			printf("\n\nEscolha: ");
			scanf("%d", &e);
		
			if(e == 1)
			{
				system("cls");
				um->arma = 9;
				strcpy(h->selecao, "Faca de bolso");
				printf("Voce escolheu: %s", h->selecao);
				printf("\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
				system("cls");
				break;
			}
			else if(e == 2)
			{
				system("cls");
				um->arma = 10;
				strcpy(h->selecao, "Faca de combate");
				printf("Voce escolheu: %s", h->selecao);
				printf("\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
				system("cls");
				break;
			}
			else
			{
				system("cls");
		   		printf("Opcao invalida\n");
				printf("Pressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
				e = 3;
			}
		}while(e > 2);
	}
}

void ArmasComp(jogador *um, arma *h)
{
	int op;
	
	system("cls");
	switch (um->arma)
	{
		case 1:
			EspadaLeve(um, h);
			break;
		case 2:
			EspadaPesada(um, h);
			break;
		case 3:
			MagiaAgua(um, h);
			break;
		case 4:
			MagiaFogo(um, h);
			break;
		case 5:
			MagiaGelo(um, h);
			break;
		case 6:
			MagiaElectro(um, h);
			break;
		case 7:
			ArcoLeve(um, h);
			break;
		case 8:
			ArcoPesado(um, h);
			break;
		case 9:
			FacaBolso(um, h);
			break;
		case 10:
			FacaCombate(um, h);
			break;
	}
}










//ARMADURA
void ArmaduraInicial(jogador *um)
{
	strcpy(um->armadura, "Armadura Enferrujada");
	um->defesa = 5 + (um->constituicao*1.5);
}

void ArmaduraMedia(jogador *um)
{
	strcpy(um->armadura, "Armadura Comum");
	um->defesa = 10 + (um->constituicao*1.5);
}

void ArmaduraFinal(jogador *um)
{
	strcpy(um->armadura, "Armadura Lendaria");
	um->defesa = 20 + (um->constituicao*1.5);
}










//POCAO
void Pocao(jogador *um)
{
	um->pv = um->pv + 10;
}

void PocaoInimigo1(inimigo1 *g)
{
	int aux;
	
	g->pv = g->pv + 10;
	aux++;
	
	if(aux > 3)
	{
		printf("Voce nao possui mais pocoes");
	}
}

void PocaoInimigo2(inimigo2 *t)
{
	int aux;
	
	while(aux < 3)
	{
		t->pv = t->pv + 12;
		aux++;
		break;
	}
}

void PocaoInimigo3(inimigo3 *p)
{
	int aux;
	
	while(aux < 3)
	{
		p->pv = p->pv + 15;
		aux++;
		break;
	}
}

void PocaoInimigo4(inimigo4 *w)
{
	int aux;
	
	w->pv = w->pv + 20;
	aux++;
	
	if(aux > 3)
	{
		printf("Voce nao possui mais pocoes");
	}
}

void Defesa(jogador *um)
{
	um->defesa = um->defesa*2;
}

void Atacar(jogador *um, inimigo1 *g)
{
	g->defesa = g->defesa - um->dano;
	if(g->defesa <= 0)
	{
		g->pv = g->pv - um->dano;
	}
}












void DefesaInimigo1(inimigo1 *g)
{
	g->defesa = g->defesa*2;
}

void AtacarInimigo1(jogador *um, inimigo1 *g)
{
	um->defesa = um->defesa - g->dano;
	if(um->defesa <= 0)
	{
		um->pv = um->pv - g->dano;
	}
}









//INIMIGOS########################################
//INIMIGOS COMUNS
void Inimigo1(inimigo1 *g)
{
	//strpcy(g->nome, "");
	g->pv = 50;
	g->defesa = 20;
	g->dano = 10;
	g->agilidade = 20;
}

void Inimigo2(inimigo2 *t)
{
	//strpcy(g->nome, "");
	t->pv = 80;
	t->defesa = 35;
	t->dano = 15;
	t->agilidade = 40;
	
	t->vf = t->pv + t->defesa;
}

void Inimigo3(inimigo3 *p)
{
	//strpcy(g->nome, "");
	p->pv = 130;
	p->defesa = 50;
	p->dano = 25;
	p->agilidade = 60;
	
	p->vf = p->pv + p->defesa;
}

void Inimigo4(inimigo4 *w)
{
	//strpcy(g->nome, "");
	w->pv = 150;
	w->defesa = 70;
	w->dano = 40;
	w->agilidade = 80;
	
	w->vf = w->pv + w->defesa;
}










//INIMIGOS CHEFES
void Chefe1(chefe1 *l)
{
	//strcpy(g->nome, "");
	l->pv = 80;
	l->defesa = 50;
	l->dano = 20;
	l->agilidade = 100;
	
	l->vf = l->pv + l->defesa;
}

void Chefe2(chefe2 *x)
{
	//strcpy(g->nome, "");
	x->pv = 120;
	x->defesa = 75;
	x->dano = 30;
	x->agilidade = 150;
	
	x->vf = x->pv + x->defesa;
}

void Chefe3(chefe3 *q)
{
	strcpy(q->nome, "Girotto, o menino Garotto");
	q->pv = 150;
	q->defesa = 100;
	q->dano = 30;
	q->agilidade = 200;
	
	q->vf = q->pv + q->defesa;
}
//#############################################################


















//SISTEMA DE COMBATE (NAO FINALIZADO)
void CombateUm(jogador *um, inimigo1 *g)
{
	int e = 4;
	int di;
	int m;
	char op;
	int def = 0;
	int defi = 0;
	int p = 0;
	int pi = 0;
	
	
	
	
	//INICIO
	if(um->agilidade < g->agilidade)
	{
		do
		{
			system("cls");
			printf("Turno do jogador");
			printf("\n\nVida: %d\nDefesa: %d", um->pv, um->defesa);
			printf("\n\n1- Atacar\n2- Defender\n3- Usar pocao");
			printf("\nEscolha: ");
			scanf("%d", &e);
				
			if(e == 1)
			{
				system("cls");
				printf("%s usou: Atacar", um->nome);
				Atacar(um, g);
				if(g->pv < 0)
				{
					g->pv = 0;
				}
				if(g->defesa < 0)
				{
					g->defesa = 0;
				}
				printf("\n\nDano causado: %d", um->dano);
				printf("\nVida do inimigo: %d\nDefesa do inimigo: %d", g->pv, g->defesa);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
			}
			else if(e == 2)
			{
				system("cls");
				if(um->defesa <= 0)
				{
					printf("Voce nao tem como usar essa habilidade");
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
					e = 4;
				}
				else
				{
					def++;
					printf("%s usou: Defender", um->nome);
					printf("\n\nDefesa antes: %d", um->defesa);
					Defesa(um);
					printf("\tDefesa depois: %d", um->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
			}
			else if(e == 3)
			{
				system("cls");
				if(p >= 3)
				{
					printf("Voce nao possui mais pocoes");
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
					e = 4;
				}
				else
				{
					printf("%s usou: Pocao", um->nome);
					printf("\n\nVida antes: %d", um->pv);
					Pocao(um);
					p++;
					printf("\tVida depois: %d", um->pv);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
			}
			else
			{
				system("cls");
				printf("Opcao invalida\n");
				printf("Pressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
				e = 4;
			}
			
			if(defi > 0)
			{
				g->defesa = g->defesa/2;
				defi = 0;
			}
			
			g->vf = g->pv + g->defesa;
			um->vf = um->pv + um->defesa;
			if(um->vf <= 0 || g->vf <= 0)
				{
				system("cls");
				break;
			}
			else
			{
				system("cls");
				printf("Turno do inimigo");
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
				system("cls");
				
				do
				{
					di = 0;
				srand(time(NULL));
		
				di = rand() % 3;
	
				if(di == 0)
				{
					system("cls");
					printf("Inimigo usou: Atacar");
					AtacarInimigo1(um, g);
					printf("\n\nDano causado: %d", g->dano);
					printf("\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
				else if(di == 1)
				{
					system("cls");
					printf("Inimigo usou: Defender");
					printf("\n\nDefesa do inimigo antes: %d", g->defesa);
					DefesaInimigo1(g);
					defi++;
					printf("\nDefesa do inimigo depois: %d", g->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
					e = 2;
				}
				else
				{
					system("cls");
					if(pi >= 3)
					{
						e = 90;
					}
					else
					{
						printf("Inimigo usou: Pocao");
					printf("\n\nVida do inimigo antes: %d", g->pv);
					PocaoInimigo1(g);
					pi++;
					printf("\nVida do inimigo depois: %d", g->pv);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
					}
				}
			}
				}while(e == 90);
				
				if(def > 0)
				{
					um->defesa = um->defesa/2;
					def = 0;
				}
				
				g->vf = g->pv + g->defesa;
				um->vf = um->pv + um->defesa;
				if(um->vf <= 0 || g->vf <= 0)
				{
					system("cls");
					break;
				}
				else
				{
					e = 4;
				}
		}while(e > 3);
	}

	/*else if(um->agilidade < g->agilidade)
	{
		printf("\n\nTurno do inimigo");
		printf("\n\nPressione qualquer tecla para continuar: ");
		scanf(" %c", &op);
		system("cls");
		
		srand(time(NULL));
		
		di = rand() % 3;
		
		if(di == 0)
		{
			printf("inimigo ataca");
			AtacarInimigo1(um, g);
			printf("\n\ndano inimigo: %d", g->dano);
			printf("\nvida jogador: %d", um->pv);
		}
		else if(di == 1)
		{
			printf("inimigo defende");
			printf("\n\ndefesa inimigo antes: %d", g->defesa);
			DefesaInimigo1(g);
			printf("\n\ndefesa inimigo depois: %d", g->defesa);
		}
		else
		{
			printf("inimigo pocao");
			printf("\n\ninimigo vida antes: %d", g->pv);
			PocaoInimigo1(g);
			printf("\n\ninimigo vida depois: %d", g->pv);
		}
	}
	else
	{
		srand(time(NULL));
		
		m = rand() % 2;
		
		if(m == 0)
		{
			do
			{
				printf("Turno do jogador");
				printf("\n\n1- Atacar\n2- Defender\n3- Usar pocao");
				printf("\nEscolha: ");
				scanf("%d", &e);
				system("cls");
				if(e == 1)
				{
					printf("Jogador ataca");
					Atacar(um, g);
					break;
				}
				else if(e == 2)
				{
					printf("jogador defende");
					Defesa(um);
					break;
				}
				else if(e == 3)
				{
					printf("jogador pocao");
					Pocao(um);
					break;
				}
				else
				{
					printf("Opcao invalida\n");
					printf("Pressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
					e = 4;
				}
			}while(e > 3);
		}
		else
		{
			printf("\n\nTurno do inimigo");
			printf("\n\nPressione qualquer tecla para continuar: ");
			scanf(" %c", &op);
			system("cls");
		
			srand(time(NULL));
		
			di = rand() % 3;
		
			if(di == 0)
			{
				printf("inimigo ataca");
				AtacarInimigo1(um, g);
				printf("\n\ndano inimigo: %d", g->dano);
				printf("\nvida jogador: %d", um->pv);
			}
			else if(di == 1)
			{
				printf("inimigo defende");
				printf("\n\ndefesa inimigo antes: %d", g->defesa);
				DefesaInimigo1(g);
				printf("\n\ndefesa inimigo depois: %d", g->defesa);
			}
			else
			{
				printf("inimigo pocao");
				printf("\n\ninimigo vida antes: %d", g->pv);
				PocaoInimigo1(g);
				printf("\n\ninimigo vida depois: %d", g->pv);
			}
		}
	}*/
}
#endif