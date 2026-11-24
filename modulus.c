#include "stdio.h"

void main() {
    int zoe;
    int dumaog;
    printf("input a number: ");
    scanf("%d", &zoe);
    dumaog = zoe;
    
    if(zoe%2==0){
    printf("the number %d is even", dumaog);
    }else{
    printf("the number %d is odd", dumaog);
    }
}