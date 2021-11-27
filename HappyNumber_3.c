#include <stdio.h>
#include <limits.h>

int next_n(int n) {
  int tem = 0;

  while (n / 10 != 0) {
    tem += (n %10) * (n % 10);
    n /= 10;
  }

  tem += n * n;
  n = tem;
  
  return n;
}

bool contain(int* history, int size, int n) {
  for (int n1 = 0; n1 < size; n1++) {
    if (history[n1] == n)
      return true;
  }

  return false;
}

bool isHappy(int n){
  // digit of INT_MAX is 10
  // n max = INT_MAX < 9,999,999,999
  // next_n < 9 * 9 * 10 = 810
  int history[810];
  int size = 1;

  history[0] = n;

  n = next_n(n);

  while (!contain(history, size, n)) {
    history[size] = n;
    size++;

    n = next_n(n);
  }

  return n == 1;
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