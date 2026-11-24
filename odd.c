#include "stdio.h"

void main() {
    int zoe;
    int dumaog;
    printf("input a number: ");
    scanf("%d", &zoe);
    dumaog = zoe;
    while(zoe>=1){
        
        zoe = zoe - 2;
    }

    if(zoe==0){
    printf("the number %d is even", dumaog);
    }else{
    printf("the number %d is odd", dumaog);
    }
}




















