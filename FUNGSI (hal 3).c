/* Contoh fungsi sederhana */
#include <stdio.h>

long cube(long x);

long input, answer;

main()
{
printf("Masukan nilai integer: ");
scanf("%d", &input);
answer = cube(input);
/* catatan: %ld specifier konversi untuk */
/* long integer */
printf("\n pangkat 3 dari %ld adalah %ld.\n", input, answer);

return 0;
}

/* fungsi: cube() – menghitung pangkat 3 dari sebuah nilai */
long cube(long x)
{
long x_cubed;

x_cubed = x * x * x;
return x_cubed;
}
