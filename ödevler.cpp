#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	char s1[]="Programlama " , s2[]="Algoritma ";
	printf("\n\n");
	printf("1.dizedeki harf sayisi : %d\n",strlen(s1));
	printf("2.dizedeki harf sayisi : %d",strlen(s2));
	
	int a = -2;
	printf("\n");
	printf("1.dizi : %s", s1);
	printf("\n");
	printf("2.dizi : %s", s2);
	printf("\n");
	a = strcmp(s1,s2);
	if(a > 0){
		printf("1.dizi > 2.dizi\n");
	}
	else if(a < 0){
	printf("1.dizi < 2.dizi\n");	
	}
	else{
	printf("1.dizi = 2.dizi\n");	
	}
	printf("1.dizi : %s", s1);
	printf("\n");
	printf("2.dizi : %s", s2);
	printf("\n");
	strcat(s2,s1);
	puts(s2);{
	
	char s3[100] , s4[]=" Algoritma ";
	
	printf("\nBir kelime yazin.", s3);
	gets(s3);
	printf("\n kelimeniz : %s", s3);
	strcat(s3,s4);
	puts(s4);
		{
char s5[]="Kalem" , s6[]="Bilgisiyar";
	printf("1.dizi : %s", s5);
	printf("\n");
	printf("2.dizi : %s", s6);
	printf("\n");
	
	strcpy(s5,s6);
	printf("kopyalaniyor...");
	printf("\n1.dizi : %s", s5);
	printf("\n2.dizi : %s", s6);
}
}
}

