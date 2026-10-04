#include <stdio.h>

int main() {
    char name[10] = "";
    printf("name: ");
    scanf("%s", name);
    float gpa;
    printf("oh, hey there %p\n", name);
    printf("btw what's ur gpa: ");
    scanf("%f", &gpa);

    return 0;
}