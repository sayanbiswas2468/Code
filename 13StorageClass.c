#include <stdio.h>
#include <stdlib.h>

//**********use of extern
int func(int a, int b)
{
    extern int sum; //sum ki value global variable se le li extern ne
    //sum=a+b;
    return sum;
}
int sum = 100;
void main()
{
    int sum = func(3,5);
    printf("The sum is %d", sum);
    return;
}
//************* use of static variable
/*{
    static int sum;// static variable start from 0
    sum++;
    printf("%d\n",sum);
    
    return sum;
}
void main()
{
    int sum=func(2,3);
    sum=func(2,3);
    sum=func(2,3);
    sum=func(2,3);
    sum=func(2,3);

    
    return;
}*/