/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

# include <stdio.h>

int main(void)
{
    int num;
    
    int primo(int num);

    printf("Digite um número: ");
    scanf("%d", &num);

    (primo(num) == 1) ? 
    printf("\nPor isso o número %d É PRIMO.", num) : 
    printf("\nPor isso o número %d NÃO É PRIMO.", num);

    printf("\n");

    return 0;
}

int primo(int num)
{
    int qtd_num_primo = 0;

    printf("Números divisores de %d: ", num);

    for (int count = 1; count <= num; count ++)
    {
        (num % count == 0) 
        ? 
        qtd_num_primo ++,
        printf("%d ", count) 
        : 
        printf("");
    }

    return (qtd_num_primo == 2) ? 1 : 2;
/*
    for (count = 1; count <= num; count ++)
    {
        if (num % count == 0)
        {
            qtd_num_primo += 1;
            printf("%d ", count);
        }
    }
    if (qtd_num_primo == 2)
    {
        printf("\nPor isso o número %d É PRIMO.", num);
    }
    else 
    {
        printf("\nPor isso o número %d NÃO É PRIMO.", num);
    }*/
}