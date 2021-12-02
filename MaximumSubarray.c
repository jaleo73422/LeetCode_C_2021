#include <stdio.h>

// TLE
int maxSubArray(int* nums, int numsSize) {
  int max = nums[0];

  for (int n1 = 0; n1 < numsSize; n1++) {
    int sum = 0;

    for (int n2 = n1; n2 < numsSize; n2++) {
      sum += nums[n2];

      if (sum > max) {
        max = sum;
      }
    }
  }

  return max;
}

int main() {
  int a1[9] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

  printf("[-2, 1, -3, 4, -1, 2, 1, -5, 4] \n");
  printf("%d \n", maxSubArray(a1, sizeof(a1) / sizeof(a1[0]))); // 6
  
  return 0;
}