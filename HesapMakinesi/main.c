#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
     int sayi , sayi1;
     float sonuc;
     char ch;
     
     printf("Lutfen iki adet sayi giriniz :\n");
     scanf("%d%d" ,&sayi , &sayi1);
     printf("Lutfen yapmak istediginiz islemi seciniz\n");
     fflush(stdin); // bufferi temizlemek icin
     scanf("%c" , &ch);
     if (ch == '+') {
          sonuc = sayi + sayi1;
          printf("Toplama sonucu :%f\n" , sonuc);
     }else if (ch == '-'){
          sonuc = sayi - sayi1;
          printf("Cikarma sonucu :%f\n" , sonuc);
     }else if (ch == '*'){
          sonuc = sayi * sayi1;
          printf("Carpma sonucu :%f\n" , sonuc);
     }else if(ch == '/'){
          sonuc = sayi / sayi1 ;
          printf("Bolme sonucu :%f\n" , sonuc);
     }else
          printf("Lutfen gecerli bir islem seciniz...\n");
     
     
     return 0;
}
