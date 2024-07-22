#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
static double Ikok [11];
	static double Ihata [11];
	static double Interkok[11];
	static double Interhata[11];
	static double Nkok[11];
	static double Nhata[11];
	static int Idizi[11];
	static int Interdizi[11];
	static int Ndizi[11];

static double function(long double x0){
		x0=(pow(x0, 2)*0.85)-2.14*x0;
	return x0;
}
static double turev(long double y){
	y=y*1.7-2.14;
	return y;
}
static double interpolasyon() {
		double a=2 ,b=12,hata=0.0;
		int deger1,deger2, deger3;
		for(int i = 0; i <=10; i++) {
			if(function(a)<0) {
				deger1 = -1;
			}else {
				deger1 = 1;
			}
			if(function(b)<0) {
				deger2 = -1;
			}else {
				deger2=1;
			}
		double c = ((a*function(b))-(b*function(a)))/(function(b)-function(a));
		Interkok[i]=c;
		if(function(c)<0) {
			deger3 = -1;
		}else {
			deger3 = 1;
		}
		if(deger3*deger2<0) {
		 hata = fabs(c-b);
		 b=c;
		 Interhata[i] = hata;
		 if(hata<0.02) {
				Interdizi[i]=i;
			}
		}else if(deger3*deger1<0) {
		hata = fabs(c-a);
		a=c;
		Interhata[i] = hata;
		if(hata<0.02) {
			Interdizi[i]=i;
		}
		}
		}
		return 0;
	}
	static void hata() {
		printf("Iterasyon \t \t Ikiye Bolme Metodu\t  \t Newton Raphson Metodu \t \t \t Interpolasyon Metodu     \n");
		printf("N \t Kok \t \t \t Hata \t  \t Kok \t \t Hata \t  \t Kok \t \t \t Hata \n");
		for(int i = 1; i<=10;i++) {
		printf("|%d|\t |%f| \t \t |%f| \t  |%f| \t  |%f| \t  |%f| \t  |%f| \n",i,Ikok[i-1],Ihata[i-1],Nkok[i-1],Nhata[i-1],Interkok[i-1],Interhata[i-1]);

		}
		for(int i =0;i<10;i++) {
			if(Idizi[i]!=0) {
		printf("Ikiye bolme metodu ile 0.02 den daha kucuk bir hata degerine %d adimda ulasilmistir \n",Idizi[i+1]);
		break;
		}
	}
		for(int i =0;i<10;i++) {
			if(Ndizi[i]!=0) {
			printf("Newton Raphson Metodu ile 0.02 den daha kucuk bir hata degerine %d adimda ulasilmistir \n",Ndizi[i]);
		break;
		}
	}
		for(int i =0;i<10;i++) {
			if(Idizi[i]!=0) {
				printf("Interpolasyon Metodu ile 0.02 den daha kucuk bir hata degerine %d adimda ulasilmistir \n",Interdizi[i+1]);
		break;
		}
	}	
	}
	static double ikiyeBolme() {
		double a = 2, b = 12,hata;
		for(int i = 0; i <=10; i++) {
			double c = (a+b)/2;
			Ikok[i] = c;
			if(function(c)*function(a)<0) {
				b=c;
			 hata = (c-a)/pow(2, i);
			Ihata[i] = hata;
			if(hata<0.02) {
				Idizi[i]=i;
			}
			}else {
				a=c;
			hata = (b-c)/pow(2, i);
			Ihata[i] = hata;
			if(hata<0.02) {
				Idizi[i]=i;
			}
			}
			}
			return 0;
	}
	static double newton() {
		double x0 = 2,hata,x1=0;
		int i = 1;
		while(i<=10) {
		x1 = x0-(function(x0)/turev(x0));
		Nkok[i-1] = x1;
		hata =  fabs(x1-x0);
		x0 = x1;
		Nhata[i-1] = hata;
		if(hata<0.02) {
			Ndizi[i-1]=i;
		}
		i++;
		}
		return 0;
	}
int main(){
	
	 ikiyeBolme();
	
		interpolasyon();
	
		newton();
	
	
		hata();


}
