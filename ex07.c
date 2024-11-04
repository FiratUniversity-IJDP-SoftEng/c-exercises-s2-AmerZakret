#include <stdio.h>
int main() {
  for (int i = 1; i < 11; i++) {
    for (int j = 0; j < 3; j++) {
      if (j == 0) {
        int value = i * 5;
        printf("%d  ", value);
      }
      else if (j == 1) {
        int value = 100-((i-1)*10+1);
        printf("%d  ", value);
      }
      else
      {
        printf("%d", i);
      }
    }
    printf("\n");
  }

}

