#include <stdio.h>
#include <stdlib.h>
 int main(){

    int secim ;
    sira:
    printf (" Hangi islemi yapmak istiyorsunuz?\n1. Toplama \n2. Cýkarma \n3. Carpma \n4. Bölme \n");
	fflush (stdout); 
	scanf("%d",&secim);
    if(secim ==1){
    	printf("-------------\n------TOPLAMA----\n-----------------\n-------a+b=?------\n----------------\n");

    float a,b;
     printf("a sayisini girin:"); 
	 fflush (stdout); 
	 scanf ("%f", &a);
     printf("b sayisini girin:"); 
	 fflush (stdout); 
	 scanf ("%f", &b);
	printf("\niþlemin cevabý: %0.f + %0.f = %0.f ",a,b,a+b);
    }
    else if

     printf("Baska islem yapmak ister misin ?\n1. Evet \n2. Hayýr \n" );
	 fflush (stdout);
	scanf("%d",&secim);
    if(secim==1)
    {goto sira;}
    float a,b;

    	}
