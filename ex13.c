#include <stdio.h>
long long factorialFunc(num) {
  for (int i = 1; i <= num; i++) {

    if (num == 0) {
      printf("The factorial of 0 is 1.");
      return 1;
    }
    else {
      return num * factorialFunc(num - 1);
    }
  }
}

int main(){
  int num;
  long long factorial = 1;

  do {
    printf("Please enter a number (less than 50):");
    scanf("%d", &num);

    if (num >= 50 || num <= 0) {
        printf("Invalid number\n");
    }
    
  } while (num >= 50 || num <= 0);

  printf("The factorial of the number is %llu\n", factorialFunc(num));
}

