#include "stdio.h"

void main() {
    int zoe;
    float dumaog;

    printf("Enter two numbers: (int float) ");
    scanf("%i %f" , &zoe, &dumaog);

    if (zoe == 0)  printf("%i is neutral.\n", zoe);
    else if (zoe < 0) printf("%i is negative.\n", zoe);
    else printf("%i is positive.\n", zoe);

        if (dumaog == 0)   printf("%f is neutral.\n", dumaog);
    else if (dumaog < 0) printf("%f is negative.\n", dumaog);
    else printf("%f is positive.\n", dumaog);
}
        