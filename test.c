#include <stdio.h>

int main()
{
    int arr[] = { 1, 2, 3, 5, 6 };

    int n1 = 0;
    int n2 = 0;
    int i = 0;

    n1 = arr[0];

    for (i = 1; i < 4; i++)
        n1 = n1 ^ arr[i];
    for (i = 2, n2 = 1; i <= 5; i++)
        n2 = n2 ^ i;
    n2 = n2 ^ n1;

    printf("Missing element in array is: %d\n", n2);

    return 0;
}