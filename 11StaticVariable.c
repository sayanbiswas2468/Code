#include<stdio.h>
int func(int a)
{
    static int hi=98;
    printf("The value %d\n",hi);
    hi++;
    return a+hi;

}
void main()
{
    int b=12;
    int val = func(b);
    val = func(b);
    val = func(b);
    return;
}