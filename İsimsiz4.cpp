#include <stdio.h>
#include <conio.h>


int main()
{
	int islem;
	int sonuc=0;
	int a;
	int b;
	char cevap='E';
	while (cevap == 'E')
	{

		printf("Bir islem seciniz:\n ");
		printf("Toplama icin: 1\n");
		printf("Cikarma icin: 2\n");
		printf("Carpma icin: 3\n");
		printf("Bolme icin: 4\n");

		scanf("%d", &islem);

		switch (islem)
		{
		case 1:
			printf("--------------------\n");
			printf("------TOPLAMA-------\n");
			printf("--------------------\n");
			printf("------ a + b -------\n");
			printf("--------------------\n");
			printf("a sayisini giriniz: ");
			scanf("%d", &a);
			printf("\nb sayisini giriniz: ");
			scanf("%d", &b);
			sonuc = a + b;
			printf("\n Toplama isleminin sonucu: %d",sonuc);


			break;

		case 2:

			printf("--------------------\n");
			printf("------CIKARMA-------\n");
			printf("--------------------\n");
			printf("------ a - b -------\n");
			printf("--------------------\n");
			printf("a sayisini giriniz: ");
			scanf("%d", &a);
			printf("\nb sayisini giriniz: ");
			scanf("%d", &b);
			sonuc = a - b;
			printf("\nCikarma isleminin sonucu: %d", sonuc);
			break;
		case 3:

			printf("--------------------\n");
			printf("------CARPMA--------\n");
			printf("--------------------\n");
			printf("------ a * b -------\n");
			printf("--------------------\n");
			printf("a sayisini giriniz: ");
			scanf("%d", &a);
			printf("\nb sayisini giriniz: ");
			scanf("%d", &b);
			sonuc = a * b;
			printf("\nCarpma isleminin sonucu: %d", sonuc);
			break;
		case 4:
			printf("--------------------\n");
			printf("------BOLME---------\n");
			printf("--------------------\n");
			printf("------ a / b -------\n");
			printf("--------------------\n");
			printf("a sayisini giriniz: ");
			scanf("%d", &a);
			printf("\nb sayisini giriniz: ");
			scanf("%d", &b);
			sonuc = a / b;
			printf("\nBölme isleminin sonucu: %d", sonuc);
			break;
		default:
			printf("Yanlis secim yaptiniz...");
		}
		printf("Baska islem yapmak istiyor musunuz: ");
		cevap = getchar();
		scanf("%c", &cevap);
	}

}
