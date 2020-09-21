#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
     int num, linha, coluna, matriz[4][4];

     srand (time(NULL));
     for (linha=0;linha < 4; linha++)
       for (coluna=0;coluna <4; coluna++)
       {

         num=( rand() % 21);
         matriz[linha][coluna]=num;
         }


     for (linha=0;linha < 4; linha++)
     {
       for (coluna=0;coluna <4; coluna++)
           printf ("%d ",matriz[linha][coluna]);
        printf ("\n");
      }

     printf (" Informe uma linha :");
     scanf ("%d",&linha);
     linha--;
     for (coluna=0;coluna <4; coluna++)
           printf ("%d ",matriz[linha][coluna]);
     getch();
}
