#include <stdio.h>
//asal sayi mi de�il mi ?

int asal_mi(int sayi) {
	int i;
	
	for(i = 2 ; i < sayi ; i++){
		if (sayi % i ==0){
			return 0;
		}
	}
	return 1 ;
}

int main() {
	int n;
	
	printf("Bir Sayi Giriniz:");
	
	scanf("%d", &n);
	
	if (asal_mi(n) == 0) {
		printf("Bu Sayi Asal Sayi Degildir.");
		
		
	}
	else {
		printf("Bu asal sayidir.");
	}
	return 0;
}
