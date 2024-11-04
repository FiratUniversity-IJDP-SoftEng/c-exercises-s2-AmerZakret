#include <stdio.h>
int main() {
  int num;
  long long factorial = 1;

  do {
    printf("Please enter a number (less than 50):");
    scanf("%d", &num);

    if (num >= 50 || num <= 0) {
        printf("Invalid number\n");
    }
    
  }
  while (num >= 50 || num <= 0);

  for(int i = 1; i <= num; i++) {
    factorial *= i;
  }

  printf("The factorial of the number is %llu\n", factorial);
}

