#include <stdio.h>
#include <stdlib.h>

       float sayi1, sayi2, sonuc;
    int devam, islemSec;


int main(){




    printf("Merhaba Hocam Lutfen islem Seciniz\n");
    fflush(stdout);
    while(1){
        printf("Toplama icin => 1\n");

        printf("Cikarma icin => 2\n");

        printf("Carpma icin => 3\n");

        printf("Bolme icin => 4\n");
        scanf("%d", &islemSec);

        if((islemSec != 1) & (islemSec != 2) & (islemSec != 3) & (islemSec != 4) ){

            goto hata;
        }

        printf("ilk sayiyi yaziniz.  ");
        scanf("%f", &sayi1);

    sayi2_label:
        printf("ikinci sayiyi yaziniz.  ");
        scanf("%f", &sayi2);

        if (islemSec == 1) {

            sonuc = sayi1 + sayi2;
            printf("%.3f+%.3f = %.3f\n", sayi1, sayi2, sonuc);
        }
        else if (islemSec == 2) {

            sonuc = sayi1 - sayi2;
            printf("%.3f-%.3f = %.3f\n", sayi1, sayi2, sonuc);
        }
        else if (islemSec == 3) {

            sonuc = sayi1 * sayi2;
            printf("%.3f*%.3f = %.3f\n", sayi1, sayi2, sonuc);
        }
        else if (islemSec == 4) {
        if (sayi2 == 0){

        printf("Hata 2.sayi 0 olamaz \n");
        goto sayi2_label;

        }
            sonuc = sayi1 / sayi2;

            printf("%.3f/%.3f = %.3f\n", sayi1, sayi2, sonuc);
        }
        else {
        hata:
            printf("Islem basarisiz. Lutfen 1-4 araliginda bir deger giriniz.");

        }


         printf("Baska bir islem yapmak istiyor musunuz? Yapmak istiyorsaniz bir rakama tiklamaniz yeterli, istemiyorsaniz 0 a tiklamaniz yeterli.");
        scanf("%d", &devam);
        if(devam == 0){
            break;
        }



    }

    return (0);
}
