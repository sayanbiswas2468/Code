/*#include<stdio.h>
#include<conio.h>
void main()
{
    int age , marks;  //switch statements only supports int and char 
    printf("enter the age:\n");
    scanf("%d",&age);
    printf("enter the marks:\n");
    scanf("%d",marks);
    switch (age)
    {
    case 3:
        printf("the age is 3\n");
        switch (marks)
        {
        case 4:
            printf("marks is 4\n");
            break;
        
        default:
            printf("your marks are not 4\n");
        }
         break;
    case 4:
        printf("the age is 4\n");
        switch (marks)
        {
        case 4:
            printf("marks is 4\n");
            break;
        
        default:
            printf("your marks are not 4\n");
        } 
        break;

    default:
    printf(" it is not 3, 2 or 4");
        break;
    }
    return;
    }
    */

#include <stdio.h>
void main()
{
    int i,a,b;
    
    printf("Enter the number :");   //1= Add ,2= Substract ,3= Multiply ,4 =Divide
    scanf("%d", &i);
    printf(" Enter first number \n");
    scanf("%d", &a);
    printf("Enter second number \n");
    scanf("%d", &b);
    switch (i)
    {
    case 1:
        printf("Add of no is =%d", a + b);
        break;
    case 2:
        printf("Sub of no is =%d", a - b);
        break;
    case 3:
        printf("Multiply of no is =%d", a * b);
        break;
    case 4:
        printf("Divide of no is =%d", a / b);
        break;
    default:
        printf("not possible");
    }
    return;
}