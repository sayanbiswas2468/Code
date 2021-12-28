#include<stdio.h>
#include<stdlib.h>
void main()
{
    printf("The date is %s\n",__DATE__);
    printf("The time is %s\n",__TIME__);
    printf("The file location is %s\n",__FILE__);
    return;
}