#include<stdio.h>
#include<conio.h>
int main()
{
	int number;
	printf("\n enter a number from the keyboard:  " );
	fflush (stdout);
	scanf("%d", &number);
	if (number%2==1)
		printf ("the number you enter is an odd number.");
	else
		printf ("the number you enter is a double number.");
	return 0;
}
