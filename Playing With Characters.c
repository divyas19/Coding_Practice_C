#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char c, s[100], sen[100];   
    scanf("%c %s",&c,&s);
    scanf("\n");
    scanf("%[^\n]%*c", &sen);
    printf("%c \n%s \n%s", c, s, sen);
    return 0;
}
