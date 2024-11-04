#include <stdio.h>
int main() {
  int num;
  int nums[10];
  int sum;
  int avg;

  for (int i = 0; i < 10; i++) {
    
  printf("Please enter a number: ");
  scanf("%d", &num);

  nums[i] = num;
  sum += num;
  
  }
  avg = sum / 10;

  printf("The numbers you entered are: ");
  for (int i = 0; i < 10; i++) {
    printf("%d ", nums[i]);
  }
  printf("\nThe sum of the numbers is: %d\n", sum);
  printf("The average of the numbers is: %d\n", avg);



}

