#include <stdio.h>   
#include <stdlib.h>


   int main()
   {
      int a,b,sonuc;
      char secim;

      printf ("a sayisini giriniz = ");
      scanf ("%d",&a);
      fflush(stdin);

     printf ("..islem yapmak icin toplama i�in 1'e ��karma i�in 2'ye �arpma icin 3'e bolme icin 4'e basin.''''\n[1 , 2 , 3 , 4]..");
     secim = getchar();
     printf ("\n b sayisini giriniz.. ");
     printf ("%d %c  ",a,secim);
     scanf("%d",&b);

     switch(secim)
      {
      case '1' :
          sonuc = a + b;
          printf("Toplama isleminin sonucu %d'dir..",sonuc);
      break;

      case '2' :
          sonuc = a - b;
          printf("Cikartma isleminin sonucu %d'dir..",sonuc);
      break;

      case '3' :
          sonuc = a * b;
          printf("Carpma isleminin sonucu %d'dir..",sonuc);
      break;

      case '4' :
          sonuc = a / b;
          printf("Bolme isleminin sonucu %d'dir..",sonuc);
      break;
      default :
      printf ("Lutfen belirtilen karakterlerden biriniz seciniz..");
      }

     printf("icin enter tusuna basiniz..");

      fflush(stdin);
      getchar();
      return 0;
  }

