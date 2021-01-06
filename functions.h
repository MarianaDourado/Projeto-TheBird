#ifndef _FUNCTIONS_
#define _FUNCTIONS_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h> //idioma
#include <conio.h> //getch

int VerificaCarac(char * str);

void ImprimeCreditos(void);

char** CriaDialogo(int tam, char **dialogo);
void LimpaDialogo(int tam, char **dialogo);

void ArvoreDecisao4(char **dialogo);
void ArvoreDecisao8(char **dialogo);

int SalvaJogo(int posicao);
int SalvaJogo2(int posicao, char* nomepassaro, char* nomepessoa);

void carregapassaro(char* nomepassaro, char* nomeprotag);

#endif