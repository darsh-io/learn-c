#include <stdio.h>
#include <stdbool.h>

int main() {
    int num1 = 6;
    int num2 = 67;
    int num3 = 678;

    float price1 = 5.99;
    float price2 = 19.99;
    float price3 = 899.99;
    float price4 = -1299.99;

    // %d madness!
    printf("%02d\n", num1);
    printf("%02d\n", num2);
    printf("%02d\n", num3);

    printf("%+d\n", num1);
    printf("%+d\n", -6);
    
    printf("\n\n");

    // %f madness!
    printf("%+8.2f\n", price1);
    printf("%+8.2f\n", price2);
    printf("%+8.2f\n", price3);
    printf("%+8.2f\n", price4);
}