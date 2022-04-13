#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.

  if(gender == 'b')
  {
      int sumb=0;
  for(int i = 0;i<number_of_students;i=i+2)
  sumb = sumb + *(marks+i);
  return sumb;
  
  }
  else
  {
      int sumg=0;
  for(int j = 1;j<number_of_students;j=j+2)
  sumg = sumg + *(marks+j);
  return sumg;
  }
  
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}
