#include "functions.h"



int VerificaCarac(char * str){
    int i, ops = 0;
   
    for(i=0; i < strlen(str); i++){
        //printf("%c", str[i]);
        if( ( (int)str[i] >= 0 && (int)str[i] <= 64 ) || ( (int)str[i] >= 91 && str[i] <= 96 ) || ( (int)str[i] >= 123) ){
            ops = 1;
            break;
        }
    }
    if(ops == 1) return 1;
    else return 0;
}


char** CriaDialogo(int tam, char **dialogo){
    int j;

    dialogo = calloc(tam, sizeof(char*));
    for(j=0;j<tam;j++) dialogo[j] = calloc(1000, sizeof(char));

    return dialogo;
}

void LimpaDialogo(int tam, char **dialogo){
    int j;

    for(j=0;j<tam;j++) free(dialogo[j]);
    free(dialogo);
}

void ArvoreDecisao4(char **dialogo){
    int i, d;
    i = d = 1;

    while(i != 0){
        printf("%s\n", dialogo[i]);
        if(i == 2 || i == 3) break;
        scanf("%d", &d);
        system("cls");

        switch (d){
        case 1:
        i = i*2;
        break;

        case 2:
        i = i*2 + 1;
        break;
        
        default: //diff de 1 ou 2
        printf("Lembre-se que ha apenas a opcao 1 e 2\n");
        //scanf("%d", &d);
        break;
        }   
    }   
}

void ArvoreDecisao8(char **dialogo){
    int i, d;
    i = d = 1;

    while(i != 0){
        printf("%s\n", dialogo[i]);
        if(i == 4 || i == 5 || i == 6 || i == 7) break;
        scanf("%d", &d);
        system("cls");

        switch (d){
        case 1:
        i = i*2;
        break;

        case 2:
        i = i*2 + 1;
        break;
        
        default: //diff de 1 ou 2
        printf("Lembre-se que ha apenas a opcao 1 e 2\n");
        //scanf("%d", &d);
        break;
        }   
    }   
}

void ImprimeCreditos(){
    printf("\n\n\n");

    printf("          THE END\nObrigado(a) por jogar The Bird.\n");

    printf("\n\n      CREDITOS FINAIS    \n\n");
    printf("\nOferecimento(){ \n");
        printf("  Universidade Federal de Goias(UFG);\n");
        printf("}\n");


    printf("\nDevelopers(){ \n");
        printf("  Mariana \"Mari\" Santos;\n");
        printf("  Gabriel \"Gabs\" Lopes;\n");
        printf("}\n");

    printf("\nDesenvolvedores da historia(){ \n");
        printf("  Mariana \"Mari\" Santos;\n");
        printf("  Gabriel \"Gabs\" Lopes;\n");
        printf("}\n");

    printf("\nDiretores(){ \n");
        printf("  Mariana \"Mari\" Santos;\n");
        printf("  Gabriel \"Gabs\" Lopes;\n");
        printf("}\n");

    printf("\nEfeitos Sonoros(){ \n");
        printf("  Calma, isso nao deveria estar aqui;\n  return -1;\n");
        printf("}\n");

    printf("\nAgradecimentos Especiais(){ \n");
        printf("  Prof. Gustavo Teodoro Laureano;\n");
        printf("  Arnaldo \"Pai da Mari\" Santos;\n");
        printf("  Silene \"Mae da Mari\" Santos;\n");
        printf("  Arthur \"Paraiba\" Ximenes;\n");
        printf("  Tallya \"tlly\" Jesus;\n");
        printf("  Vitor \"Troloze\" Di Lorenzzi;\n");
        printf("  Gabriel \"Amyr\" Freitas;\n");
        printf("  Luigi \"Brav0k\" Gontijo;\n");
        printf("  Marcelo \"Irmao do Luigi\" Gontijo;\n");
        printf("  Joao Pedro \"Jao\" Silva;\n");
        
        printf("}\n");

        printf("\n2020-2021\n");

    printf("\nsystem(\"The End\");\nreturn 0;\n\n");
}

int SalvaJogo(int posicao){

    FILE *s;
    s = fopen("jogo_salvo", "w");
    fprintf(s, "%d\n", posicao);
    printf("O jogo foi salvo\n");
    getch();
    fclose(s);

    return posicao;    
}

int SalvaJogo2(int posicao, char* nomepassaro, char* nomepessoa){

    FILE *s;
    s = fopen("jogo_salvo", "w");
    fprintf(s, "%d\n", posicao);
    fprintf(s, "%s\n", nomepassaro);
    fprintf(s, "%s\n", nomepessoa);
    printf("O jogo foi salvo\n");
    getch();
    fclose(s);

    return posicao;    
}

void carregapassaro(char* nomepassaro, char* nomeprotag){
    FILE *s;
    s = fopen("jogo_salvo", "r");
    fscanf(s, "\n %*c %[^\n]", nomepassaro);
    fscanf(s, "%*c %[^\n]", nomeprotag);
    fclose(s);
}