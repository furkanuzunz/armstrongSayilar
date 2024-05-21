#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	
    
    int sayi = 0;
	int basamaksayisi = 0;
	int us= 0;
	int toplam= 0 ;
    int basamak = 0 ;
 	int eskisi = 0 ;
 
    printf("bir sayi giriniz\t");
    scanf("%d",&sayi);
    printf("girdiginiz sayi %d\n\n",sayi);
    
     eskisi = sayi ;

 while(sayi!=0)
  {
   sayi = sayi/10;
   basamaksayisi++;
 }
  printf("\ngirilen sayinin basamak sayisi\t%d",basamaksayisi); 
 
 sayi = eskisi;
	do
   
    {
    	 basamak = eskisi%10;
    	 eskisi = eskisi/10;
    	 
    	 printf("\n basamak %d\n",basamak);
    	 
    	us = pow(basamak,basamaksayisi);
        toplam = toplam + us;
    	
	} while(eskisi!=0);


   printf("\nbasamaklarin toplami %d\n\n",toplam);
   
    //sayi == eskisi ;
   
   if(toplam==sayi)
   {
   	printf("girdiginiz sayi bir armstrong sayidir");
   }
  else if(toplam!=sayi)
  {
  	printf("girdiginiz sayi bir armstrong sayi degildir");
  }
   
 
  

  
 

	return 0;
}