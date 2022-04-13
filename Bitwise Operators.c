#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
   int a, b;
    int max1 = 0, max2 = 0, max3 = 0;
    for(a=1; a<n; a++)
    {
    for(b = a+1; b<=n; b++)
    {
        int m = a&b;
        if(m>max1 && m<k)
        max1 = m;
        int q = a|b;
        if(q>max2 && q<k)
        max2 = q;
        int p = a^b;
        if(p>max3 && p<k)
        max3 = p;  
    }
    }
    printf("%d\n",max1);
    printf("%d\n",max2);
    printf("%d\n",max3);

}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
