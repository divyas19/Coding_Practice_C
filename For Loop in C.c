#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    if(a <= 1 && a <= b)
     printf("one\n");
    if (a <= 2 && 2 <= b)
     printf("two\n");
    if (a <= 3 && 3 <= b)
     printf("three\n");
    if (a <= 4 && 4 <= b)
     printf("four\n");
    if (a <= 5 && 5 <= b)
     printf("five\n");
    if (a <= 6 && 6 <= b)
     printf("six\n");
    if (a <= 7 && 7 <= b)
     printf("seven\n");
    if (a <= 8 && 8 <= b)
     printf("eight\n");
    if(a <= 9 && 9 <= b)
     printf("nine\n");
    
     if(b>=10)
     {
     for(int c = 10; c<= b; c++)
     {
     if(c%2 == 0)
     printf("even\n");
     else
     printf("odd\n");
     }
     }
     
    return 0;
}

