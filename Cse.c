#include <stdio.h>
#include <string.h>

void main()
{
	int q[10], i, j, x;
	float r[10], p[10], t = 0;
	char n[10][25];
	printf("Welcome to The Roasters Cafe \n");
	for (i = 1; i <= 10; i++)
	{
		gets(n[i]);
		printf("----**COFFEE BASED**----\n");
		printf("\tESPRESSO     \n");
		printf("\tMACHIATTO    \n");
		printf("\tAMERICANO    \n");
		printf("\tCAPPUCCINO   \n");
		printf("\tFLAT WHITE   \n");
		printf("\tCAFFE LATTE  \n");
		printf("----**TEA BASED**----\n");
		printf("\tHOT TEA      \n");
		printf("\tMATCHA BLEND \n");
		printf("----**KITCHEN's MADE**----\n");
		printf("\tBIG SALLAD  \n");
		printf("\tGLAZED DONUT\n");
		printf("\tCHOCO LAVA  \n");
		printf("\tBIG B'FAST  \n");
		printf("\tPOP-MALLOW  \n");
		printf("\tFRIED BANANA\n");
		printf("\tEnter product name :- \n");
		gets(n[i]);
		printf("\n Enter Quantity :- ");
		scanf("%d", &q[i]);
		printf("\n Enter Rate :- ");
		scanf("%f", &r[i]);
		p[i] = r[i] * q[i];
		j = i;
		t = t + p[i];
		printf("\n Enter any key to Add more \n Enter 0 to make bill : ");
		scanf("%d", &x);
		if (x == 0)
		{
			break;
		}
	}
	printf("\n \t The Roasters Cafe ");
	printf("\n \t ---------************************----------");
	printf("\n \t Product  \t\t Qty \t Rate \t Price ");

	for (i = 1; i <= j; i++)
	{
		printf("\n\t %s \t\t  %d\t %0.2f \t %0.2f", n[i], q[i], r[i], p[i]);
	}

	printf("\n \t\t Total :- %0.2f", t);
	printf("\n \t---------**************************-----------");
	printf("\n Thank you visit again ");
	return;
}
