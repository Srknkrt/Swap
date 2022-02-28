#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{	
	int sayi1,sayi2;														//Degiskenler olusturuldu.
	
	srand(time(NULL));
	
	sayi1=rand()%100+1;														//Olusturulan degiskenlere rastgele sayilar atandi.
	sayi2=rand()%100+1;
	
	printf("Birinci sayi: %d\nIkinci sayi: %d\n\n",sayi1,sayi2);			//Sayilar ekrana bastirildi.
	
	sayi1=sayi1+sayi2;
	sayi2=sayi1-sayi2;														//Swap islemi yapildi.
	sayi1=sayi1-sayi2;
	
	printf("Degistirilme isleminden sonra birinci sayi: %d\n",sayi1);		//Sayilarin degistirildikten sonraki hali ekrani bastirildi.
	printf("Degistirilme isleminden sonra ikinci sayi: %d\n",sayi2);
	
	getchar();
	return 0;
}
