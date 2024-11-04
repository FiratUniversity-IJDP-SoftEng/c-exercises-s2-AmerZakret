#include <stdio.h>
int main() {

int array1[17];
int lenght = 0;

for(int i = 100; i >= 50; i--) {
  if (i % 3 == 0) {
    array1[lenght++] = i;
  }
}

for(int i = 0; i < lenght; i++) {
  printf("%d ,", array1[i]);

}
}

