#include<stdio.h>
#include<conio.h>
int main()
{
	int sayi;
	printf("\n klavyeden bir sayi giriniz:  " );
	scanf("%d", &sayi);
	if (sayi%2==1)
		printf ("girdi�iniz sayi TEK say�d�r.");
	else
		printf ("girdi�iniz sayi �IFT say�d�r.");
	getch();
	return 0;
}
