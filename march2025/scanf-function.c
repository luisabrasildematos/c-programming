
// scanf-function.c interacts with user

/* receive an input from user and locate it in memory
and print output according to user input*/

#include <stdio.h>
#include <stdlib.h>

int main(){

int age = 0;
printf("Type your age: ");
scanf("%d", &age);

if (age >= 21){
printf("Adult.");
}
else {
printf("Minor");
} 
}

//to do still: add an age limit. can not accept ages higher than 130 e.g.


