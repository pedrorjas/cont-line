/*****************************************************************************
 *                                                                           *
 *           Segunda Etapa  ATPS Contagem de linha                           *
 *                                                                           *
 * File:  MainCodeCount.c                                                    *
 *                                                                           *
 * Contains: Main implementation.                                            *
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


#include "LibCodeCount.h"
#include "LibCodeCount.c"

int main(int argc, char *argv[])
{
int total_de_linhas =0, linhas_comentadas=0, linhas_vazias=0, linhas_sem_comentarios=0, Silencio=0;
int i, silent, help, comment;
int nLines, nLinesComment, nLinesEmpty, count;
silent =0;
help=0;
comment=0;
nLines =0;

for (i=2; i<argc; i++)
{
	
	silent = silent || (strstr(argv[i], "-silent")!= NULL);
	silent = silent || (strstr(argv[i], "-s")!= NULL);
	help = help || (strstr(argv[i], "-help")!= NULL);
	help = help || (strstr(argv[i], "-h")!= NULL);
	comment = comment || (strstr(argv[i], "-comment")!= NULL);
	comment = comment || (strstr(argv[i], "-c")!= NULL);
	
	
}
if(help)
{
	
	printf("\t\t *****Voc\210 est· solicitando ajuda!!!*****\n\n\n");
	printf("\t\t Temos duas opÁoes no console\n\n");
	printf("\t\t Para mostrar as informaÁıes digitar o seguinte comando:\n");
	printf("\t\t MainCodeCount arquivo.txt -c\n");
	printf("\t\t Outra op\207\260o È o silent que ir· mostrar a vers„o do nosso programa\n\n");
	printf("\t\t MainCodeCount arquivo.txt -s\n");
	
}


if(silent)
{
	
	printf("O arquivo a ser a analisado È o \"%s\"...\n",argv[1]);
	printf("vocÍ escolheu a opÁ„o silent\n");
}

if(comment)
{

//contagem total de linhas comentadas simples
ccCommentsimple(argv[1], &total_de_linhas, &linhas_comentadas, &linhas_vazias, &linhas_sem_comentarios, Silencio);

//contagem total de linahs comentadas multiplas
ccCommentmulti(argv[1], &total_de_linhas, &linhas_comentadas, &linhas_vazias, &linhas_sem_comentarios, Silencio);


printf("Contador de Linha - Ferramenta de programador\n");
printf("Vers„o 2.0 - 2014 - FAC2 Anhanguera TADS\n\n\n");

printf("total de linhas comentadas = %d\n",linhas_comentadas);

}


return 0;


}
