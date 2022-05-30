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

void Menu()
{
	int e;
	char op;
	
	menu:
	system("cls");
	printf("MENU");
	printf("\n\n1- Jogar\n2- Historia\n3- Sair");
	printf("\n\nEscolha: ");
	scanf("%d", &e);
	
	if(e == 1)
	{
		system("cls");
	}
	else if (e == 2)
	{
		system("cls");
		printf("Voce eh um criminoso famoso e foi condenado a morte pelo reino. Porem, se voce conseguir recuperar certos itens especiais que foram deixados em uma torre, voce nao sera morto :)");
		printf("\n\nA torre possui 3 andares, cada um tem um item diferente");
		printf("\n\nPressione qualquer tecla para voltar ao menu: ");
		scanf(" %c", &op);
		goto menu;
	}
	else if(e == 3)
	{
		system("cls");
		exit(0);
	}
	else
	{
		system("cls");
		printf("Opcao invalida");
		printf("\nPressione qualquer tecla para voltar ao menu: ");
		scanf(" %c", &op);
		goto menu;
	}
}

























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















void Atributos2(jogador *um)
{
	int pontos = 5;
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
//	printf("\n\nDano final a: %d\nConstituicao: %d", h->agua, um->constituicao);
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
	g->pv = g->pv + 10;
}

void PocaoInimigo2(inimigo2 *t)
{
	t->pv = t->pv + 12;
}

void PocaoInimigo3(inimigo3 *p)
{
	p->pv = p->pv + 15;
}

void PocaoInimigo4(inimigo4 *w)
{
	w->pv = w->pv + 20;
}

void PocaoC1(chefe1 *w)
{
	w->pv = w->pv + 20;
}

void PocaoC2(chefe2 *w)
{
	w->pv = w->pv + 20;
}

void PocaoC3(chefe3 *w)
{
	w->pv = w->pv + 20;
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

void Atacar2(jogador *um, inimigo2 *t)
{
	t->defesa = t->defesa - um->dano;
	if(t->defesa <= 0)
	{
		t->pv = t->pv - um->dano;
	}
}

void Atacar3(jogador *um, inimigo3 *p)
{
	p->defesa = p->defesa - um->dano;
	if(p->defesa <= 0)
	{
		p->pv = p->pv - um->dano;
	}
}

void Atacar4(jogador *um, inimigo4 *w)
{
	w->defesa = w->defesa - um->dano;
	if(w->defesa <= 0)
	{
		w->pv = w->pv - um->dano;
	}
}

void AtacarCC1(jogador *um, chefe1 *w)
{
	w->defesa = w->defesa - um->dano;
	if(w->defesa <= 0)
	{
		w->pv = w->pv - um->dano;
	}
}


void AtacarCC2(jogador *um, chefe2 *w)
{
	w->defesa = w->defesa - um->dano;
	if(w->defesa <= 0)
	{
		w->pv = w->pv - um->dano;
	}
}

void AtacarCC3(jogador *um, chefe3 *w)
{
	w->defesa = w->defesa - um->dano;
	if(w->defesa <= 0)
	{
		w->pv = w->pv - um->dano;
	}
}











void DefesaInimigo1(inimigo1 *g)
{
	g->defesa = g->defesa*2;
}

void DefesaInimigo2(inimigo2 *t)
{
	t->defesa = t->defesa*2;
}

void DefesaInimigo3(inimigo3 *p)
{
	p->defesa = p->defesa*2;
}

void DefesaInimigo4(inimigo4 *w)
{
	w->defesa = w->defesa*2;
}

void DefesaC1(chefe1 *g)
{
	g->defesa = g->defesa*2;
}

void DefesaC2(chefe2 *g)
{
	g->defesa = g->defesa*2;
}

void DefesaC3(chefe3 *g)
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

void AtacarInimigo2(jogador *um, inimigo2 *t)
{
	um->defesa = um->defesa - t->dano;
	if(um->defesa <= 0)
	{
		um->pv = um->pv - t->dano;
	}
}

void AtacarInimigo3(jogador *um, inimigo3 *p)
{
	um->defesa = um->defesa - p->dano;
	if(um->defesa <= 0)
	{
		um->pv = um->pv - p->dano;
	}
}

void AtacarInimigo4(jogador *um, inimigo4 *w)
{
	um->defesa = um->defesa - w->dano;
	if(um->defesa <= 0)
	{
		um->pv = um->pv - w->dano;
	}
}

void AtacarC1(jogador *um, chefe1 *l)
{
	um->defesa = um->defesa - l->dano;
	if(um->defesa <= 0)
	{
		um->pv = um->pv - l->dano;
	}
}

void AtacarC2(jogador *um, chefe2 *x)
{
	um->defesa = um->defesa - x->dano;
	if(um->defesa <= 0)
	{
		um->pv = um->pv - x->dano;
	}
}

void AtacarC3(jogador *um, chefe3 *q)
{
	um->defesa = um->defesa - q->dano;
	if(um->defesa <= 0)
	{
		um->pv = um->pv - q->dano;
	}
}









//INIMIGOS########################################
//INIMIGOS COMUNS
void Inimigo1(inimigo1 *g)
{
	strcpy(g->nome, "Inimigo 1");
	g->pv = 20;
	g->defesa = 10;
	g->dano = 10;
	g->agilidade = 20;
}

void Inimigo2(inimigo2 *t)
{
	strcpy(t->nome, "Inimigo 2");
	t->pv = 30;
	t->defesa = 10;
	t->dano = 10;
	t->agilidade = 20;
}

void Inimigo3(inimigo3 *p)
{
	strcpy(p->nome, "Inimigo 3");
	p->pv = 40;
	p->defesa = 20;
	p->dano = 15;
	p->agilidade = 60;
}

void Inimigo4(inimigo4 *w)
{
	strcpy(w->nome, "Inimigo 4");
	w->pv = 50;
	w->defesa = 20;
	w->dano = 15;
	w->agilidade = 60;
}










//INIMIGOS CHEFES
void Chefe1(chefe1 *l)
{
	strcpy(l->nome, "Chefe 1");
	l->pv = 30;
	l->defesa = 20;
	l->dano = 15;
	l->agilidade = 100;
}

void Chefe2(chefe2 *x)
{
	strcpy(x->nome, "Chefe 2");
	x->pv = 50;
	x->defesa = 30;
	x->dano = 20;
	x->agilidade = 150;
}

void Chefe3(chefe3 *q)
{
	strcpy(q->nome, "Girotto, o menino Garotto");
	q->pv = 60;
	q->defesa = 30;
	q->dano = 25;
	q->agilidade = 200;
}
//#############################################################


















//SISTEMA DE COMBATE (NAO FINALIZADO)
void CombateUm(jogador *um, inimigo1 *g, arma *h)
{
	int e = 4;
	int di;
	int m;
	char op;
	int def = 0;
	int defi = 0;
	int p = 0;
	int pi = 0;
	
	Inimigo1(g);
	
	
	//INICIO
	//AGILIDADE JOGADOR >
	if(um->agilidade > g->agilidade)
	{
		do
		{
			do
			{
				ArmasComp(um, h);
				system("cls");
				printf("Turno do jogador");
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", g->nome, g->pv, g->nome, g->defesa);
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
						e = 50;
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
						e = 50;
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
					e = 50;
				}
			}while(e == 50);
			
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
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", g->nome, g->pv, g->nome, g->defesa);
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
				system("cls");
				
				di = 0;
				srand(time(NULL));
		
				di = rand() % 3;
				
				if(di == 0)
				{
					system("cls");
					printf("Inimigo usou: Atacar");
					AtacarInimigo1(um, g);
					if(um->pv < 0)
					{
						um->pv = 0;
					}
					if(um->defesa < 0)
					{
						um->defesa = 0;
					}
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
				}
				else
				{
					system("cls");
					printf("Inimigo usou: Pocao");
					printf("\n\nVida do inimigo antes: %d", g->pv);
					PocaoInimigo1(g);
					pi++;
					printf("\nVida do inimigo depois: %d", g->pv);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
			}
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

















	//AGILIDADE INIMIGO >
	else if(um->agilidade < g->agilidade)
	{
		do
		{	
			system("cls");
			printf("Turno do inimigo");
			printf("\n\nVida de %s: %d\nDefesa de %s: %d", g->nome, g->pv, g->nome, g->defesa);
			printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
			printf("\n\nPressione qualquer tecla para continuar: ");
			scanf(" %c", &op);
			system("cls");
		
			di = 0;
			srand(time(NULL));
		
			di = rand() % 3;
		
			srand(time(NULL));
		
			di = rand() % 3;
			
			if(di == 0)
			{
				system("cls");
				printf("Inimigo usou: Atacar");
				AtacarInimigo1(um, g);
				if(um->pv < 0)
				{
					um->pv = 0;
				}
				if(um->defesa < 0)
				{
					um->defesa = 0;
				}
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
			}
			else
			{
				system("cls");
				printf("Inimigo usou: Pocao");
				printf("\n\nVida do inimigo antes: %d", g->pv);
				PocaoInimigo1(g);
				pi++;
				printf("\nVida do inimigo depois: %d", g->pv);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
			}

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
			do
			{
				ArmasComp(um, h);
				system("cls");
				printf("Turno do jogador");
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", g->nome, g->pv, g->nome, g->defesa);
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
					break;
				}
				else if(e == 2)
				{
					system("cls");
					if(um->defesa <= 0)
					{
						printf("Voce nao tem como usar essa habilidade");
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &op);
						e = 1264;
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
						break;
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
						e = 1264;
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
						break;
					}
				}
				else
				{
					system("cls");
					printf("Opcao invalida\n");
					printf("Pressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
					e = 1264;
				}
			}while(e == 1264);
			
			
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
				e = 4;
			}
		}while(e > 3);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//AGILIDADE JOGADOR = INIMIGO
	else
	{
		srand(time(NULL));
		
		m = rand() % 2;
		
		if(m == 0)
		{
			do
			{
				do
				{
					ArmasComp(um, h);
					system("cls");
					printf("Turno do jogador");
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", g->nome, g->pv, g->nome, g->defesa);
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
							e = 74;
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
							e = 74;
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
						e = 74;
					}
				}while(e == 74);
			
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
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", g->nome, g->pv, g->nome, g->defesa);
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
					system("cls");
				
					di = 0;
					srand(time(NULL));
		
					di = rand() % 3;
	
					if(di == 0)
					{
						system("cls");
						printf("Inimigo usou: Atacar");
						AtacarInimigo1(um, g);
						if(um->pv < 0)
						{
							um->pv = 0;
						}
						if(um->defesa < 0)
						{
							um->defesa = 0;
						}
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
					}
					else
					{
						system("cls");
						printf("Inimigo usou: Pocao");
						printf("\n\nVida do inimigo antes: %d", g->pv);
						PocaoInimigo1(g);
						pi++;
						printf("\nVida do inimigo depois: %d", g->pv);
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &op);
					}
				}
					
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
		else
		{
			do
			{
				printf("\n\nTurno do inimigo");
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", g->nome, g->pv, g->nome, g->defesa);
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
				system("cls");
		
				srand(time(NULL));
			
				di = 0;
				di = rand() % 3;
			
				if(di == 0)
					{
					system("cls");
					printf("Inimigo usou: Atacar");
					AtacarInimigo1(um, g);
					if(um->pv < 0)
					{
						um->pv = 0;
					}
					if(um->defesa < 0)
					{
						um->defesa = 0;
					}
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
				}
				else
				{
					system("cls");
					printf("Inimigo usou: Pocao");
					printf("\n\nVida do inimigo antes: %d", g->pv);
					PocaoInimigo1(g);
					pi++;
					printf("\nVida do inimigo depois: %d", g->pv);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
				
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
			
				do
				{
					ArmasComp(um, h);
					system("cls");
					printf("Turno do jogador");
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", g->nome, g->pv, g->nome, g->defesa);
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
							e = 93;
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
							e = 93;
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
						e = 93;
					}
				}while(e == 93);
				
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
					e = 4;
				}
			}while(e > 3);
		}
	}
}

void CombateDois(jogador *um, inimigo2 *t, arma *h)
{
	int e = 4;
	int di;
	int m;
	char op;
	int def = 0;
	int defi = 0;
	int p = 0;
	int pi = 0;
	
	Inimigo2(t);
	
	
	//INICIO
	//AGILIDADE JOGADOR >
	if(um->agilidade > t->agilidade)
	{
		do
		{
			do
			{
				ArmasComp(um, h);
				system("cls");
				printf("Turno do jogador");
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", t->nome, t->pv, t->nome, t->defesa);
				printf("\n\n1- Atacar\n2- Defender\n3- Usar pocao");
				printf("\nEscolha: ");
				scanf("%d", &e);
					
				if(e == 1)
				{
					system("cls");
					printf("%s usou: Atacar", um->nome);
					Atacar2(um, t);
					if(t->pv < 0)
					{
						t->pv = 0;
					}
					if(t->defesa < 0)
					{
						t->defesa = 0;
					}
					printf("\n\nDano causado: %d", um->dano);
					printf("\nVida do inimigo: %d\nDefesa do inimigo: %d", t->pv, t->defesa);
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
						e = 50;
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
						e = 50;
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
					e = 50;
				}
			}while(e == 50);
			
			if(defi > 0)
			{
				t->defesa = t->defesa/2;
				defi = 0;
			}
			
			t->vf = t->pv + t->defesa;
			um->vf = um->pv + um->defesa;
			if(um->vf <= 0 || t->vf <= 0)
			{
				system("cls");
				break;
			}
			
			else
			{
				system("cls");
				printf("Turno do inimigo");
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", t->nome, t->pv, t->nome, t->defesa);
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
				system("cls");
				
				di = 0;
				srand(time(NULL));
		
				di = rand() % 3;
				
				if(di == 0)
				{
					system("cls");
					printf("Inimigo usou: Atacar");
					AtacarInimigo2(um, t);
					if(um->pv < 0)
					{
						um->pv = 0;
					}
					if(um->defesa < 0)
					{
						um->defesa = 0;
					}
					printf("\n\nDano causado: %d", t->dano);
					printf("\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
				else if(di == 1)
				{
					system("cls");
					printf("Inimigo usou: Defender");
					printf("\n\nDefesa do inimigo antes: %d", t->defesa);
					DefesaInimigo2(t);
					defi++;
					printf("\nDefesa do inimigo depois: %d", t->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
				else
				{
					system("cls");
					printf("Inimigo usou: Pocao");
					printf("\n\nVida do inimigo antes: %d", t->pv);
					PocaoInimigo2(t);
					pi++;
					printf("\nVida do inimigo depois: %d", t->pv);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
			}
			if(def > 0)
			{
				um->defesa = um->defesa/2;
				def = 0;
			}
			
			t->vf = t->pv + t->defesa;
			um->vf = um->pv + um->defesa;
			if(um->vf <= 0 || t->vf <= 0)
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

















	//AGILIDADE INIMIGO >
	else if(um->agilidade < t->agilidade)
	{
		do
		{	
			system("cls");
			printf("Turno do inimigo");
			printf("\n\nVida de %s: %d\nDefesa de %s: %d", t->nome, t->pv, t->nome, t->defesa);
			printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
			printf("\n\nPressione qualquer tecla para continuar: ");
			scanf(" %c", &op);
			system("cls");
		
			di = 0;
			srand(time(NULL));
		
			di = rand() % 3;
		
			srand(time(NULL));
		
			di = rand() % 3;
			
			if(di == 0)
			{
				system("cls");
				printf("Inimigo usou: Atacar");
				AtacarInimigo2(um, t);
				if(um->pv < 0)
				{
					um->pv = 0;
				}
				if(um->defesa < 0)
				{
					um->defesa = 0;
				}
				printf("\n\nDano causado: %d", t->dano);
				printf("\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
			}
			else if(di == 1)
			{
				system("cls");
				printf("Inimigo usou: Defender");
				printf("\n\nDefesa do inimigo antes: %d", t->defesa);
				DefesaInimigo2(t);
				defi++;
				printf("\nDefesa do inimigo depois: %d", t->defesa);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
			}
			else
			{
				system("cls");
				printf("Inimigo usou: Pocao");
				printf("\n\nVida do inimigo antes: %d", t->pv);
				PocaoInimigo2(t);
				pi++;
				printf("\nVida do inimigo depois: %d", t->pv);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
			}

			if(def > 0)
			{
				um->defesa = um->defesa/2;
				def = 0;
			}
					
			t->vf = t->pv + t->defesa;
			um->vf = um->pv + um->defesa;
			if(um->vf <= 0 || t->vf <= 0)
			{
				system("cls");
				break;
			}
			else
			{
				e = 4;
			}
			do
			{
				ArmasComp(um, h);
				system("cls");
				printf("Turno do jogador");
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", t->nome, t->pv, t->nome, t->defesa);
				printf("\n\n1- Atacar\n2- Defender\n3- Usar pocao");
				printf("\nEscolha: ");
				scanf("%d", &e);
					
				if(e == 1)
				{
					system("cls");
					printf("%s usou: Atacar", um->nome);
					Atacar2(um, t);
					if(t->pv < 0)
					{
						t->pv = 0;
					}
					if(t->defesa < 0)
					{
						t->defesa = 0;
					}
					printf("\n\nDano causado: %d", um->dano);
					printf("\nVida do inimigo: %d\nDefesa do inimigo: %d", t->pv, t->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
					break;
				}
				else if(e == 2)
				{
					system("cls");
					if(um->defesa <= 0)
					{
						printf("Voce nao tem como usar essa habilidade");
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &op);
						e = 1264;
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
						break;
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
						e = 1264;
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
						break;
					}
				}
				else
				{
					system("cls");
					printf("Opcao invalida\n");
					printf("Pressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
					e = 1264;
				}
			}while(e == 1264);
			
			
			if(defi > 0)
			{
				t->defesa = t->defesa/2;
				defi = 0;
			}
			t->vf = t->pv + t->defesa;
			um->vf = um->pv + um->defesa;
			if(um->vf <= 0 || t->vf <= 0)
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
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//AGILIDADE JOGADOR = INIMIGO
	else
	{
		srand(time(NULL));
		
		m = rand() % 2;
		
		if(m == 0)
		{
			do
			{
				do
				{
					ArmasComp(um, h);
					system("cls");
					printf("Turno do jogador");
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", t->nome, t->pv, t->nome, t->defesa);
					printf("\n\n1- Atacar\n2- Defender\n3- Usar pocao");
					printf("\nEscolha: ");
					scanf("%d", &e);
					
					if(e == 1)
					{
						system("cls");
						printf("%s usou: Atacar", um->nome);
						Atacar2(um, t);
						if(t->pv < 0)
						{
							t->pv = 0;
						}
						if(t->defesa < 0)
						{
							t->defesa = 0;
						}
						printf("\n\nDano causado: %d", um->dano);
						printf("\nVida do inimigo: %d\nDefesa do inimigo: %d", t->pv, t->defesa);
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
							e = 74;
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
							e = 74;
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
						e = 74;
					}
				}while(e == 74);
			
				if(defi > 0)
				{
					t->defesa = t->defesa/2;
					defi = 0;
				}
			
				t->vf = t->pv + t->defesa;
				um->vf = um->pv + um->defesa;
				if(um->vf <= 0 || t->vf <= 0)
				{
					system("cls");
					break;
				}
				else
				{
					system("cls");
					printf("Turno do inimigo");
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", t->nome, t->pv, t->nome, t->defesa);
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
					system("cls");
				
					di = 0;
					srand(time(NULL));
		
					di = rand() % 3;
	
					if(di == 0)
					{
						system("cls");
						printf("Inimigo usou: Atacar");
						AtacarInimigo2(um, t);
						if(um->pv < 0)
						{
							um->pv = 0;
						}
						if(um->defesa < 0)
						{
							um->defesa = 0;
						}
						printf("\n\nDano causado: %d", t->dano);
						printf("\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &op);
					}
					else if(di == 1)
					{
						system("cls");
						printf("Inimigo usou: Defender");
						printf("\n\nDefesa do inimigo antes: %d", t->defesa);
						DefesaInimigo2(t);
						defi++;
						printf("\nDefesa do inimigo depois: %d", t->defesa);
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &op);
					}
					else
					{
						system("cls");
						printf("Inimigo usou: Pocao");
						printf("\n\nVida do inimigo antes: %d", t->pv);
						PocaoInimigo2(t);
						pi++;
						printf("\nVida do inimigo depois: %d", t->pv);
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &op);
					}
				}
					
				if(def > 0)
				{
					um->defesa = um->defesa/2;
					def = 0;
				}
				
				t->vf = t->pv + t->defesa;
				um->vf = um->pv + um->defesa;
				if(um->vf <= 0 || t->vf <= 0)
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
		else
		{
			do
			{
				printf("\n\nTurno do inimigo");
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", t->nome, t->pv, t->nome, t->defesa);
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
				system("cls");
		
				srand(time(NULL));
			
				di = 0;
				di = rand() % 3;
			
				if(di == 0)
					{
					system("cls");
					printf("Inimigo usou: Atacar");
					AtacarInimigo2(um, t);
					if(um->pv < 0)
					{
						um->pv = 0;
					}
					if(um->defesa < 0)
					{
						um->defesa = 0;
					}
					printf("\n\nDano causado: %d", t->dano);
					printf("\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
				else if(di == 1)
				{
					system("cls");
					printf("Inimigo usou: Defender");
					printf("\n\nDefesa do inimigo antes: %d", t->defesa);
					DefesaInimigo2(t);
					defi++;
					printf("\nDefesa do inimigo depois: %d", t->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
				else
				{
					system("cls");
					printf("Inimigo usou: Pocao");
					printf("\n\nVida do inimigo antes: %d", t->pv);
					PocaoInimigo2(t);
					pi++;
					printf("\nVida do inimigo depois: %d", t->pv);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
				
				if(def > 0)
				{
					um->defesa = um->defesa/2;
					def = 0;
				}
					
				t->vf = t->pv + t->defesa;
				um->vf = um->pv + um->defesa;
				if(um->vf <= 0 || t->vf <= 0)
				{
					system("cls");
					break;
				}
				else
				{
					e = 4;
				}
			
				do
				{
					ArmasComp(um, h);
					system("cls");
					printf("Turno do jogador");
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", t->nome, t->pv, t->nome, t->defesa);
					printf("\n\n1- Atacar\n2- Defender\n3- Usar pocao");
					printf("\nEscolha: ");
					scanf("%d", &e);
					
					if(e == 1)
					{
						system("cls");
						printf("%s usou: Atacar", um->nome);
						Atacar2(um, t);
						if(t->pv < 0)
						{
							t->pv = 0;
						}
						if(t->defesa < 0)
						{
							t->defesa = 0;
						}
						printf("\n\nDano causado: %d", um->dano);
						printf("\nVida do inimigo: %d\nDefesa do inimigo: %d", t->pv, t->defesa);
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
							e = 93;
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
							e = 93;
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
						e = 93;
					}
				}while(e == 93);
				
				if(defi > 0)
				{
					t->defesa = t->defesa/2;
					defi = 0;
				}
				t->vf = t->pv + t->defesa;
				um->vf = um->pv + um->defesa;
				if(um->vf <= 0 || t->vf <= 0)
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
	}
}












void CombateTres(jogador *um, inimigo3 *g, arma *h)
{
	int e = 4;
	int di;
	int m;
	char op;
	int def = 0;
	int defi = 0;
	int p = 0;
	int pi = 0;
	
	Inimigo3(g);
	
	
	//INICIO
	//AGILIDADE JOGADOR >
	if(um->agilidade > g->agilidade)
	{
		do
		{
			do
			{
				ArmasComp(um, h);
				system("cls");
				printf("Turno do jogador");
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", g->nome, g->pv, g->nome, g->defesa);
				printf("\n\n1- Atacar\n2- Defender\n3- Usar pocao");
				printf("\nEscolha: ");
				scanf("%d", &e);
					
				if(e == 1)
				{
					system("cls");
					printf("%s usou: Atacar", um->nome);
					Atacar3(um, g);
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
						e = 50;
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
						e = 50;
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
					e = 50;
				}
			}while(e == 50);
			
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
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", g->nome, g->pv, g->nome, g->defesa);
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
				system("cls");
				
				di = 0;
				srand(time(NULL));
		
				di = rand() % 3;
				
				if(di == 0)
				{
					system("cls");
					printf("Inimigo usou: Atacar");
					AtacarInimigo3(um, g);
					if(um->pv < 0)
					{
						um->pv = 0;
					}
					if(um->defesa < 0)
					{
						um->defesa = 0;
					}
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
					DefesaInimigo3(g);
					defi++;
					printf("\nDefesa do inimigo depois: %d", g->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
				else
				{
					system("cls");
					printf("Inimigo usou: Pocao");
					printf("\n\nVida do inimigo antes: %d", g->pv);
					PocaoInimigo3(g);
					pi++;
					printf("\nVida do inimigo depois: %d", g->pv);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
			}
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

















	//AGILIDADE INIMIGO >
	else if(um->agilidade < g->agilidade)
	{
		do
		{	
			system("cls");
			printf("Turno do inimigo");
			printf("\n\nVida de %s: %d\nDefesa de %s: %d", g->nome, g->pv, g->nome, g->defesa);
			printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
			printf("\n\nPressione qualquer tecla para continuar: ");
			scanf(" %c", &op);
			system("cls");
		
			di = 0;
			srand(time(NULL));
		
			di = rand() % 3;
		
			srand(time(NULL));
		
			di = rand() % 3;
			
			if(di == 0)
			{
				system("cls");
				printf("Inimigo usou: Atacar");
				AtacarInimigo3(um, g);
				if(um->pv < 0)
				{
					um->pv = 0;
				}
				if(um->defesa < 0)
				{
					um->defesa = 0;
				}
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
				DefesaInimigo3(g);
				defi++;
				printf("\nDefesa do inimigo depois: %d", g->defesa);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
			}
			else
			{
				system("cls");
				printf("Inimigo usou: Pocao");
				printf("\n\nVida do inimigo antes: %d", g->pv);
				PocaoInimigo3(g);
				pi++;
				printf("\nVida do inimigo depois: %d", g->pv);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
			}

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
			do
			{
				ArmasComp(um, h);
				system("cls");
				printf("Turno do jogador");
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", g->nome, g->pv, g->nome, g->defesa);
				printf("\n\n1- Atacar\n2- Defender\n3- Usar pocao");
				printf("\nEscolha: ");
				scanf("%d", &e);
					
				if(e == 1)
				{
					system("cls");
					printf("%s usou: Atacar", um->nome);
					Atacar3(um, g);
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
					break;
				}
				else if(e == 2)
				{
					system("cls");
					if(um->defesa <= 0)
					{
						printf("Voce nao tem como usar essa habilidade");
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &op);
						e = 1264;
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
						break;
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
						e = 1264;
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
						break;
					}
				}
				else
				{
					system("cls");
					printf("Opcao invalida\n");
					printf("Pressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
					e = 1264;
				}
			}while(e == 1264);
			
			
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
				e = 4;
			}
		}while(e > 3);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//AGILIDADE JOGADOR = INIMIGO
	else
	{
		srand(time(NULL));
		
		m = rand() % 2;
		
		if(m == 0)
		{
			do
			{
				do
				{
					ArmasComp(um, h);
					system("cls");
					printf("Turno do jogador");
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", g->nome, g->pv, g->nome, g->defesa);
					printf("\n\n1- Atacar\n2- Defender\n3- Usar pocao");
					printf("\nEscolha: ");
					scanf("%d", &e);
					
					if(e == 1)
					{
						system("cls");
						printf("%s usou: Atacar", um->nome);
						Atacar3(um, g);
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
							e = 74;
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
							e = 74;
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
						e = 74;
					}
				}while(e == 74);
			
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
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", g->nome, g->pv, g->nome, g->defesa);
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
					system("cls");
				
					di = 0;
					srand(time(NULL));
		
					di = rand() % 3;
	
					if(di == 0)
					{
						system("cls");
						printf("Inimigo usou: Atacar");
						AtacarInimigo3(um, g);
						if(um->pv < 0)
						{
							um->pv = 0;
						}
						if(um->defesa < 0)
						{
							um->defesa = 0;
						}
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
						DefesaInimigo3(g);
						defi++;
						printf("\nDefesa do inimigo depois: %d", g->defesa);
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &op);
					}
					else
					{
						system("cls");
						printf("Inimigo usou: Pocao");
						printf("\n\nVida do inimigo antes: %d", g->pv);
						PocaoInimigo3(g);
						pi++;
						printf("\nVida do inimigo depois: %d", g->pv);
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &op);
					}
				}
					
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
		else
		{
			do
			{
				printf("\n\nTurno do inimigo");
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", g->nome, g->pv, g->nome, g->defesa);
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
				system("cls");
		
				srand(time(NULL));
			
				di = 0;
				di = rand() % 3;
			
				if(di == 0)
					{
					system("cls");
					printf("Inimigo usou: Atacar");
					AtacarInimigo3(um, g);
					if(um->pv < 0)
					{
						um->pv = 0;
					}
					if(um->defesa < 0)
					{
						um->defesa = 0;
					}
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
					DefesaInimigo3(g);
					defi++;
					printf("\nDefesa do inimigo depois: %d", g->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
				else
				{
					system("cls");
					printf("Inimigo usou: Pocao");
					printf("\n\nVida do inimigo antes: %d", g->pv);
					PocaoInimigo3(g);
					pi++;
					printf("\nVida do inimigo depois: %d", g->pv);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
				
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
			
				do
				{
					ArmasComp(um, h);
					system("cls");
					printf("Turno do jogador");
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", g->nome, g->pv, g->nome, g->defesa);
					printf("\n\n1- Atacar\n2- Defender\n3- Usar pocao");
					printf("\nEscolha: ");
					scanf("%d", &e);
					
					if(e == 1)
					{
						system("cls");
						printf("%s usou: Atacar", um->nome);
						Atacar3(um, g);
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
							e = 93;
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
							e = 93;
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
						e = 93;
					}
				}while(e == 93);
				
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
					e = 4;
				}
			}while(e > 3);
		}
	}
}













































void CombateQuatro(jogador *um, inimigo4 *g, arma *h)
{
	int e = 4;
	int di;
	int m;
	char op;
	int def = 0;
	int defi = 0;
	int p = 0;
	int pi = 0;
	
	Inimigo4(g);
	
	
	//INICIO
	//AGILIDADE JOGADOR >
	if(um->agilidade > g->agilidade)
	{
		do
		{
			do
			{
				ArmasComp(um, h);
				system("cls");
				printf("Turno do jogador");
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", g->nome, g->pv, g->nome, g->defesa);
				printf("\n\n1- Atacar\n2- Defender\n3- Usar pocao");
				printf("\nEscolha: ");
				scanf("%d", &e);
					
				if(e == 1)
				{
					system("cls");
					printf("%s usou: Atacar", um->nome);
					Atacar4(um, g);
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
						e = 50;
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
						e = 50;
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
					e = 50;
				}
			}while(e == 50);
			
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
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", g->nome, g->pv, g->nome, g->defesa);
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
				system("cls");
				
				di = 0;
				srand(time(NULL));
		
				di = rand() % 3;
				
				if(di == 0)
				{
					system("cls");
					printf("Inimigo usou: Atacar");
					AtacarInimigo4(um, g);
					if(um->pv < 0)
					{
						um->pv = 0;
					}
					if(um->defesa < 0)
					{
						um->defesa = 0;
					}
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
					DefesaInimigo4(g);
					defi++;
					printf("\nDefesa do inimigo depois: %d", g->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
				else
				{
					system("cls");
					printf("Inimigo usou: Pocao");
					printf("\n\nVida do inimigo antes: %d", g->pv);
					PocaoInimigo4(g);
					pi++;
					printf("\nVida do inimigo depois: %d", g->pv);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
			}
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

















	//AGILIDADE INIMIGO >
	else if(um->agilidade < g->agilidade)
	{
		do
		{	
			system("cls");
			printf("Turno do inimigo");
			printf("\n\nVida de %s: %d\nDefesa de %s: %d", g->nome, g->pv, g->nome, g->defesa);
			printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
			printf("\n\nPressione qualquer tecla para continuar: ");
			scanf(" %c", &op);
			system("cls");
		
			di = 0;
			srand(time(NULL));
		
			di = rand() % 3;
		
			srand(time(NULL));
		
			di = rand() % 3;
			
			if(di == 0)
			{
				system("cls");
				printf("Inimigo usou: Atacar");
				AtacarInimigo4(um, g);
				if(um->pv < 0)
				{
					um->pv = 0;
				}
				if(um->defesa < 0)
				{
					um->defesa = 0;
				}
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
				DefesaInimigo4(g);
				defi++;
				printf("\nDefesa do inimigo depois: %d", g->defesa);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
			}
			else
			{
				system("cls");
				printf("Inimigo usou: Pocao");
				printf("\n\nVida do inimigo antes: %d", g->pv);
				PocaoInimigo4(g);
				pi++;
				printf("\nVida do inimigo depois: %d", g->pv);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
			}

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
			do
			{
				ArmasComp(um, h);
				system("cls");
				printf("Turno do jogador");
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", g->nome, g->pv, g->nome, g->defesa);
				printf("\n\n1- Atacar\n2- Defender\n3- Usar pocao");
				printf("\nEscolha: ");
				scanf("%d", &e);
					
				if(e == 1)
				{
					system("cls");
					printf("%s usou: Atacar", um->nome);
					Atacar4(um, g);
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
					break;
				}
				else if(e == 2)
				{
					system("cls");
					if(um->defesa <= 0)
					{
						printf("Voce nao tem como usar essa habilidade");
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &op);
						e = 1264;
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
						break;
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
						e = 1264;
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
						break;
					}
				}
				else
				{
					system("cls");
					printf("Opcao invalida\n");
					printf("Pressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
					e = 1264;
				}
			}while(e == 1264);
			
			
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
				e = 4;
			}
		}while(e > 3);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//AGILIDADE JOGADOR = INIMIGO
	else
	{
		srand(time(NULL));
		
		m = rand() % 2;
		
		if(m == 0)
		{
			do
			{
				do
				{
					ArmasComp(um, h);
					system("cls");
					printf("Turno do jogador");
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", g->nome, g->pv, g->nome, g->defesa);
					printf("\n\n1- Atacar\n2- Defender\n3- Usar pocao");
					printf("\nEscolha: ");
					scanf("%d", &e);
					
					if(e == 1)
					{
						system("cls");
						printf("%s usou: Atacar", um->nome);
						Atacar4(um, g);
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
							e = 74;
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
							e = 74;
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
						e = 74;
					}
				}while(e == 74);
			
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
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", g->nome, g->pv, g->nome, g->defesa);
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
					system("cls");
				
					di = 0;
					srand(time(NULL));
		
					di = rand() % 3;
	
					if(di == 0)
					{
						system("cls");
						printf("Inimigo usou: Atacar");
						AtacarInimigo4(um, g);
						if(um->pv < 0)
						{
							um->pv = 0;
						}
						if(um->defesa < 0)
						{
							um->defesa = 0;
						}
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
						DefesaInimigo4(g);
						defi++;
						printf("\nDefesa do inimigo depois: %d", g->defesa);
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &op);
					}
					else
					{
						system("cls");
						printf("Inimigo usou: Pocao");
						printf("\n\nVida do inimigo antes: %d", g->pv);
						PocaoInimigo4(g);
						pi++;
						printf("\nVida do inimigo depois: %d", g->pv);
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &op);
					}
				}
					
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
		else
		{
			do
			{
				printf("\n\nTurno do inimigo");
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", g->nome, g->pv, g->nome, g->defesa);
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
				system("cls");
		
				srand(time(NULL));
			
				di = 0;
				di = rand() % 3;
			
				if(di == 0)
					{
					system("cls");
					printf("Inimigo usou: Atacar");
					AtacarInimigo4(um, g);
					if(um->pv < 0)
					{
						um->pv = 0;
					}
					if(um->defesa < 0)
					{
						um->defesa = 0;
					}
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
					DefesaInimigo4(g);
					defi++;
					printf("\nDefesa do inimigo depois: %d", g->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
				else
				{
					system("cls");
					printf("Inimigo usou: Pocao");
					printf("\n\nVida do inimigo antes: %d", g->pv);
					PocaoInimigo4(g);
					pi++;
					printf("\nVida do inimigo depois: %d", g->pv);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
				
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
			
				do
				{
					ArmasComp(um, h);
					system("cls");
					printf("Turno do jogador");
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", g->nome, g->pv, g->nome, g->defesa);
					printf("\n\n1- Atacar\n2- Defender\n3- Usar pocao");
					printf("\nEscolha: ");
					scanf("%d", &e);
					
					if(e == 1)
					{
						system("cls");
						printf("%s usou: Atacar", um->nome);
						Atacar4(um, g);
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
							e = 93;
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
							e = 93;
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
						e = 93;
					}
				}while(e == 93);
				
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
					e = 4;
				}
			}while(e > 3);
		}
	}
}














void CombateChefe1(jogador *um, chefe1 *l, arma *h)
{
	int e = 4;
	int di;
	int m;
	char op;
	int def = 0;
	int defi = 0;
	int p = 0;
	int pi = 0;
	
		Chefe1(l);
	
	
	//INICIO
	//AGILIDADE JOGADOR >
	if(um->agilidade > l->agilidade)
	{
		do
		{
			do
			{
				ArmasComp(um, h);
				system("cls");
				printf("Turno do jogador");
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", l->nome, l->pv, l->nome, l->defesa);
				printf("\n\n1- Atacar\n2- Defender\n3- Usar pocao");
				printf("\nEscolha: ");
				scanf("%d", &e);
					
				if(e == 1)
				{
					system("cls");
					printf("%s usou: Atacar", um->nome);
					AtacarCC1(um, l);
					if(l->pv < 0)
					{
						l->pv = 0;
					}
					if(l->defesa < 0)
					{
						l->defesa = 0;
					}
					printf("\n\nDano causado: %d", um->dano);
					printf("\nVida do inimigo: %d\nDefesa do inimigo: %d", l->pv, l->defesa);
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
						e = 50;
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
						e = 50;
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
					e = 50;
				}
			}while(e == 50);
			
			if(defi > 0)
			{
				l->defesa = l->defesa/2;
				defi = 0;
			}
			
			l->vf = l->pv + l->defesa;
			um->vf = um->pv + um->defesa;
			if(um->vf <= 0 || l->vf <= 0)
			{
				system("cls");
				break;
			}
			
			else
			{
				system("cls");
				printf("Turno do inimigo");
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", l->nome, l->pv, l->nome, l->defesa);
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
				system("cls");
				
				di = 0;
				srand(time(NULL));
				if(pi > 3)
				{
					di = rand() % 2;
				}
				else
				{
					di = rand() % 3;
				}
				
				if(di == 0)
				{
					system("cls");
					printf("Inimigo usou: Atacar");
					AtacarC1(um, l);
					if(um->pv < 0)
					{
						um->pv = 0;
					}
					if(um->defesa < 0)
					{
						um->defesa = 0;
					}
					printf("\n\nDano causado: %d", l->dano);
					printf("\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
				else if(di == 1)
				{
					system("cls");
					printf("Inimigo usou: Defender");
					printf("\n\nDefesa do inimigo antes: %d", l->defesa);
					DefesaC1(l);
					defi++;
					printf("\nDefesa do inimigo depois: %d", l->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
				else
				{
					system("cls");
					printf("Inimigo usou: Pocao");
					printf("\n\nVida do inimigo antes: %d", l->pv);
					PocaoC1(l);
					pi++;
					printf("\nVida do inimigo depois: %d", l->pv);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
			}
			if(def > 0)
			{
				um->defesa = um->defesa/2;
				def = 0;
			}
			
			l->vf = l->pv + l->defesa;
			um->vf = um->pv + um->defesa;
			if(um->vf <= 0 || l->vf <= 0)
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

















	//AGILIDADE INIMIGO >
	else if(um->agilidade < l->agilidade)
	{
		do
		{	
			system("cls");
			printf("Turno do inimigo");
			printf("\n\nVida de %s: %d\nDefesa de %s: %d", l->nome, l->pv, l->nome, l->defesa);
			printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
			printf("\n\nPressione qualquer tecla para continuar: ");
			scanf(" %c", &op);
			system("cls");
		
			di = 0;
			srand(time(NULL));
		
			di = rand() % 3;
			
			if(di == 0)
			{
				system("cls");
				printf("Inimigo usou: Atacar");
				AtacarC1(um, l);
				if(um->pv < 0)
				{
					um->pv = 0;
				}
				if(um->defesa < 0)
				{
					um->defesa = 0;
				}
				printf("\n\nDano causado: %d", l->dano);
				printf("\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
			}
			else if(di == 1)
			{
				system("cls");
				printf("Inimigo usou: Defender");
				printf("\n\nDefesa do inimigo antes: %d", l->defesa);
				DefesaC1(l);
				defi++;
				printf("\nDefesa do inimigo depois: %d", l->defesa);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
			}
			else
			{
				system("cls");
				printf("Inimigo usou: Pocao");
				printf("\n\nVida do inimigo antes: %d", l->pv);
				PocaoC1(l);
				pi++;
				printf("\nVida do inimigo depois: %d", l->pv);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
			}

			if(def > 0)
			{
				um->defesa = um->defesa/2;
				def = 0;
			}
					
			l->vf = l->pv + l->defesa;
			um->vf = um->pv + um->defesa;
			if(um->vf <= 0 || l->vf <= 0)
			{
				system("cls");
				break;
			}
			else
			{
				e = 4;
			}
			do
			{
				ArmasComp(um, h);
				system("cls");
				printf("Turno do jogador");
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", l->nome, l->pv, l->nome, l->defesa);
				printf("\n\n1- Atacar\n2- Defender\n3- Usar pocao");
				printf("\nEscolha: ");
				scanf("%d", &e);
					
				if(e == 1)
				{
					system("cls");
					printf("%s usou: Atacar", um->nome);
					AtacarCC1(um, l);
					if(l->pv < 0)
					{
						l->pv = 0;
					}
					if(l->defesa < 0)
					{
						l->defesa = 0;
					}
					printf("\n\nDano causado: %d", um->dano);
					printf("\nVida do inimigo: %d\nDefesa do inimigo: %d", l->pv, l->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
					break;
				}
				else if(e == 2)
				{
					system("cls");
					if(um->defesa <= 0)
					{
						printf("Voce nao tem como usar essa habilidade");
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &op);
						e = 1264;
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
						break;
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
						e = 1264;
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
						break;
					}
				}
				else
				{
					system("cls");
					printf("Opcao invalida\n");
					printf("Pressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
					e = 1264;
				}
			}while(e == 1264);
			
			
			if(defi > 0)
			{
				l->defesa = l->defesa/2;
				defi = 0;
			}
			l->vf = l->pv + l->defesa;
			um->vf = um->pv + um->defesa;
			if(um->vf <= 0 || l->vf <= 0)
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
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//AGILIDADE JOGADOR = INIMIGO
	else
	{
		srand(time(NULL));
		
		m = rand() % 2;
		
		if(m == 0)
		{
			do
			{
				do
				{
					ArmasComp(um, h);
					system("cls");
					printf("Turno do jogador");
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", l->nome, l->pv, l->nome, l->defesa);
					printf("\n\n1- Atacar\n2- Defender\n3- Usar pocao");
					printf("\nEscolha: ");
					scanf("%d", &e);
					
					if(e == 1)
					{
						system("cls");
						printf("%s usou: Atacar", um->nome);
						AtacarCC1(um, l);
						if(l->pv < 0)
						{
							l->pv = 0;
						}
						if(l->defesa < 0)
						{
							l->defesa = 0;
						}
						printf("\n\nDano causado: %d", um->dano);
						printf("\nVida do inimigo: %d\nDefesa do inimigo: %d", l->pv, l->defesa);
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
							e = 74;
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
							e = 74;
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
						e = 74;
					}
				}while(e == 74);
			
				if(defi > 0)
				{
					l->defesa = l->defesa/2;
					defi = 0;
				}
			
				l->vf = l->pv + l->defesa;
				um->vf = um->pv + um->defesa;
				if(um->vf <= 0 || l->vf <= 0)
				{
					system("cls");
					break;
				}
				else
				{
					system("cls");
					printf("Turno do inimigo");
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", l->nome, l->pv, l->nome, l->defesa);
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
					system("cls");
				
					di = 0;
					srand(time(NULL));
		
					di = rand() % 3;
	
					if(di == 0)
					{
						system("cls");
						printf("Inimigo usou: Atacar");
						AtacarC1(um, l);
						if(um->pv < 0)
						{
							um->pv = 0;
						}
						if(um->defesa < 0)
						{
							um->defesa = 0;
						}
						printf("\n\nDano causado: %d", l->dano);
						printf("\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &op);
					}
					else if(di == 1)
					{
						system("cls");
						printf("Inimigo usou: Defender");
						printf("\n\nDefesa do inimigo antes: %d", l->defesa);
						DefesaC1(l);
						defi++;
						printf("\nDefesa do inimigo depois: %d", l->defesa);
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &op);
					}
					else
					{
						system("cls");
						printf("Inimigo usou: Pocao");
						printf("\n\nVida do inimigo antes: %d", l->pv);
						PocaoC1(l);
						pi++;
						printf("\nVida do inimigo depois: %d", l->pv);
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &op);
					}
				}
					
				if(def > 0)
				{
					um->defesa = um->defesa/2;
					def = 0;
				}
				
				l->vf = l->pv + l->defesa;
				um->vf = um->pv + um->defesa;
				if(um->vf <= 0 || l->vf <= 0)
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
		else
		{
			do
			{
				printf("\n\nTurno do inimigo");
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", l->nome, l->pv, l->nome, l->defesa);
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
				system("cls");
		
				srand(time(NULL));
			
				di = 0;
				di = rand() % 3;
			
				if(di == 0)
					{
					system("cls");
					printf("Inimigo usou: Atacar");
					AtacarC1(um, l);
					if(um->pv < 0)
					{
						um->pv = 0;
					}
					if(um->defesa < 0)
					{
						um->defesa = 0;
					}
					printf("\n\nDano causado: %d", l->dano);
					printf("\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
				else if(di == 1)
				{
					system("cls");
					printf("Inimigo usou: Defender");
					printf("\n\nDefesa do inimigo antes: %d", l->defesa);
					DefesaC1(l);
					defi++;
					printf("\nDefesa do inimigo depois: %d", l->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
				else
				{
					system("cls");
					printf("Inimigo usou: Pocao");
					printf("\n\nVida do inimigo antes: %d", l->pv);
					PocaoC1(l);
					pi++;
					printf("\nVida do inimigo depois: %d", l->pv);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
				
				if(def > 0)
				{
					um->defesa = um->defesa/2;
					def = 0;
				}
					
				l->vf = l->pv + l->defesa;
				um->vf = um->pv + um->defesa;
				if(um->vf <= 0 || l->vf <= 0)
				{
					system("cls");
					break;
				}
				else
				{
					e = 4;
				}
			
				do
				{
					ArmasComp(um, h);
					system("cls");
					printf("Turno do jogador");
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", l->nome, l->pv, l->nome, l->defesa);
					printf("\n\n1- Atacar\n2- Defender\n3- Usar pocao");
					printf("\nEscolha: ");
					scanf("%d", &e);
					
					if(e == 1)
					{
						system("cls");
						printf("%s usou: Atacar", um->nome);
						AtacarCC1(um, l);
						if(l->pv < 0)
						{
							l->pv = 0;
						}
						if(l->defesa < 0)
						{
							l->defesa = 0;
						}
						printf("\n\nDano causado: %d", um->dano);
						printf("\nVida do inimigo: %d\nDefesa do inimigo: %d", l->pv, l->defesa);
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
							e = 93;
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
							e = 93;
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
						e = 93;
					}
				}while(e == 93);
				
				if(defi > 0)
				{
					l->defesa = l->defesa/2;
					defi = 0;
				}
				l->vf = l->pv + l->defesa;
				um->vf = um->pv + um->defesa;
				if(um->vf <= 0 || l->vf <= 0)
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
	}
}


void CombateChefe2(jogador *um, chefe2 *l, arma *h)
{
	int e = 4;
	int di;
	int m;
	char op;
	int def = 0;
	int defi = 0;
	int p = 0;
	int pi = 0;
	
		Chefe2(l);
	
	
	//INICIO
	//AGILIDADE JOGADOR >
	if(um->agilidade > l->agilidade)
	{
		do
		{
			do
			{
				ArmasComp(um, h);
				system("cls");
				printf("Turno do jogador");
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", l->nome, l->pv, l->nome, l->defesa);
				printf("\n\n1- Atacar\n2- Defender\n3- Usar pocao");
				printf("\nEscolha: ");
				scanf("%d", &e);
					
				if(e == 1)
				{
					system("cls");
					printf("%s usou: Atacar", um->nome);
					AtacarCC2(um, l);
					if(l->pv < 0)
					{
						l->pv = 0;
					}
					if(l->defesa < 0)
					{
						l->defesa = 0;
					}
					printf("\n\nDano causado: %d", um->dano);
					printf("\nVida do inimigo: %d\nDefesa do inimigo: %d", l->pv, l->defesa);
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
						e = 50;
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
						e = 50;
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
					e = 50;
				}
			}while(e == 50);
			
			if(defi > 0)
			{
				l->defesa = l->defesa/2;
				defi = 0;
			}
			
			l->vf = l->pv + l->defesa;
			um->vf = um->pv + um->defesa;
			if(um->vf <= 0 || l->vf <= 0)
			{
				system("cls");
				break;
			}
			
			else
			{
				system("cls");
				printf("Turno do inimigo");
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", l->nome, l->pv, l->nome, l->defesa);
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
				system("cls");
				
				di = 0;
				srand(time(NULL));
				if(pi > 3)
				{
					di = rand() % 2;
				}
				else
				{
					di = rand() % 3;
				}
				
				if(di == 0)
				{
					system("cls");
					printf("Inimigo usou: Atacar");
					AtacarC2(um, l);
					if(um->pv < 0)
					{
						um->pv = 0;
					}
					if(um->defesa < 0)
					{
						um->defesa = 0;
					}
					printf("\n\nDano causado: %d", l->dano);
					printf("\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
				else if(di == 1)
				{
					system("cls");
					printf("Inimigo usou: Defender");
					printf("\n\nDefesa do inimigo antes: %d", l->defesa);
					DefesaC2(l);
					defi++;
					printf("\nDefesa do inimigo depois: %d", l->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
				else
				{
					system("cls");
					printf("Inimigo usou: Pocao");
					printf("\n\nVida do inimigo antes: %d", l->pv);
					PocaoC2(l);
					pi++;
					printf("\nVida do inimigo depois: %d", l->pv);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
			}
			if(def > 0)
			{
				um->defesa = um->defesa/2;
				def = 0;
			}
			
			l->vf = l->pv + l->defesa;
			um->vf = um->pv + um->defesa;
			if(um->vf <= 0 || l->vf <= 0)
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

















	//AGILIDADE INIMIGO >
	else if(um->agilidade < l->agilidade)
	{
		do
		{	
			system("cls");
			printf("Turno do inimigo");
			printf("\n\nVida de %s: %d\nDefesa de %s: %d", l->nome, l->pv, l->nome, l->defesa);
			printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
			printf("\n\nPressione qualquer tecla para continuar: ");
			scanf(" %c", &op);
			system("cls");
		
			di = 0;
			srand(time(NULL));
		
			di = rand() % 3;
			
			if(di == 0)
			{
				system("cls");
				printf("Inimigo usou: Atacar");
				AtacarC2(um, l);
				if(um->pv < 0)
				{
					um->pv = 0;
				}
				if(um->defesa < 0)
				{
					um->defesa = 0;
				}
				printf("\n\nDano causado: %d", l->dano);
				printf("\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
			}
			else if(di == 1)
			{
				system("cls");
				printf("Inimigo usou: Defender");
				printf("\n\nDefesa do inimigo antes: %d", l->defesa);
				DefesaC2(l);
				defi++;
				printf("\nDefesa do inimigo depois: %d", l->defesa);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
			}
			else
			{
				system("cls");
				printf("Inimigo usou: Pocao");
				printf("\n\nVida do inimigo antes: %d", l->pv);
				PocaoC2(l);
				pi++;
				printf("\nVida do inimigo depois: %d", l->pv);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
			}

			if(def > 0)
			{
				um->defesa = um->defesa/2;
				def = 0;
			}
					
			l->vf = l->pv + l->defesa;
			um->vf = um->pv + um->defesa;
			if(um->vf <= 0 || l->vf <= 0)
			{
				system("cls");
				break;
			}
			else
			{
				e = 4;
			}
			do
			{
				ArmasComp(um, h);
				system("cls");
				printf("Turno do jogador");
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", l->nome, l->pv, l->nome, l->defesa);
				printf("\n\n1- Atacar\n2- Defender\n3- Usar pocao");
				printf("\nEscolha: ");
				scanf("%d", &e);
					
				if(e == 1)
				{
					system("cls");
					printf("%s usou: Atacar", um->nome);
					AtacarCC2(um, l);
					if(l->pv < 0)
					{
						l->pv = 0;
					}
					if(l->defesa < 0)
					{
						l->defesa = 0;
					}
					printf("\n\nDano causado: %d", um->dano);
					printf("\nVida do inimigo: %d\nDefesa do inimigo: %d", l->pv, l->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
					break;
				}
				else if(e == 2)
				{
					system("cls");
					if(um->defesa <= 0)
					{
						printf("Voce nao tem como usar essa habilidade");
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &op);
						e = 1264;
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
						break;
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
						e = 1264;
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
						break;
					}
				}
				else
				{
					system("cls");
					printf("Opcao invalida\n");
					printf("Pressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
					e = 1264;
				}
			}while(e == 1264);
			
			
			if(defi > 0)
			{
				l->defesa = l->defesa/2;
				defi = 0;
			}
			l->vf = l->pv + l->defesa;
			um->vf = um->pv + um->defesa;
			if(um->vf <= 0 || l->vf <= 0)
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
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//AGILIDADE JOGADOR = INIMIGO
	else
	{
		srand(time(NULL));
		
		m = rand() % 2;
		
		if(m == 0)
		{
			do
			{
				do
				{
					ArmasComp(um, h);
					system("cls");
					printf("Turno do jogador");
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", l->nome, l->pv, l->nome, l->defesa);
					printf("\n\n1- Atacar\n2- Defender\n3- Usar pocao");
					printf("\nEscolha: ");
					scanf("%d", &e);
					
					if(e == 1)
					{
						system("cls");
						printf("%s usou: Atacar", um->nome);
						AtacarCC2(um, l);
						if(l->pv < 0)
						{
							l->pv = 0;
						}
						if(l->defesa < 0)
						{
							l->defesa = 0;
						}
						printf("\n\nDano causado: %d", um->dano);
						printf("\nVida do inimigo: %d\nDefesa do inimigo: %d", l->pv, l->defesa);
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
							e = 74;
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
							e = 74;
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
						e = 74;
					}
				}while(e == 74);
			
				if(defi > 0)
				{
					l->defesa = l->defesa/2;
					defi = 0;
				}
			
				l->vf = l->pv + l->defesa;
				um->vf = um->pv + um->defesa;
				if(um->vf <= 0 || l->vf <= 0)
				{
					system("cls");
					break;
				}
				else
				{
					system("cls");
					printf("Turno do inimigo");
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", l->nome, l->pv, l->nome, l->defesa);
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
					system("cls");
				
					di = 0;
					srand(time(NULL));
		
					di = rand() % 3;
	
					if(di == 0)
					{
						system("cls");
						printf("Inimigo usou: Atacar");
						AtacarC2(um, l);
						if(um->pv < 0)
						{
							um->pv = 0;
						}
						if(um->defesa < 0)
						{
							um->defesa = 0;
						}
						printf("\n\nDano causado: %d", l->dano);
						printf("\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &op);
					}
					else if(di == 1)
					{
						system("cls");
						printf("Inimigo usou: Defender");
						printf("\n\nDefesa do inimigo antes: %d", l->defesa);
						DefesaC2(l);
						defi++;
						printf("\nDefesa do inimigo depois: %d", l->defesa);
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &op);
					}
					else
					{
						system("cls");
						printf("Inimigo usou: Pocao");
						printf("\n\nVida do inimigo antes: %d", l->pv);
						PocaoC2(l);
						pi++;
						printf("\nVida do inimigo depois: %d", l->pv);
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &op);
					}
				}
					
				if(def > 0)
				{
					um->defesa = um->defesa/2;
					def = 0;
				}
				
				l->vf = l->pv + l->defesa;
				um->vf = um->pv + um->defesa;
				if(um->vf <= 0 || l->vf <= 0)
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
		else
		{
			do
			{
				printf("\n\nTurno do inimigo");
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", l->nome, l->pv, l->nome, l->defesa);
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
				system("cls");
		
				srand(time(NULL));
			
				di = 0;
				di = rand() % 3;
			
				if(di == 0)
					{
					system("cls");
					printf("Inimigo usou: Atacar");
					AtacarC2(um, l);
					if(um->pv < 0)
					{
						um->pv = 0;
					}
					if(um->defesa < 0)
					{
						um->defesa = 0;
					}
					printf("\n\nDano causado: %d", l->dano);
					printf("\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
				else if(di == 1)
				{
					system("cls");
					printf("Inimigo usou: Defender");
					printf("\n\nDefesa do inimigo antes: %d", l->defesa);
					DefesaC2(l);
					defi++;
					printf("\nDefesa do inimigo depois: %d", l->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
				else
				{
					system("cls");
					printf("Inimigo usou: Pocao");
					printf("\n\nVida do inimigo antes: %d", l->pv);
					PocaoC2(l);
					pi++;
					printf("\nVida do inimigo depois: %d", l->pv);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
				
				if(def > 0)
				{
					um->defesa = um->defesa/2;
					def = 0;
				}
					
				l->vf = l->pv + l->defesa;
				um->vf = um->pv + um->defesa;
				if(um->vf <= 0 || l->vf <= 0)
				{
					system("cls");
					break;
				}
				else
				{
					e = 4;
				}
			
				do
				{
					ArmasComp(um, h);
					system("cls");
					printf("Turno do jogador");
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", l->nome, l->pv, l->nome, l->defesa);
					printf("\n\n1- Atacar\n2- Defender\n3- Usar pocao");
					printf("\nEscolha: ");
					scanf("%d", &e);
					
					if(e == 1)
					{
						system("cls");
						printf("%s usou: Atacar", um->nome);
						AtacarCC2(um, l);
						if(l->pv < 0)
						{
							l->pv = 0;
						}
						if(l->defesa < 0)
						{
							l->defesa = 0;
						}
						printf("\n\nDano causado: %d", um->dano);
						printf("\nVida do inimigo: %d\nDefesa do inimigo: %d", l->pv, l->defesa);
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
							e = 93;
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
							e = 93;
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
						e = 93;
					}
				}while(e == 93);
				
				if(defi > 0)
				{
					l->defesa = l->defesa/2;
					defi = 0;
				}
				l->vf = l->pv + l->defesa;
				um->vf = um->pv + um->defesa;
				if(um->vf <= 0 || l->vf <= 0)
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
	}
}

void CombateChefe3(jogador *um, chefe3 *l, arma *h)
{
	int e = 4;
	int di;
	int m;
	char op;
	int def = 0;
	int defi = 0;
	int p = 0;
	int pi = 0;
	
		Chefe3(l);
	
	
	//INICIO
	//AGILIDADE JOGADOR >
	if(um->agilidade > l->agilidade)
	{
		do
		{
			do
			{
				ArmasComp(um, h);
				system("cls");
				printf("Turno do jogador");
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", l->nome, l->pv, l->nome, l->defesa);
				printf("\n\n1- Atacar\n2- Defender\n3- Usar pocao");
				printf("\nEscolha: ");
				scanf("%d", &e);
					
				if(e == 1)
				{
					system("cls");
					printf("%s usou: Atacar", um->nome);
					AtacarCC3(um, l);
					if(l->pv < 0)
					{
						l->pv = 0;
					}
					if(l->defesa < 0)
					{
						l->defesa = 0;
					}
					printf("\n\nDano causado: %d", um->dano);
					printf("\nVida do inimigo: %d\nDefesa do inimigo: %d", l->pv, l->defesa);
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
						e = 50;
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
						e = 50;
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
					e = 50;
				}
			}while(e == 50);
			
			if(defi > 0)
			{
				l->defesa = l->defesa/2;
				defi = 0;
			}
			
			l->vf = l->pv + l->defesa;
			um->vf = um->pv + um->defesa;
			if(um->vf <= 0 || l->vf <= 0)
			{
				system("cls");
				break;
			}
			
			else
			{
				system("cls");
				printf("Turno do inimigo");
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", l->nome, l->pv, l->nome, l->defesa);
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
				system("cls");
				
				di = 0;
				srand(time(NULL));
				if(pi > 3)
				{
					di = rand() % 2;
				}
				else
				{
					di = rand() % 3;
				}
				
				if(di == 0)
				{
					system("cls");
					printf("Inimigo usou: Atacar");
					AtacarC3(um, l);
					if(um->pv < 0)
					{
						um->pv = 0;
					}
					if(um->defesa < 0)
					{
						um->defesa = 0;
					}
					printf("\n\nDano causado: %d", l->dano);
					printf("\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
				else if(di == 1)
				{
					system("cls");
					printf("Inimigo usou: Defender");
					printf("\n\nDefesa do inimigo antes: %d", l->defesa);
					DefesaC3(l);
					defi++;
					printf("\nDefesa do inimigo depois: %d", l->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
				else
				{
					system("cls");
					printf("Inimigo usou: Pocao");
					printf("\n\nVida do inimigo antes: %d", l->pv);
					PocaoC3(l);
					pi++;
					printf("\nVida do inimigo depois: %d", l->pv);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
			}
			if(def > 0)
			{
				um->defesa = um->defesa/2;
				def = 0;
			}
			
			l->vf = l->pv + l->defesa;
			um->vf = um->pv + um->defesa;
			if(um->vf <= 0 || l->vf <= 0)
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

















	//AGILIDADE INIMIGO >
	else if(um->agilidade < l->agilidade)
	{
		do
		{	
			system("cls");
			printf("Turno do inimigo");
			printf("\n\nVida de %s: %d\nDefesa de %s: %d", l->nome, l->pv, l->nome, l->defesa);
			printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
			printf("\n\nPressione qualquer tecla para continuar: ");
			scanf(" %c", &op);
			system("cls");
		
			di = 0;
			srand(time(NULL));
		
			di = rand() % 3;
			
			if(di == 0)
			{
				system("cls");
				printf("Inimigo usou: Atacar");
				AtacarC3(um, l);
				if(um->pv < 0)
				{
					um->pv = 0;
				}
				if(um->defesa < 0)
				{
					um->defesa = 0;
				}
				printf("\n\nDano causado: %d", l->dano);
				printf("\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
			}
			else if(di == 1)
			{
				system("cls");
				printf("Inimigo usou: Defender");
				printf("\n\nDefesa do inimigo antes: %d", l->defesa);
				DefesaC3(l);
				defi++;
				printf("\nDefesa do inimigo depois: %d", l->defesa);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
			}
			else
			{
				system("cls");
				printf("Inimigo usou: Pocao");
				printf("\n\nVida do inimigo antes: %d", l->pv);
				PocaoC3(l);
				pi++;
				printf("\nVida do inimigo depois: %d", l->pv);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
			}

			if(def > 0)
			{
				um->defesa = um->defesa/2;
				def = 0;
			}
					
			l->vf = l->pv + l->defesa;
			um->vf = um->pv + um->defesa;
			if(um->vf <= 0 || l->vf <= 0)
			{
				system("cls");
				break;
			}
			else
			{
				e = 4;
			}
			do
			{
				ArmasComp(um, h);
				system("cls");
				printf("Turno do jogador");
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", l->nome, l->pv, l->nome, l->defesa);
				printf("\n\n1- Atacar\n2- Defender\n3- Usar pocao");
				printf("\nEscolha: ");
				scanf("%d", &e);
					
				if(e == 1)
				{
					system("cls");
					printf("%s usou: Atacar", um->nome);
					AtacarCC3(um, l);
					if(l->pv < 0)
					{
						l->pv = 0;
					}
					if(l->defesa < 0)
					{
						l->defesa = 0;
					}
					printf("\n\nDano causado: %d", um->dano);
					printf("\nVida do inimigo: %d\nDefesa do inimigo: %d", l->pv, l->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
					break;
				}
				else if(e == 2)
				{
					system("cls");
					if(um->defesa <= 0)
					{
						printf("Voce nao tem como usar essa habilidade");
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &op);
						e = 1264;
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
						break;
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
						e = 1264;
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
						break;
					}
				}
				else
				{
					system("cls");
					printf("Opcao invalida\n");
					printf("Pressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
					e = 1264;
				}
			}while(e == 1264);
			
			
			if(defi > 0)
			{
				l->defesa = l->defesa/2;
				defi = 0;
			}
			l->vf = l->pv + l->defesa;
			um->vf = um->pv + um->defesa;
			if(um->vf <= 0 || l->vf <= 0)
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
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//AGILIDADE JOGADOR = INIMIGO
	else
	{
		srand(time(NULL));
		
		m = rand() % 2;
		
		if(m == 0)
		{
			do
			{
				do
				{
					ArmasComp(um, h);
					system("cls");
					printf("Turno do jogador");
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", l->nome, l->pv, l->nome, l->defesa);
					printf("\n\n1- Atacar\n2- Defender\n3- Usar pocao");
					printf("\nEscolha: ");
					scanf("%d", &e);
					
					if(e == 1)
					{
						system("cls");
						printf("%s usou: Atacar", um->nome);
						AtacarCC3(um, l);
						if(l->pv < 0)
						{
							l->pv = 0;
						}
						if(l->defesa < 0)
						{
							l->defesa = 0;
						}
						printf("\n\nDano causado: %d", um->dano);
						printf("\nVida do inimigo: %d\nDefesa do inimigo: %d", l->pv, l->defesa);
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
							e = 74;
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
							e = 74;
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
						e = 74;
					}
				}while(e == 74);
			
				if(defi > 0)
				{
					l->defesa = l->defesa/2;
					defi = 0;
				}
			
				l->vf = l->pv + l->defesa;
				um->vf = um->pv + um->defesa;
				if(um->vf <= 0 || l->vf <= 0)
				{
					system("cls");
					break;
				}
				else
				{
					system("cls");
					printf("Turno do inimigo");
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", l->nome, l->pv, l->nome, l->defesa);
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
					system("cls");
				
					di = 0;
					srand(time(NULL));
		
					di = rand() % 3;
	
					if(di == 0)
					{
						system("cls");
						printf("Inimigo usou: Atacar");
						AtacarC3(um, l);
						if(um->pv < 0)
						{
							um->pv = 0;
						}
						if(um->defesa < 0)
						{
							um->defesa = 0;
						}
						printf("\n\nDano causado: %d", l->dano);
						printf("\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &op);
					}
					else if(di == 1)
					{
						system("cls");
						printf("Inimigo usou: Defender");
						printf("\n\nDefesa do inimigo antes: %d", l->defesa);
						DefesaC3(l);
						defi++;
						printf("\nDefesa do inimigo depois: %d", l->defesa);
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &op);
					}
					else
					{
						system("cls");
						printf("Inimigo usou: Pocao");
						printf("\n\nVida do inimigo antes: %d", l->pv);
						PocaoC3(l);
						pi++;
						printf("\nVida do inimigo depois: %d", l->pv);
						printf("\n\nPressione qualquer tecla para continuar: ");
						scanf(" %c", &op);
					}
				}
					
				if(def > 0)
				{
					um->defesa = um->defesa/2;
					def = 0;
				}
				
				l->vf = l->pv + l->defesa;
				um->vf = um->pv + um->defesa;
				if(um->vf <= 0 || l->vf <= 0)
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
		else
		{
			do
			{
				printf("\n\nTurno do inimigo");
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", l->nome, l->pv, l->nome, l->defesa);
				printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
				printf("\n\nPressione qualquer tecla para continuar: ");
				scanf(" %c", &op);
				system("cls");
		
				srand(time(NULL));
			
				di = 0;
				di = rand() % 3;
			
				if(di == 0)
					{
					system("cls");
					printf("Inimigo usou: Atacar");
					AtacarC3(um, l);
					if(um->pv < 0)
					{
						um->pv = 0;
					}
					if(um->defesa < 0)
					{
						um->defesa = 0;
					}
					printf("\n\nDano causado: %d", l->dano);
					printf("\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
				else if(di == 1)
				{
					system("cls");
					printf("Inimigo usou: Defender");
					printf("\n\nDefesa do inimigo antes: %d", l->defesa);
					DefesaC3(l);
					defi++;
					printf("\nDefesa do inimigo depois: %d", l->defesa);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
				else
				{
					system("cls");
					printf("Inimigo usou: Pocao");
					printf("\n\nVida do inimigo antes: %d", l->pv);
					PocaoC3(l);
					pi++;
					printf("\nVida do inimigo depois: %d", l->pv);
					printf("\n\nPressione qualquer tecla para continuar: ");
					scanf(" %c", &op);
				}
				
				if(def > 0)
				{
					um->defesa = um->defesa/2;
					def = 0;
				}
					
				l->vf = l->pv + l->defesa;
				um->vf = um->pv + um->defesa;
				if(um->vf <= 0 || l->vf <= 0)
				{
					system("cls");
					break;
				}
				else
				{
					e = 4;
				}
			
				do
				{
					ArmasComp(um, h);
					system("cls");
					printf("Turno do jogador");
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", um->nome, um->pv, um->nome, um->defesa);
					printf("\n\nVida de %s: %d\nDefesa de %s: %d", l->nome, l->pv, l->nome, l->defesa);
					printf("\n\n1- Atacar\n2- Defender\n3- Usar pocao");
					printf("\nEscolha: ");
					scanf("%d", &e);
					
					if(e == 1)
					{
						system("cls");
						printf("%s usou: Atacar", um->nome);
						AtacarCC3(um, l);
						if(l->pv < 0)
						{
							l->pv = 0;
						}
						if(l->defesa < 0)
						{
							l->defesa = 0;
						}
						printf("\n\nDano causado: %d", um->dano);
						printf("\nVida do inimigo: %d\nDefesa do inimigo: %d", l->pv, l->defesa);
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
							e = 93;
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
							e = 93;
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
						e = 93;
					}
				}while(e == 93);
				
				if(defi > 0)
				{
					l->defesa = l->defesa/2;
					defi = 0;
				}
				l->vf = l->pv + l->defesa;
				um->vf = um->pv + um->defesa;
				if(um->vf <= 0 || l->vf <= 0)
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
	}
}

#endif
