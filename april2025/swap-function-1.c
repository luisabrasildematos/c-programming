
// swap-function-1.c demonstrates the function swap in c

/* declares two integer objects with initial values and
defines swap function to exchange those values*/

#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y){

int temp = *x;
*x = *y;
*y = temp; //three step way using temp temporary variable
}

int main(){

int x = 11, y = 22;
swap(&x, &y);
printf("the value of x is now %d and the value of y is now %d", x, y);

return EXIT_SUCCESS;
}
