#include <stdio.h>

int singleNumber(int* nums, int numsSize){
  int single_number;
  
  for (int n1 = 0; n1 < numsSize; n1++) {
    int count = 0;

    for (int n2 = 0; n2 < numsSize; n2++) {
      if (nums[n1] == nums[n2])
        count++;

      if (count == 2)
        break;
    }

    if (count == 1) {
      single_number = nums[n1];
      break;
    }
  }

  return single_number;
}

int main() {
  int input1[] = {4, 1, 2, 1, 2};
  int input2 = 5;

  printf("%d \n", singleNumber(input1, input2));

  return 0;
}
