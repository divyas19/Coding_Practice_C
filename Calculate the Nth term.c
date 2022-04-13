#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  int s;
  
  if(n==1)
  return 1;
  if (n==2)
  return 2;
  if (n==3)
  return 3;
  s = find_nth_term(n-1,a,b,c) + find_nth_term(n-2,a,b,c) + find_nth_term(n-3,a,b,c);
  return s;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
