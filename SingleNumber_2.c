#include <stdio.h>

// bitwise XOR
// 1) A^A => 0
// 2) A^0 => A
// 3) A^B => B^A

int singleNumber(int* nums, int numsSize){
  int single_number = nums[0];
  
  for (int n1 = 1; n1 < numsSize; n1++) {
    single_number ^= nums[n1];
  }
    
  return single_number;
}

int main() {
  int input1[] = {4, 1, 2, 1, 2};
  int input2 = 5;

  printf("%d \n", singleNumber(input1, input2));

  return 0;
}