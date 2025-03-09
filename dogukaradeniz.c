#include <stdlib.h>
#include <stdio.h>
int main (int argc , char** argv){
FILE *fp;
fp=fopen("dogukaradeniz.txt","r"); 
// Dogu-karadeniz dosyasini read modunda aciyor
if(fp==NULL)
{printf("dosya acilamadi\n");
   //eger dosya acilmazsa ekrana "dosya acilamadi" yazdirir ve dosyayi kapatir 
  //dosya acilirsa devam eder
}
   int girilen_plaka ,dosyadan_okunan_plaka;
   char sehir[50];
   int kontrol = 0 ;
   printf("aratacaginiz sehir plakasini girin=");
   scanf("%d", &girilen_plaka);
//kullanicidan plaka degeri alinir
   while (fscanf(fp, "%d %s", &dosyadan_okunan_plaka, sehir) != EOF) {
//Eger girilen plaka dosyada varsa, sehir adiyla birlikte ekrana yazdir
    if (dosyadan_okunan_plaka == girilen_plaka) {
        printf("%d plakali sehir %s, Dogu Karadeniz'dedir.\n", girilen_plaka , sehir);
        kontrol=1;
        break;}
    }
        if (kontrol==0)
        {
         printf("HATALI GIRIS \n Dogu karadenizde boyle bir sehir bulunmamaktadir");
     }   
   
   fclose(fp);
   //dosyayi kapatiyor
}
