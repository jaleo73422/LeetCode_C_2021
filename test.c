#include <stdio.h>

int main() {
  int a[] = {7};

  a[1] = 3;

  printf("%d %d \n", a[0], a[1]);

  return 0;
}