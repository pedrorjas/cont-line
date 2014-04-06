/*****************************************************************************
 *                                                                           *
 *                     ATPS Contagem de linha de arquivo                     *
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
void ccRun(char *file[],int *nLines, int *nLinesComment, int *nLinesEmpty, int *noComment, int silent)
{
FILE *pfile; //ponteiro para o arquivo

if((pfile=fopen(file,"r"))==NULL)
{
	puts("N„o foi possivel abrir o arquivo");
	exit(1);
}
char ch; 
int teste_comentario_simples=0;
while((ch=fgetc(pfile))!=EOF)

{
//contagem total de linhas no arquivo
if(ch=='\n') 
*nLines=*nLines+1;


}

*nLines=*nLines+1; // corrigir a falta de uma linha que n„o È computada 
	fclose(pfile);
	
}
