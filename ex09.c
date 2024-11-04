#include <stdio.h>
int main() {
  int sum = 0;
  int num = 0;
  double avg = 0;
  int count = 0;

  while(1) {

    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num == -1) {
      break;
    }
    else {
    sum += num;
    count++;
    }
  }
  avg = (double) sum / count;
  printf("Average: %.1f\n", avg);
  printf("Sum: %d\n", sum);
}

