#include <stdio.h>

int exponent(int base, int indice) {
    if (indice == 0) {
        return 1;
    }
    if (indice == 1) {
        return base;
    }

    return base * exponent(base, indice-1);
}

int main() {
    int x = 5;
    int y = 10;
    int z = 3;
    int a = 2;

    float b = (float)a / z;

    printf("%.2f\n", b);

    printf("OMG I MADE A POWER FUNCTION!!!!!!! WATCH: 2 ^ 3 = %d", exponent(2, 3));
    return 0;
}