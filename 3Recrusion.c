#include <stdio.h>
int factorial(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}
void main()
{
    int num;
    printf("enter the value:");
    scanf("%d", &num);
    printf("the factorial of %d is %d \n", num, factorial(num));
    return ;
}