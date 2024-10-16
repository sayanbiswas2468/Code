/*  ******     Write a program using function to convert binary number to decimal?       *********

#include <stdio.h>
void main()
{
  int num, bin, deci = 0, base = 1, rem;
  printf(" Enter the number\n");
  scanf(" %d", &num);

  bin = num;

  while (num > 0)
  {
    rem = num % 10;
    deci = deci + rem * base;
    num = num / 10;
    base = base * 2;
  }
  printf(" The decimal number is %d \n", deci);
  return;
}*/

/* ******************Write a program to calculate the power using recursion?********** */
/*#include <stdio.h>
int power(int n1, int n2);
int main() 
{
    int base, a, result;
    printf("Enter the base : ");
    scanf("%d", &base);
    printf("Enter the power: ");
    scanf("%d", &a);
    result = power(base, a);
    printf("%d^%d = %d", base, a, result);
    return 0;
}

int power(int base, int a) 
{
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}*/

/********************Write a program to find the GCD of two numbers using recursion?************/

/*#include <stdio.h>
int hcf(int n1, int n2);
int main() {
    int n1, n2;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("G.C.D of %d and %d is %d.", n1, n2, hcf(n1, n2));
    return 0;
}

int hcf(int n1, int n2) {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}*/

/********************Write a program to display pascal triangle?*********************/

/*#include <stdio.h>

void main()
{
    int no_row,c=1,blk,i,j;
    printf("Input number of rows: ");
    scanf("%d",&no_row);
    for(i=0;i<no_row;i++)
    {
        for(blk=1;blk<=no_row-i;blk++)
        printf("  ");
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
                c=1;
            else
               c=c*(i-j+1)/j;
            printf("% 4d",c);
        }
        printf("\n");
    }
}*/

/*********Write a program to display prime numbers in a given range which ends with 3 using user defined functions?********/

/*#include <stdio.h>
int PrimeNumber(int n);
int main()
{

    int n1, n2, i, flag;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    
     if (n1 > n2)
    {
         n1 = n1 + n2;
         n2 = n1 - n2;
         n1 = n1 - n2;
        
    }

    printf("Prime numbers between %d and %d are: ", n1, n2);
    for (i = n1 + 1; i < n2; ++i)
    {

       
        flag = PrimeNumber(i);

        if (flag == 1)
            printf("%d ", i);
    }
}

  return 0;
}


int PrimeNumber(int n)
{
    int j, flag = 1;

    for (j = 2; j <= n / 2; ++j)
    {

        if (n % j == 0)
        {
            flag = 0;
            break;
        }
    }

    return flag;
}*/

/*********Write a program to display 1st n odd numbers and sum of those values using user defined functions?********/

/*#include <stdio.h>

int main()
{
    int i, a, b, sum = 0;

    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);

    if (a % 2 == 0)
    {
        a++;
    }

    for (i = a; i <= b; i += 2)
    {
        sum += i;
    }

    printf("Sum of odd numbers between %d to %d = %d", a, b, sum);

    return 0;
}*/

                 /********write a program to convert decimal to binary?****************/

/*#include <stdio.h>
#include <math.h>

long long convert(int);

int main() 
{
  int n, bin;
  printf("Enter a decimal number: ");
  scanf("%d", &n);
  bin = convert(n);
  printf("%d in decimal =  %lld in binary", n, bin);
  return 0;
}

long long convert(int n) 
{
  long long bin = 0;
  int rem, i = 1;

  while (n!=0) {
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
  }

  return bin;
}*/

/*****Write a program to reverse a given string using call by reference and without using string handling functions?**/

/*#include <stdio.h>
int main()
{
   char s[1000], r[1000];
   int begin, end, count = 0;

   printf("Input a string\n");
   gets(s);

   

   while (s[count] != '\0')
      count++;

   end = count - 1;

   for (begin = 0; begin < count; begin++) {
      r[begin] = s[end];
      end--;
   }

   r[begin] = '\0';

   printf("%s\n", r);

   return 0;*/

/*Write a program to count number of vowels, consonents, digits, spaces and characters in a given string using functions?*/

/*#include <stdio.h>
int main()
{
char str[150];
int i, vowels, consonants, digits, spaces, symbols;
vowels = consonants = digits = spaces = symbols = 0;
gets(str);
for(i=0; str[i]!=’\0′; ++i)
{
if(str[i]==’a’ || str[i]==’e’ || str[i]==’i’ ||
str[i]==’o’ || str[i]==’u’ || str[i]==’A’ ||
str[i]==’E’ || str[i]==’I’ || str[i]==’O’ ||
str[i]==’U’)
{
++vowels;
}
else if((str[i]>=’a’&& str[i]<=’z’) || (str[i]>=’A’&& str[i]<=’Z’))
{
++consonants;
}
else if(str[i]>=’0′ && str[i]<=’9′)
{
++digits;
}
else if (str[i]==’ ‘)
{
++spaces;
}
else
{
++symbols;
}
}
printf(“Vowels: %d”,vowels);
printf(“\nConsonants: %d”,consonants);
printf(“\nDigits: %d”,digits);
printf(“\nWhite spaces: %d”, spaces);
printf(“\nSymbols: %d”, symbols);
return 0;
}*/

            /************Write a program to swap two values using call by reference?************/

/*#include <stdio.h>
 
void swap(int*, int*);
 
int main()
{
   int x, y;
 
   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);
 
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
 
   swap(&x, &y); 
 
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
 
   return 0;
}
 
void swap(int *a, int *b)
{
   int temp;
 
   temp = *b;
   *b = *a;
   *a = temp;   
}*/

/*********Write a program to implement linear search using user defined functions?*********/

/*#include <stdio.h>
int main()
{
  int array[100], search, c, n;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);

  printf("Enter %d integer(s)\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  printf("Enter a number to search\n");
  scanf("%d", &search);

  for (c = 0; c < n; c++)
  {
    if (array[c] == search)     
    {
      printf("%d is present at location %d.\n", search, c+1);
      break;
    }
  }
  if (c == n)
    printf("%d isn't present in the array.\n", search);

  return 0;
}*/

/*****Write a program to create a structure for empid, empname, empsalary and calculate for annual salary?*****/
/*#include <stdio.h>
struct employee
{
    char name[30];
    int empId;
    float salary;
};

int main()
{
    
    struct employee emp;

    
    printf("\nEnter details :\n");
    printf("Name ?:");
    gets(emp.name);
    printf("ID ?:");
    scanf("%d", &emp.empId);
    printf("Salary ?:");
    scanf("%f", &emp.salary);

    
    printf("\nEntered detail is:");
    printf("Name: %s", emp.name);
    printf("Id: %d", emp.empId);
    printf("Salary: %f\n", emp.salary);
    return 0;
}*/


/****Write a program to display factors of a given number using functions?*****/


#include <stdio.h>
int main() {
    int num, i;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; ++i) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
