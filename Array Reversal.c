#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, a[1000], i;
    int b[1000],k,j;
    scanf("%d", &num);
    
    for(i = 0; i < num; i++) {
        scanf("%d", &a[i]);
    }


    /* Write the logic to reverse the array. */
    for(j= num-1,k=0;j>=0,k<=num-1;j--,k++)
    {
        b[k] = a[j];
        
    }

    for(i = 0; i < num; i++)
        printf("%d ",b[i]);
    return 0;
}
