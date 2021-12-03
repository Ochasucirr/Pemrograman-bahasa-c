/* Contoh program Call by Value */
#include <stdio.h>
void Secara_Nilai(float A, float B, char C);

main()
{
char C='a';
float A = 25, *Alamat_A;
Alamat_A=&A;
Secara_Nilai(A,A/3,C);
printf("Di fungsi utama setelah memanggil fungsi Secara_Nilai:\n");
printf("Nilai A adalah %f di alamat %p\n”, A, Alamat_A");
printf("Nilai A/3 adalah %f\n", A/3);
printf("Nilai karakter C adalah %c\n", C);
}
void Secara_Nilai(float A, float B, char C)
{
float *Alamat_A;
Alamat_A=&A;
A=7;
printf("Di fungsi Secara_Nilai:\n");
printf("Nilai A adalah 5f di alamat %p\n",A,Alamat_A);
printf("Nilai B adalah %f\n",B);
printf("Nilai karakter C adalah %c\n\n",C);
}
