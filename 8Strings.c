#include<stdio.h>
void main()
{
    char str[2];
    gets(str); //gets function is used to get the input from the user as string
    printf("The string is %s",str);
    //puts(str);                        \\we can use puts or gets to take input from user
    //printf("Using the puts function %s\n",str);
    return;
}