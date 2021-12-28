/*#include <stdio.h>
void main()
{
    int i;
    int marks[] = {1, 2, 3, 4, 5};
    for (size_t i = 0; i < 5; i++)
    {
        printf("the marks are %d\n", marks[i]);
    }
    return;
*/

/*#include <stdio.h>
void main()
{
    int marks[][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}};
    for (int i = 0; i < 2; i++)  //for loop is used for indexing 
    {
        for (int j = 0; j < 5; j++)
        {

            printf("%3d", marks[i][j]);
            
        }
        printf("\n");
    }
    return;
}*/




//FOR REVERSING THE ARRAY
#include<stdio.h>
void arrayRev(int arr[])
{
    int temp;
    for (int i = 0; i < 7/2; i++)
    {
        temp=arr[i];            //this called swaping
        arr[i]=arr[6-i];
        arr[6-i]=temp;
    }
    
}


void main()
{
    int arr[]={1,2,0,3,4,5,7};
    arrayRev(arr);
    for (int i = 0; i < 7; i++)
    {
        printf("The reverse array is %d\n",arr[i]);
    }
    

    return;
}