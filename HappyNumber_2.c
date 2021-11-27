#include <stdio.h>

bool isHappy(int n){
  int isHappyNumber = 1;
  int history[20];
  int size = 1;
  int contain = 1;

  history[0] = n;

  while (n != 1) {
    int tem = 0;

    while (n / 10 != 0) {
      tem += (n % 10) * (n % 10);
      n /= 10;
    }

    tem += n * n;
    n = tem;

    for (int n1 = 0; n1 < size; n1++) {
      if (n == history[n1]) {
        isHappyNumber = 0;
        n = 1;
        break;
      }

      if (n1 == size - 1) {
        contain = 0;
      }
    }
    
    if (contain == 0) {
      history[size] = n;
      contain = 1;
      size++;
    }
  }

  return isHappyNumber == 1;
}

int main() {
  printf("%d \n", isHappy(16)); // 0
  printf("%d \n", isHappy(80)); // 0

  printf("%d \n", isHappy(1)); // 1
  printf("%d \n", isHappy(7)); // 1
  printf("%d \n", isHappy(32)); // 1
  printf("%d \n", isHappy(44)); // 1

  return 0;
}