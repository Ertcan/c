#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(){
	char s1[]="Kalem" , s2[]="Bilgisiyar";
	printf("1.dizi : %s", s1);
	printf("\n");
	printf("2.dizi : %s", s2);
	printf("\n");
	
	strcpy(s1,s2);
	printf("kopyalaniyor...");
	printf("\n1.dizi : %s", s1);
	printf("\n2.dizi : %s", s2);
}
