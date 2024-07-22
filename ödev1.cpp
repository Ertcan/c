#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char s1[7]="klavye";
	char s2[5]="fare";
	int say=0;
	int x=0;
	printf("%s 1.kelime %s 2.kelime\n",s1,s2);
	for(int i=0; i<6; i++){
		say++;
	}
	printf("1. kelimedeki harf sayisi:%d",say);
	for(int k=0; k<4; k++){
    	x++;
}
	printf("\n2.kelimedeki harf sayisi:%d",x);

	return 0;
}
