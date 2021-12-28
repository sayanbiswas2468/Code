#include<stdio.h>
void changeValue(int* address)
{
    *address=123;
}
void main()
{
    int a=12 ,b=23;
    printf("Value of a is %d\n",a);
    changeValue(&a);
    printf("value of a is %d\n",&a);
    return;
}
