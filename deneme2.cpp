#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <windows.h>
int main(){
    setlocale(LC_ALL, "turkish");
    int sayi, a, d, x;
	
	printf("\ntoplama i�in 1'e  1\n�ikarma icin 2'ye  2\n�arpma icin 3'e  3\nb�lme i�in 4'e basiniz.");
	scanf("%d", &sayi);
	float c , b;
	char e,h,q;
	
	for(b=1;b<b+1;b++)
	{
	if(sayi==1)
	{
	printf("\ntoplama i�lemini se�tiniz. a+b=?\n");
	printf("\nklavyeden bir say� giriniz.(a)==");
	scanf("%f" ,&c);
	printf("\nklavyeden bir ikinci say� giriniz.(b)==");
	scanf("%f", &b);
	printf("\ni�lemin cevab�: %.2f + %.2f = %.2f ",c,b,c+b);
    }
    else if(sayi==2)
    {
    printf("\n��karma i�lemi se�tiniz. a-b=?\n");
    printf("\nklavyeden bir say� giriniz.(a)==");
	scanf("%f" ,&c);
	printf("\nklavyeden bir ikinci say� giriniz.(b)==");
	scanf("%f", &b);
	printf("\ni�lemin cevab�: %.2f - %.2f = %.2f ",c,b,c-b);
	}
	else if(sayi==3)
	{
    printf("\n�arpma i�lemi se�tiniz. axb=?\n");
    printf("\nklavyeden bir say� giriniz.(a)==");
	scanf("%f" ,&c);
	printf("\nklavyeden bir ikinci say� giriniz.(b)==");
	scanf("%f", &b);
	printf("\ni�lemin cevab�: %.2f * %.2f = %.2f ",c,b,c*b);
	}
	else if(sayi==4)
	{
    printf("\nb�lme i�lemi se�tiniz. a/b=?\n");
    printf("\nklavyeden bir say� giriniz.(a)==");
	scanf("%f" ,&c);
	printf("\nklavyeden bir ikinci say� giriniz.(b)==");
	scanf("%f", &b);
	if (b==0)
	{
	goto x;
	}
	printf("\ni�lemin cevab�: %.2f / %.2f = %.2f ",c,b,c/b);
	}
	else
	{
x:		printf("....hatal� giri� yapt�n�z....");
	}
	for(d=2;d<=2;d++){
	printf("Ba�ka bir i�lem yapmak ister misiniz? (e/h) ");
	scanf("%s",&q);
	if(q=='e')
	{
	printf("\ntoplama i�in 1'e  1\n��karma i�in 2'ye  2\n�arpma i�in 3'e  3\nb�lme i�in 4'e bas�n�z.");
	scanf("%d", &sayi);
	}
	else
	{
		printf("bizi kulland���n�z icin te�ekk�rler");
	}
	
}
}
}
