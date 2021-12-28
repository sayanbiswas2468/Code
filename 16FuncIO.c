/*      r: opens a file for reading.
        w: opens a file for writing. It can also create a new file.
        a: opens a file for appending.
        r+: opens a file for both reading and writing but cannot create a new file.
        w+: opens a file for both reading and writing.          */
/*#include<stdio.h>
void main()
{
    FILE *ptr= NULL;
    char string [100]="Hi hello this is sayan";
    /*ptr = fopen("16FuncIO.txt", "r");
    //For reading a file
    fscanf(ptr, "%s", string);
    printf("%s",string);*/
    // For writing a file
    /*ptr = fopen("16FuncIO.txt", "w");
    fprintf(ptr ,"%s",string);
    return;
}*/
#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("16FuncIO.c.txt", "r+");
    // char * c = fgetc(ptr);
    // printf("The character I read was %c\n", c );
    // c = fgetc(ptr);
    // printf("The character I read was %c\n", c );


    char str[4];
    fgets(str, 5, ptr);
    printf("The string is %s\n", str);

    // fputc('o',ptr);
    // fputs("this is sayan",ptr);



    fclose(ptr);
    return 0;
}
