#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	int b;
	printf ("\nHi! I am your calculator for comparision please enter number 1 : ");
	scanf ("%d",&a);
	printf ("\n Enter number 2 : ");
	scanf ("%d",&b);
	if (a>b)
	{
		printf(a" is greater than ",b);
	}
	else if (b>a)
	{
		printf (a" is less than ",b);
	}
	else
	{
		printf (a" and ",b," are equal");
	}
	getch();
}