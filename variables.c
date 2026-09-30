#include <stdio.h>
#include <stdbool.h>

int main() {

    // an integer!
    int anInt = 6;

    printf("see! i know how to do f strings (like in python) in C AS WELL!! the integer i made 2 lines ago: %d", anInt);

    float myGPA = 4.47;
    // yes very bad gpa i know :<

    printf("\nWHATS YOUR G-P-A, WHATS YOUR G-P-A?!\nme: %f", myGPA);

    // apparently c like 6dp as a default for %f (floats)... ok
    // BUT! to override this, just add a %.xf where x is the dp

    printf("\nor, in 1 decimal place, its %.1f", myGPA);

    // wait hang on what if i do a %f BUT it i put an integer

    printf("\nhaha i shall print an integer using f instead of d: %f%d\n", anInt, myGPA);
    // ah ok so it'll just say 0.000000 sigh... 

    // double gives more precision.

    double pi = 3.14159265358979323;

    char grade = 'A';

    printf("lolz my grade? its a(n) %c!\n", grade);

    char acharacter = '%';

    printf("lets see, can printf print a unicode char: %c\n", acharacter);


    printf("The value of pi is akshually %.15lf\n", pi);

    char name[] = "darsh-io";

    printf("hey there, %s!\n", name);

    bool imcool = true;

    if (imcool) {
        printf("it would seem as though this this person IS cool... to prove it: %d\n", imcool);
    }
    else {
        printf("ur not cool. see! %d\n", imcool);
    }
    return 0;
}