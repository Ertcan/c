#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	char s1[]="Algoritma" , s2[]="Kodlama";
	int a = -2;
	
	printf("1.dizi : %s", s1);
	printf("\n");
	printf("2.dizi : %s", s2);
	printf("\n");
	a = strcmp(s1,s2);
	if(a > 0){
		printf("1.dizi < 2.dizi\n");
	}
	else if(a < 0){
	printf("1.dizi > 2.dizi\n");	
	}
	else{
	printf("1.dizi = 2.dizi\n");	
	}
}
