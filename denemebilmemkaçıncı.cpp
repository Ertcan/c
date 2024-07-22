#include<stdio.h>


int main(){
	 double x;
	 int tektoplam =0;
	 int cifttoplam =0;
	 int bolen =0;
	 float dizi[12] ={30,25,22,17,98,47,3,55,126,10,49,11};
	 
	 printf("sayi girin.");
	 scanf("%d" , &x);
  
	 
	 
	 
	 for (int i =0; i<12; i++){
	 	if (dizi[0] / x ==0){
	 	printf("30 sayisi kalansiz bolunur\n");		
		 }
		 if(dizi[1] / x ==0){
		 printf("25 sayisi kalansiz bolunur\n");	
		 }
		 if(dizi[2] / x ==0){
		 printf("22 sayisi kalansiz bolunur\n");	
		 }
		 if(dizi[3] / x ==0){
		 printf("17 sayisi kalansiz bolunur\n");	
		 }
		 if(dizi[4] / x ==0){
		 printf("98 sayisi kalansiz bolunur\n");	
		 }
		 if(dizi[5] / x ==0){
		 printf("47 sayisi kalansiz bolunur\n");	
		 }
		 if(dizi[6] / x ==0){
		 printf("3 sayisi kalansiz bolunur\n");	
		 }
		 if(dizi[7] / x ==0){
		 printf("55 sayisi kalansiz bolunur\n");	
		 }
		 if(dizi[8] / x ==0){
		 printf("126 sayisi kalansiz bolunur\n");	
		 }
		 if(dizi[9] / x ==0){
		 printf("10 sayisi kalansiz bolunur\n");	
		 }
		 if(dizi[10] / x ==0){
		 printf("49 sayisi kalansiz bolunur\n");	
		 }
		 if(dizi[11] / x ==0){
		 printf("11 sayisi kalansiz bolunur\n");	
		 }
		 else
		 printf("...hicbir sayiya tam bolunmez...");
		 
	 
	 
	 
	
	return 0;
}
}
