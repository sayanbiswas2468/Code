//Do loop
/*#include <stdio.h>
void main()
{
    int i;
    printf("Enter a number:");
    scanf("%d", &i);

    do // executes atlest 1 time no matter what is the condition
    {
        
        i = i + 1;
        printf("i=%d\n", i);
    } while (i<0);
    return;
}
*/


//While loop
/*#include<stdio.h>
void main()
{
    int i;
    printf("Enter the value :");
    scanf("%d",&i);
    while (i<33)
    {
        printf("i=%d\n",i);
        i=i+1;
    }
    return;
}
*/



// For loop
#include<stdio.h>
void main()
{
    int i,j;
    for (i = 0,j=5; i < 10; i++,j++) 
    {
        printf("%d  %d\n",i,j);
        
    }
    return;
}