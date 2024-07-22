#include<stdio.h>
#include<stdlib.h>

int dizi[6];
int islem;
int toplam;
int ortalama;



int main(void) {
 m:
   


    	{
    
for (int sayac = 0; sayac<6; sayac++){
	
	 printf("\n%d. sayiyi giriniz: \t", sayac+1);
	 scanf("%d", &dizi[sayac]);
}
	{
	
   printf("\n son uc ortalamasi icin icin 1 e\n ilk uc sayinin toplami icin 2 ye basin");
	 scanf("%d", &islem);
	 if(islem==1)
	 goto x;

	 	 else if(islem==2)
	 
	   toplam=dizi[0]+dizi[1]+dizi[2];
	 printf("\n ilk uc sayinin toplami=%d",toplam);

	 
	 goto m;

  return 0;
	 	
	 	
	x: 	ortalama=(dizi[3]+dizi[4]+dizi[5])/3;
        printf("\n son uc sayinin ortalamasi=%d\t",ortalama);
        {
		
		goto m;
	return 0;
}
  }

}
}





