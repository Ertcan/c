#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <windows.h>
int main(){
    setlocale(LC_ALL, "turkish");
    int sayi, a, d, x ,s;
    int arr[12] ={30,25,22,17,98,47,3,55,126,10};
	s:
	printf("\nToplama i�lemi i�in 1'e  \n��karma i�lemi i�in 2'ye bas�n�z :");
	scanf("%d", &sayi);
	float c , b;
	char e,h,q;


	
	if(sayi==1)
	{
	printf("\nToplama i�lemini se�tiniz.\n");
	a = arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
	printf("\n��lemin cevab� : %d ",a);
	goto x;
    }
    else if(sayi==2)
    {
    printf("\nOrtalama i�lemini se�tiniz.\n");
 	d=(arr[5]+arr[6]+arr[7]+arr[8]+arr[9]);
 	d/=5;
	printf("\n��lemin cevab� : %d ",d);
	goto x;
	}
	
	x:
	printf("{\nBa�ka bir i�lem yapmak ister misiniz? (e/h) \n");
	scanf("%s",&q);
	if(q=='e')
	{
	goto s;
	}
	else
	{
		printf("Bizi tercih etti�iniz i�in te�ekk�rler.");
		return 0;
	}


}

