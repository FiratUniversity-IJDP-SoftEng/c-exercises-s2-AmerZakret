#include <stdio.h>
int main() {
  int value;

  for (int i = 1; i < 11; i++) {
    for(int j = 1; j < 11; j++) {
      value = i * j;
      printf("%d ", value);
    }
    printf("\n");
  }
}

