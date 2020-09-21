/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main(void) 
{
    int fat(int num);

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("Fatorial de %d: %d \n", num, fat(num));

    return 0;
}

int fat(int num)
{
    if (num == 0)
    { 
        return 1;
    }
    else 
    {
        return num * fat(num - 1);
    }
}
