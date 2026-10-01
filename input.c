#include <stdio.h>

int main() {
    char name[10] = "";
    printf("name: ");
    scanf("%s", name);

    printf("oh, hey there %s", name);

    return 0;
}