#include <stdio.h>

int main(){

	float a, b = 0;
	int islem = 0;
	char secim;

	do{
		printf("Islem seciniz:\n1-Toplama\n2-Cikarma\n3-Carpma\n4-Bolme\n");
		fflush (stdout);
		scanf("%d", &islem);
		switch(islem){
			case 1:
				printf("**** TOPLAMA ****\n**** a+b=? ****\n");
				printf("1. sayi = ");
				scanf("%f", &a);
				printf("2. sayi = ");
				scanf("%f", &b);
				printf("Sonuc: %.f\n", (a+b));
				break;
			case 2:
				printf("**** CIKARMA ****\n**** a-b=? ****\n");
				printf("1. sayi = ");
				scanf("%f", &a);
				printf("2. sayi = ");
				scanf("%f", &b);
				printf("Sonuc: %.f\n", (a-b));
				break;
			case 3:
				printf("**** CARPMA ****\n**** a*b=? ****\n");
				printf("1. sayi = ");
				scanf("%f", &a);
				printf("2. sayi = ");
				scanf("%f", &b);
				printf("Sonuc: %.3f\n", (a*b));
				break;
			case 4:
				printf("**** BOLME ****\n**** a/b=? ****\n");
				printf("1. sayi = ");
				scanf("%f", &a);
				printf("2. sayi = ");
				scanf("%f", &b);
				if(b == 0)
				printf("Bolen 0 olamaz.\n");
				break;
				printf("Sonuc: %.3f\n", (a/b));
				break;
			default:
				printf("Gecersiz islem girdiniz.");
				break;
		}

		printf("Baska islem yapmak istiyor musunuz? (y/n)\n");
		scanf(" %c", &secim);


	}while(secim != 'n');


}
