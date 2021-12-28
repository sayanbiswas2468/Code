#include<stdio.h>
void func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The array is %d\n",array[i]);
        
    }
    return;
}

void func2(int arr[][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value of the array in %dare %d\n",j,arr[i][j]);
        }
        
    }
    return;
}


void main()
{
    int arr[][2]={{23,13},{3,4}};
    func2(arr);
    return;
}