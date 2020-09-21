/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

# include <stdio.h>

int n1, n2;

int main(void)
{
    int ler(void);
    int multiplicar(int n1, int n2);
    int imprimir(int num);

    ler();
    imprimir(multiplicar(n1, n2));

    return 0;
}

int ler(void)
{
    printf("1° valor: ");
    scanf("%d", &n1);

    printf("2° valor: ");
    scanf("%d", &n2);

    return n1, n2;
}

int multiplicar(int n1, int n2)
{
    return n1 * n2;
}

int imprimir(int num)
{
    printf("Resultado = %d\n", num);

    return 0;
}
