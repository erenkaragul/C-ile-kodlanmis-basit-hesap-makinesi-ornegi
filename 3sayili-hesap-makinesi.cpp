#include <stdio.h>   //stabil header tanimlaridir.
#include <stdlib.h>

  /*Eren KARAGÜL (https://erenkaragul.com) switch case ile 3 sayı ile 4 islem yapan program*/

   int main()
   {
      int a,b,c,sonuc;
      char secim;
      

      printf ("a sayisini girin = ");/*Birinci sayiyi giriyoruz*/
      scanf ("%d",&a);
      fflush(stdin);
      
      printf ("b sayisini girin = ");/*ikinci sayiyi giriyoruz*/
      scanf ("%d",&b);
      fflush(stdin);
      
      printf ("c sayisini girin = ");/*ücüncü sayiyi giriyoruz*/
      scanf ("%d",&c);
      fflush(stdin);
    

     printf ("..Yapmak istediginiz islemi seciniz (+ toplama , - cikartma, * carpma, / bolme, [+ , - , * , /]..");/*islem secme ekranini buradan duzeltebilirsiniz.*/
     secim = getchar();
     
     switch(secim)
      {
      case '+' :
          sonuc = a + b + c;
          printf("Toplama isleminin sonucu %d'dir..",sonuc);
      break;

      case '-' :
          sonuc = a - b - c;
          printf("Cikartma isleminin sonucu %d'dir..",sonuc);
      break;

      case '*' :
          sonuc = a * b * c;
          printf("Carpma isleminin sonucu %d'dir..",sonuc);
      break;

      case '/' :
          sonuc = a / b / c;
          printf("Bolme isleminin sonucu %d'dir..",sonuc);
      break;
      default :
      printf ("Secim yapmadiniz"); /* Eksik ya da hatali secimlerde gelecek default mesaj ekrani*/
      }

     printf("islem sona erdi enter tusuna basiniz.");

      fflush(stdin);//
      getchar();//
      return 0;
  }
