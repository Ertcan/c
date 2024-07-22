#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	char s1[]="Ve Programlama " , s2[]="Algoritma ";
	printf("1.dizi : %s", s1);
	printf("\n");
	printf("2.dizi : %s", s2);
	printf("\n");
	strcat(s2,s1);
	puts(s2);
}
