#include<stdio.h>
void main()
{
    int a=20;
    int *ptra =&a;
    printf("The address of a is %p\n",&a);
    printf("The address of a is %p\n",ptra);
    printf("The value of a is %d\n",*ptra);
    return;
}
