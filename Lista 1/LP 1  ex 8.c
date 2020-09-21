#include <stdio.h>
int main() {
    int tab = 0;
    printf("Entre com um valor: ");
    scanf("%i", &tab);
    for (int i=0; i <= 12;i++){
        printf("%d X %d = %d\n",tab, i, tab * i);
    }
    return 0;
}

