//program mengitung luas segitiga
#include "stdio.h"

int alas;
int tinggi;
void HitungLuasSegitiga();

main(){
	printf("menghitung luas sebuah segitiga\n");
	HitungLuasSegitiga();
	printf("\nselesai");
}

void HitungLuasSegitiga()
{
	float Luas;
	printf("Alas : ");
	scanf("%d", &alas);
	printf("Tinggi : ");
	scanf("%d", &tinggi);
	Luas=(alas * tinggi)/2;
	printf("%4.2f", Luas);
 }
