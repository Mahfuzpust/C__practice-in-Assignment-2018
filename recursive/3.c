#include <stdio.h>

int sum (int a);

int main()
{
    int num, result;

    printf("Enter the number: ");
    scanf("%d", &num);
    result = sum(num);
    printf("Sum of digit is: %d\n", result);
    return 0;
}

int sum (int num)
{
    if (num != 0)
    {
        return num+sum(num-1);
       return (num % 10 + sum (num / 10));
       //return (num%10);
    }
    else
    {
       return 0;
    }
}
