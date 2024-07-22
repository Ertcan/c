#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <windows.h>
int d[12] ={30,25,22,17,98,47,3,55,126,10,49,11};
int x;
int sayi;
int gecici, s, adet;
int main() {
	setlocale(LC_ALL, "turkish");

		
	printf("lutfen yapmak istediginiz islemi secin:\nkucukten buyuge siralanmis elemanlari gormek icin 1 e basin. \ndizideki girdiginiz sayiya kalansiz bolme islemi yapmak icin 2ye basin.");
	scanf("%d", &sayi);
	switch(sayi)
	case 1:
goto p;
		printf("klavyeden sayi giriniz:\nbasa donmek icin 2 giriniz.");
		scanf("%d", &x);
		if(x >= 2){
		if (x %d[0] ==0)
	 	printf("30 sayisi girdiginiz sayiyi kalansiz boler...\n");		
		 
		if(x %d[1] ==0)
		 printf("25 sayisi girdiginiz sayiyi kalansiz boler...\n");	
		 
		 if(x %d[2] ==0)
		 printf("22 sayisi girdiginiz sayiyi kalansiz boler...\n");	
		 
		 if(x %d[3] ==0)
		 printf("17 sayisi girdiginiz sayiyi kalansiz boler...\n");	
		 
		 if(x %d[4] ==0)
		 printf("98 sayisi girdiginiz sayiyi kalansiz boler...\n");	
		 
		 if(x %d[5] ==0)
		 printf("47 sayisi girdiginiz sayiyi kalansiz boler...\n");	
		 
		 if(x %d[6] ==0)
		 printf("3 sayisi girdiginiz sayiyi kalansiz boler...\n");	
		 
		 if(x %d[7] ==0)
		 printf("55 sayisi girdiginiz sayiyi kalansiz boler...\n");	
		 
		 if(x %d[8] ==0)
		 printf("126 sayisi girdiginiz sayiyi kalansiz boler...\n");	
		 
		 if(x %d[9] ==0)
		 printf("10 sayisi girdiginiz sayiyi kalansiz boler...\n");	
		 
		 if(x %d[10] ==0)
		 printf("49 sayisi girdiginiz sayiyi kalansiz boler...\n");	
		 
		 if(x %d[11] ==0)
		 printf("11 sayisi girdiginiz sayiyi kalansiz boler...\n");	
		
		 
	}
		 else
		 printf("...hicbir sayiya tam bolunmez...");

		
		
		return(0);
		switch(sayi)
	case 2:
p:		
		

				for(int i=0; i<12;i++){
				for(int j=i+1; j<12; j++){
				if(d[i] > d[j]){
				gecici = d[i];
			d[i] = d[j];
			d[j] = gecici;
}
}
}
		
		{
	a:
		
			printf("1 le 12 arasi sayi giriniz.\nProgrami kapatmak icin 13 yaziniz.\nBasa donmek icin 14 yaziniz.  ");
			scanf("%d", &s);
			if(s > 0 && s < 15){
			if(s==1)
			
			printf("%d\n",d[0]);	
			
			if (s==2)
			
			printf("%d\n",d[1]);	
			
			if (s==3)
			
			printf("%d\n",d[2]);	
			
			if(s==4)
			
			printf("%d\n",d[3]);	
			
			if(s==5)
			
			printf("%d\n",d[4]);	
			
			if(s==6)
			
			printf("%d\n",d[5]);	
			
			if(s==7)
			
			printf("%d\n",d[6]);	
			
			if(s==8)
			
			printf("%d\n",d[7]);	
			
			if(s==9)
			
			printf("%d\n",d[8]);	
			
			if(s==10)
			
			printf("%d\n",d[9]);	
			
			if(s==11)
			
			printf("%d\n",d[10]);	
			
			if(s==12)
			
			printf("%d\n",d[11]);	
			if(s==13)
			goto c;
			
			
			}
			else
			
			printf("\n ...Hatali giris...\n");
			
		goto a;
		}
c:
	return(0);
}

