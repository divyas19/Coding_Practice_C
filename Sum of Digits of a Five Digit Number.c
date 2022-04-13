#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n); 
    //Complete the code to calculate the sum of the five digits on n.
    int a = n%10000; 
    int b = n%1000;  
    int c = n%100; 
    int d = n%10; 
    int e = c/10;
    int f = b/100;
    int g = a/1000;
    int h = n/10000;
    
    int sum = d+e+f+g+h;
    printf("%d",sum);

    return 0;
}
