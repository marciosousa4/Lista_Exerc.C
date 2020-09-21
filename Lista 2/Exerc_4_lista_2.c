/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

# include <stdio.h>

int main (void)
{
  int n1, n2, n3;

  int triangulo(int n1, int n2, int n3);

  printf("Digite o 1° valor: ");
  scanf("%d", &n1);

  printf("Digite o 2° valor: ");
  scanf("%d", &n2);

  printf("Digite o 3° valor: ");
  scanf("%d", &n3);

  printf("O triângulo é ");
  triangulo(n1, n2, n3);
}

int triangulo(int n1, int n2, int n3)
{/*
  if (n1 == n2 && n2 == n3)
  {
    printf("EQUILÁTERO. \n");
  }
  else if (n1 == n2 || n1 == n3 || n2 == n3)
  {
    printf("ISÓSCELES. \n");
  }
  else
  {
    printf("ESCALENO. \n");
  }
*/
  (n1 == n2 && n2 == n3) 
  ?
  printf("EQUILÁTERO. \n")
  :
  (n1 == n2 || n1 == n3 || n2 == n3)
  ?
  printf("ISÓSCELES. \n")
  :
  printf("ESCALENO. \n");
}
