#include <stdio.h>

// double index
// Cycle finding: Floyd's Algorithm (Tortoise and Hare Algorithm)
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

bool isHappy(int n){
  int slow = n;
  int fast = n; 

  do {
    slow = next_n(slow);
    fast = next_n(next_n(fast));
  } while (slow != fast);

  return slow == 1;
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