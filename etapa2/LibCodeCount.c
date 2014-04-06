/*****************************************************************************
 *                                                                           *
 *           Segunda Etapa  ATPS Contagem de linha                           *
 *                                                                           *
 * File:  LibCodeCount.c                                                     *
 *                                                                           *
 * Contains: ++ implementation.                                              *
 *                                                                           *
 * Authors:                                                                  *
 *                                                                           *
 *                                                                           *
 *    Joji Shimada                <joji.shimada@aedu.com>     RA 7307549976  *
 *    Pedro Henrique dos Santos   <pedrorjas@aedu.com>        RA 6579326827  *
 *    Willian Silva de Barros     <willian.barros@aedu.com>   RA 6946444729  *
 *    Fabiano Edson da Silva      <fabianosilva5@aedu.com>    RA 7119497899  *
 *                                                                           *
 *                     PROGRAMA√á√ÉO ESTRUTURADA II - FAC II                 *
 *                                                                           *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void ccCommentsimple(char *file[], int *nLines, int *nLinesComment, int *nLinesEmpty, int *noComment, int silent)
{
	FILE *pfile; //ponteiro para o arquivo

if((pfile=fopen(file,"r"))==NULL)
{
	puts("N„o foi possivel abrir o arquivo");
	exit(1);
}
char ch; 
char str[81];
int i, j, t;
int teste_comentario_simples=0;	
int teste2_comentario_simples=0;
	while(fgets(str,80,pfile) != NULL) /* LÍ uma linha de texto */
		{
		for(i=0;str[i];i++); //total de caracter da linha
		
		for(j=0;i>=j;j++)
		{
		
		if(str[j]=='/' && teste_comentario_simples==1)
			
		{
				
		teste_comentario_simples=0;
		
		if(j==1)
		
		
		*nLinesComment=*nLinesComment+1;
		else
		{
		
		for(t=0;j-2>=t;t++)
		{
		if(str[t]==' '|| str[t]=='\t') 
		;
		else
		teste2_comentario_simples=1;
		}
		
		if(teste2_comentario_simples==0)
		*nLinesComment=*nLinesComment+1;
			
		}
			
		}
		
		
		
		if(str[j]!='/') 
		teste_comentario_simples=0;
		else
		teste_comentario_simples=1;
		}
	
		}
	



	
	
	fclose(pfile);	
	
}



void ccCommentmulti(char *file[], int *nLines, int *nLinesComment, int *nLinesEmpty, int *noComment, int silent)

{
	
	FILE *pfile; //ponteiro para o arquivo

if((pfile=fopen(file,"r"))==NULL)
{
	puts("N„o foi possivel abrir o arquivo");
	exit(1);
}
char str[81];
char ch; 
int i, j, t;
int linha=1;
int total_linha_comentario=0;
int achou_linha_inicio=0;
int achou_linha_fim=0;
int teste_comentario_multiplo=0;
int achou_comentario_multiplo=0;	
int contagem_comentario_multiplo=0;
	while(fgets(str,80,pfile) != NULL) /* LÍ uma linha de texto */
		{
			
		for(i=0;str[i];i++); //total de caracter da linha
			
		//procura o /*
		for(j=0;i>=j;j++)
		{
		
		if(str[j]=='/' && str[j+1]=='*')
		
		{
	
		//total_linha_comentario;
		achou_linha_inicio=linha;
		//teste_comentario_multiplo=0;
		//contagem_comentario_multiplo=contagem_comentario_multiplo+1;
		}

		if(str[j]=='*' && str[j+1]=='/')
		{
		
		achou_linha_fim=linha;
		total_linha_comentario=achou_linha_fim+1-achou_linha_inicio;
		*nLinesComment=*nLinesComment+total_linha_comentario;
		}
		/*
		if(str[j]!='/' && achou_comentario_multimplo=0) 
		teste_comentario_multiplo=0;
		else
		teste_comentario_multiplo=1;
		*/
		
		}
		linha=linha+1;
		}
	
	
	
	
	fclose(pfile);
	
}



