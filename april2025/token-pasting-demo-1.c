
/*token pasting is one of the more powerful and
sometimes mysterious features of C preprocessing.
it enables metaprogramming techniques where you
can generate new code structures programmatically
during compilation.*/

//using concat function with ## preprocessor op

#include <stdio.h>
#define CONCAT(x, y) x ## y

int main()
{
int x = 5;
int y = 7;

int CONCAT(x, y) = 12;

printf("x = %d, y = %d, xy = %d\n", x, y, xy);
return 0;
}
