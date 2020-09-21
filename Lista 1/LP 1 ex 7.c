#include <stdio.h>
int main() {
int fat, n, num;
printf("Digite um numero:");
scanf("%d",&n);
num = n;
for(fat = 1; n > 1; n = n - 1)
    {
      fat = fat * n;
    }

    printf("O fatorial do numero %d e: %d", num, fat);
    return 0;
}
