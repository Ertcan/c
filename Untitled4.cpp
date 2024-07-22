#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	
 char metin[100];
 int sayac=0;
 printf("Metin giriniz:");
 gets(metin);
 while(metin[sayac] != '\0')
 sayac++;
 printf("Girilen metin %d karakterden olusur.", sayac);
}
