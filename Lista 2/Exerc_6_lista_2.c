/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main(void) 
{
    int n1, n2;

    printf("Base = ");
    scanf("%d", &n1);

    printf("Expoente = ");
    scanf("%d", &n2);

    printf("Resultado = %d \n", potenciacao(n1, n2));
}

int potenciacao(int n1, int n2)
{
    if (n2 == 0)
    {
        return 1;
    }
    else
    {
        return n1 * potenciacao(n1, n2 - 1);
    }
}
