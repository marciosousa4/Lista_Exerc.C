#include <stdio.h>

int main(){
    int a, b, c;
    printf("Digite três números:");
    scanf(" %d %d %d", &a, &b, &c);
    if (a > c) {
        int valorM = c;
        c = a;
        a = valorM;
    }
    if (a > b) {
        int valorM = b;
        b = a;
        a = valorM;
    }
    if (b > c) {
        int valorM = c;
        c = b;
        b = valorM;
    }
    printf("%d %d %d", a, b, c);
}
