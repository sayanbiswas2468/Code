#include<stdio.h>
#include<string.h>

struct student  //used to store info
{
    int marks;
    char name[23];
    int num;
    int day;
} ;

void main()
{   
    struct student sayan,biswas;
    {
        
        sayan.marks=1;
        sayan.day=5;
        sayan.num=2;
        strcpy(sayan.name,"Hello world");
    };
    printf("%s",sayan.name);                            
    
    return;
}