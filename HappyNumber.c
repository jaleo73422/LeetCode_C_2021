#include <stdio.h>

// Happy number: 1, 7, 10, 13, 19, 23, 28, 31, 32, 44, 49, 68, 70, 79, 82, 86, 91, 94, 97, 100
// Unhappy cycle: 4 => 16 => 37 => 58 => 89 => 145 => 42 => 20 => 4

bool isHappy(int n){
  int isHappyNumber = 1;

  while (n != 1) {
    int tem = 0;

    if (n == 4 || n == 16 || n == 20 || n == 37 || n == 42 || n == 58 || n == 89 || n == 145) {
      isHappyNumber = 0;
      break;
    }

    while (n / 10 != 0) {
      tem += (n % 10) * (n % 10);
      n = n / 10;
    }

    tem += n * n;
    n = tem;
  }

  return isHappyNumber == 1;
}

int main() {
  printf("%d \n", isHappy(32));
  printf("%d \n", isHappy(99));
  printf("%d \n", isHappy(7));

  return 0;
}