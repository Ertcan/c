#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
	char *str1="Kalem" , str2[13]="Bilgisiyar";
	puts (str1);
	puts (str2);
	printf ("2. 1.'ye kopyalaniyor...\n");
	strcpy (str2 ,str1);
	puts (str2);
	
	getch();
	return 0;
}
