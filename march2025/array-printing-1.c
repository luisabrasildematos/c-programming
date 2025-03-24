
//array-printing-1.c print numbers 1 to 5 from array

/*
it demonstrates how to access and print specific elements
from an array in C; it creates array of 10 integers (0-9)
and selectively prints sequence 1 to 5.
*/

#include <stdio.h>

int main(){

int numbers[10] = {0,1,2,3,4,5,6,7,8,9};

printf("Sequence of numbers: ");
for (int i = 1; i <= 5; i++){

printf("%d", numbers[i]);
} 

printf(" \n");
return 0;
}
