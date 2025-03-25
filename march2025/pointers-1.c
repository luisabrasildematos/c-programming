
//pointers-1.c demonstrates using pointer *p to reference string

/*
pointer refers to specific place in memory; this code
demonstrates how to create character array, copy string into it
and then access string using pointer.
*/

#include <stdio.h>
#include <string.h>

int main(){

char str[22]; //character array with 21 chars plus null terminator
char *p; //pointer to character data

strncpy(str, "coding in the dark", 21); //21 to prevent buffer overflow
str[21] = '\0'; //ensure null-termination

p = str; //assign str addres to pointer p
printf("%s\n", p); //print string using pointer

return 0;
}
