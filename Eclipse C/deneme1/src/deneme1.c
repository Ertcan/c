#include<stdio.h>
#include<conio.h>
int main()
{
	int sayi;
	printf("\n klavyeden bir sayi giriniz:  " );
	scanf("%d", &sayi);
	if (sayi%2==1)
		printf ("girdiðiniz sayi TEK sayýdýr.");
	else
		printf ("girdiðiniz sayi ÇIFT sayýdýr.");
	getch();
	return 0;
}
