/*****************************************************************************
 *                                                                           *
 *                            ATPS Contagem de linha                         *
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
 *                     PROGRAMAÇÃO ESTRUTURADA II - FAC II                 *
 *                                                                           *
 ****************************************************************************/


#include "LibCodeCount.h"
#include "LibCodeCount.c"

int main(int argc, char *argv[])
{
int total_de_linhas =0, linhas_comentadas=0, linhas_vazias=0, linhas_sem_comentarios=0, Silencio=0;

ccRun(argv[1], &total_de_linhas, &linhas_comentadas, &linhas_vazias, &linhas_sem_comentarios, Silencio);

printf("total de linhas = %d\n",total_de_linhas);


return 0;


}
