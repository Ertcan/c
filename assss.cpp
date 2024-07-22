#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	char s1[100] , s2[]=" Algoritma ";
	
	printf("\nBir kelime yazin.", s1);
	gets(s1);
	printf("\n keimeniz : %s", s1);
	strcat(s1,s2);
	puts(s2);
}
