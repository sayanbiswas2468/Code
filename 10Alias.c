// typedef <previous name> <alias name> 
#include<stdio.h>
#include<string.h>

typedef struct student  
{
    int marks;
    char name[23];
    int num;
    int day;
} hi;

void main()
{   
    hi sayan,biswas;
    {
        
        sayan.marks=1;
        sayan.day=5;
        sayan.num=2;
        strcpy(sayan.name,"Hello world");
    };
    printf("%d",sayan.name);                            
    
    return;
}
