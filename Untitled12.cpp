#include <stdio.h>
#include <conio.h>

//oyuncu bilgisi girme
struct oyuncuBilgisi
{
    char isim[50];
    char soyisim[50];
    int yas;

}oyuncu1,oyuncu2;

static char kare[10] = { 'o','1', '2', '3', '4', '5', '6', '7', '8', '9' };

//matris olusturma
void matris_olustur()
{

    

    
    printf("\t\t\   Tic Tac Toe\n");
    printf("\t\t   *****\n\n");

    printf("\n\n");

    printf("1. Oyuncu  (X)  -  2. Oyuncu (O)\n\n\n");


    printf("     |     |    \n");
    printf("  %c  |  %c  |  %c\n", kare[1], kare[2], kare[3]);

    printf("__ |__ |__\n");
    printf("     |     |    \n");

    printf("  %c  |  %c  |  %c\n", kare[4], kare[5], kare[6]);

    printf("__ |__ |__\n");
    printf("     |     |    \n");

    printf("  %c  |  %c  | %c \n", kare[7], kare[8], kare[9]);

    printf("     |     |    \n\n");
}

//oyun galibiyet durumunu belirleme
int oyunKazan()
{

   

    if (kare[1] == kare[2] && kare[2] == kare[3])
        return 1;

    else if (kare[4] == kare[5] && kare[5] == kare[6])
        return 1;

    else if (kare[7] == kare[8] && kare[8] == kare[9])
        return 1;

    else if (kare[1] == kare[4] && kare[4] == kare[7])
        return 1;

    else if (kare[2] == kare[5] && kare[5] == kare[8])
        return 1;

    else if (kare[3] == kare[6] && kare[6] == kare[9])
        return 1;

    else if (kare[1] == kare[5] && kare[5] == kare[9])
        return 1;

    else if (kare[3] == kare[5] && kare[5] == kare[7])
        return 1;

    else if (kare[1] != '1' && kare[2] != '2' && kare[3] != '3' &&
        kare[4] != '4' && kare[5] != '5' && kare[6] != '6' && kare[7]
        != '7' && kare[8] != '8' && kare[9] != '9')
        return -1;
    else
        return  0;
}

/* 1 dönüyorsa oyun bitti, oyuncu kazandý
-1 dönüyorsa oyun bitti, kazanan yok.
0 dönüyorsa oyuna devam et.*/

int main()
{

    FILE *dosya;
    char cumle1[10],cumle2[10],cumle3[10],cumle4[10];
    int i;

    if((dosya=fopen("tictactoe.txt","r"))!=NULL)
    {
        fscanf(dosya,"%s",&cumle1);
        fscanf(dosya,"%s",&cumle2);
        fscanf(dosya,"%s",&cumle3);
        fscanf(dosya,"%s",&cumle4);
        printf("\t\t**%s %s**\n\n\t\t----%s %s----", cumle1,cumle2,cumle3,cumle4);
    }
    else
    {
        printf("DOSYA BULUNAMADI!");
    }
    fclose(dosya);

    struct oyuncuBilgisi oyuncu1,oyuncu2;

    printf("\n\n");

    printf("\t\t\   Tic Tac Toe\n");
    printf("\t\t   *****\n\n");

    printf("****Oyuncu Bilgilerini Giriniz****\n");

    printf("\n");

    printf("1. oyuncunun adi: ");
    scanf("%s", &oyuncu1.isim);

    printf("1. oyuncunun soyadi: ");
    scanf("%s", &oyuncu1.soyisim);

    printf("1. oyuncunun yasi: ");
    scanf("%d", &oyuncu1.yas);

    printf("2. oyuncunun adi: ");
    scanf("%s", &oyuncu2.isim);

    printf("2. oyuncunun soyadi: ");
    scanf("%s", &oyuncu2.soyisim);

    printf("2. oyuncunun yasi: ");
    scanf("%d", &oyuncu2.yas);

    
    int oyuncu;
    int kare_secim;
    char isaret;
    do{
        matris_olustur();
        if(oyuncu%2==1){
            oyuncu=1;
        }
        else if(oyuncu%2==2){
            oyuncu=2;
        }

        printf("%d. Oyuncu kac numarali kareyi isaretledi? ", oyuncu);
        scanf("%d", &kare_secim);

        if(oyuncu==1)
            isaret='X';
        else
            isaret='Y';

        if(kare_secim== 1 && kare[1]== '1'){
            kare[1]=isaret;
        }
        else if(kare_secim== 2 && kare[2]== '2'){
            kare[2]=isaret;
        }
        else if(kare_secim== 3 && kare[3]== '3'){
            kare[3]=isaret;
        }
        else if(kare_secim== 4 && kare[4]== '4'){
            kare[4]=isaret;
        }
        else if(kare_secim== 5 && kare[5]== '5'){
            kare[5]=isaret;
        }
        else if(kare_secim== 6 && kare[6]== '6'){
            kare[6]=isaret;
        }
        else if(kare_secim== 7 && kare[7]== '7'){
            kare[7]=isaret;
        }
        else if(kare_secim== 8 && kare[8]== '8'){
            kare[8]=isaret;
        }
        else if(kare_secim== 9 && kare[9]== '9'){
            kare[9]=isaret;}
        else{
            printf("Gecersiz Hamle!\n");
            oyuncu--;
            getch();
        }
        i=oyunKazan();
        oyuncu++;
    }while(i==0);

    matris_olustur();

    if(i==1){
        printf("KAZANAN --> %d. OYUNCU.", --oyuncu);
        printf("\n");
        printf("\tTEBRIKLER!\n");
    }
    else{
        printf("OYUN BERABERE!\n");
        printf("\tIKI OYUNCUYU DA TEBRIK EDERIZ!\n");
    }
    getch();


    return 0;
}
