/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int somaprimo (int A);
int primo (int B);

int A;
int B;

int somaprimo (int A)
{
    int contagem = 1;
    int soma = 2;
    printf ("A soma eh 2");
    int teste = 3;
    while (contagem < A)
    {
        if (primo (teste))
        {
            soma = soma + teste;
            printf (" + %d", teste);
            contagem++;
        }
        teste++;
    }
    printf (" = %d", soma);
    return soma;
}

int primo (int B)
{
    int cont;
    int cond = 0;
    for (cont = 1; cont <= B; cont++)
        if (B % cont == 0)
            cond++;
    if (cond == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

main ()
{   
    int contagem = 1;
    int soma;
    printf ("Insira o valor: ");
    scanf ("%d", &A);
    if (A <= 0)
        printf ("Número inválido");
    else if (A == 1)
        printf ("Apenas 2 eh numero primo");
    else
        somaprimo (A);
    printf ("\n");
    system("pause");
}
