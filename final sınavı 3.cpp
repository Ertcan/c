#include <stdio.h>
#include <stdlib.h>


int main() {
	
	
	

	
	int secim,i,m;
	printf("islem seciniz:\nToplama icin : 1\nCikarma icin : 2\nCarpma icin  : 3\nBolme icin   : 4\n");
	scanf("%d",&secim);
	double a , b;
    char e,h,q;
    
    
    
    for(m=1;m<m+1;m++)
    {
	
    
	if(secim==1)
	{
    printf("-------------------\n------TOPLAMA------\n-------------------\n------a+b = ?------\n-------------------\n");
	printf("a sayisini giriniz: ");
	scanf("%lf",&a);
	printf("b sayisini giriniz: ");
	scanf("%lf",&b);
	printf("\nislem sonucunuz: %0.f + %0.f = %0.f\n",a,b,a+b);
    }
    else if(secim==2)
	{
    printf("...\n....CIKARMA....\n...\n....a-b=?....\n....\n");
	printf("a sayisini giriniz: ");
	scanf("%lf",&a);
	printf("b sayisini giriniz: ");
	scanf("%lf",&b);
	printf("\nislem sonucunuz: %0.f - %0.f = %0.f\n",a,b,a-b);
    }
	else if(secim==3)
	{
    printf("...\n....CARPMA....\n...\n....axb=?....\n....\n");
	printf("a sayisini giriniz: ");
	scanf("%lf",&a);
	printf("b sayisini giriniz: ");
	scanf("%lf",&b);
	printf("\nislem sonucunuz: %0.f * %0.f = %0.f\n",a,b,a*b);
    }
    else if(secim==4)
	{
    printf("\n....BOLME....\n...\n...a/b = ?...\n...\n");
	printf("a sayisini giriniz: ");
	scanf("%lf",&a);
	printf("b sayisini giriniz: ");
	scanf("%lf",&b);
	printf("\nislem sonucunuz: %0.f / %0.f = %0.f\n",a,b,a/b);
    }
	else
	{
		printf("hatal� giris yaptiniz");
	}
	for(i=2;i<=2;i++)
{
	printf("Baska bir islem yapmak istiyor musunuz? (e/h) ");
	scanf("%s",&q);
	if(q=='y')
	{
		printf("islem seciniz:\nToplama icin : 1\nCikarma icin : 2\nCarpma icin  : 3\nBolme icin   : 4\n");	
		scanf("%d",&secim);
	}
	else
	{
		printf("Baska bir islem yapmak istemediginizi belirttiniz.");
	}
}	
}
	
	
	
	return 0;
}
