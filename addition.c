#include <stdio.h>

int main()
{
    printf("Name: Rohan k Chiranjivi\n");
    printf("USN: 1JS25CI068\n");
    printf("Program: Simple Addition of Two Numbers\n");
    printf("----------------------------------------\n");

    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    printf("Sum = %d\n", sum);

    return 0;
}
