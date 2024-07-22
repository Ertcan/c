#include <stdio.h>
#include <conio.h>
#include <string.h>
char s1[]="Etkileyici" , s2[]="Manzara";
char *mystrncat(char *s1, const char *s2, unsigned int g)
{
	char *ptr = s1 + strlen(s1);
	while( (g > 0) && ( *s2 != '\0'))
	{
		*ptr = *s2;
		--g;
		++s2;
		++ptr;
	}
	*ptr = '\0';
	return s1;
}
char *mystrcat(char *s1, const char *s2)
{
	strcpy(strchr(s1,'\0'), s2);
	return s1;
}
char *myStrcpy(char *s1, const char *s2)
{
        int k = 0;
            for(k = 0; ( s1[k] = s2[k] ) != '\0'; ++k);
            return s1;
            while( *s1 != '\0')
            { 
            *s1 = *s2;
            ++s1; 
            ++s2; 
            }
            *s1 = '\0';
            return s1;}
int main(){
	int s, n, g;
	int a=0;
	int b=0;
	int i=0;
	int c=0;
	int d=0;
	x:
char s1[]="Etkileyici" , s2[]="Manzara";
printf("1.Dize : %s \n\n", s1);
printf("2.Dize : %s \n\n", s2);
printf("Dizelerdeki harf sayisini ogrenmek icin 1'e\n\n"); 
printf("2.dizeyi 1.dizeye kopyalamak icin 2'ye \n\n");
printf("2 dizeyi karsilastirmak icin 3'e \n\n");
printf("2.dizeyi 1.dizeye eklemek icin 4 'e \n\n");
printf("1.dizi icindeki ifadeyi 10 harften fazla olmamak uzere 2.dizinin pesine eklemek icin 5'e basin.\n\n");
 scanf("%d",&s);
if(s==1)
{

while(s1[a] != '\0')
 a++;
 while(s2[b] != '\0')
 b++;
printf("1.dizenin harf sayisi %d \n\n", a);
printf("2.dizenin harf sayisi %d \n\n", b);
printf("baska islem yapmak icin 6'ya bitirmek icin 7'ye basin.\n\n");
 scanf("%d",&n);
 if(n==6){
 	goto x;
 }
 if(n==7){
 	goto y;
 }
 else
 {
 	goto q;
 }
}
if(s==2){
	
	printf("1.dizi : %s\n\n", s1);
	printf("2.dizi : %s\n\n", s2);
	myStrcpy( s1, s2 );
	printf("2.dizi 1.dizeye kopyalaniyor...\n\n");
		printf("1.dizi %s\n\n", s1);
		printf("2.dizi %s\n\n", s2);
		printf("baska islem yapmak icin 6'ya bitirmek icin 7'ye basin.\n\n");
 scanf("%d",&n);
 if(n==6){
 	goto x;
 }
 if(n==7){
 	goto y;
 }
 else
 {
 	goto q;
 }
}
if(s==3)
{
	while(s1[c] != '\0')
 c++;
 while(s2[d] != '\0')
 d++;
	if(c > d){
		printf("1.dizi > 2.dizi\n\n");
	}
	else if(c < d){
	printf("1.dizi < 2.dizi\n\n");	
	}
	else{
	printf("1.dizi = 2.dizi\n\n");	
	}
	printf("baska islem yapmak icin 6'ya bitirmek icin 7'ye basin.\n\n");
 scanf("%d",&n);
 if(n==6){
 	goto x;
 }
 if(n==7){
 	goto y;
 }
 else
 {
 	goto q;
 }
}
if(s==4)
{
	mystrcat(s2,s1);
	printf("%s\n\n",s2);
	printf("baska islem yapmak icin 6'ya bitirmek icin 7'ye basin.\n\n");
 scanf("%d",&n);
 if(n==6){
 	goto x;
 }
 if(n==7){
 	goto y;
 }
 else
 {
 	goto q;
 }
}
if(s==5)
{
w:
printf("10 ile 0 arasinda sayi giriniz.\n\n");
scanf("%d",&g);
if(g <10)
{
mystrncat(s2, s1, g);
printf("yeni kelime : %s\n\n",s2);
}
if(g > 10)
{
	printf("bu sayi 0 ile 10 arasinda degil tekrar deneyin.\n\n");
	goto w;
}
printf("baska islem yapmak icin 6'ya bitirmek icin 7'ye basin.\n\n");
 scanf("%d",&n);
 if(n==6){
 	goto x;
 }
 if(n==7){
 	goto y;
 }
 else
 {
 	goto q;
 }
}
else{
	goto q;
}
q:
	printf("yanlis tusa bastiniz bidaha deneyin.\n\n");
	printf("baska islem yapmak icin 6'ya bitirmek icin 7'ye basin.\n\n");
 scanf("%d",&n);
 if(n==6){
 	goto x;
 }
 if(n==7){
 	goto y;
 }
 else
 {
 	goto q;
 }
y:
return 0;
}
