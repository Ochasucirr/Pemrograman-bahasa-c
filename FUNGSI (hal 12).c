//program fungsi rekursif faktorial
#include "stdio.h"

int Fak(int N);
main(){
int N;
printf("N! : ");scanf("%d",&N);
printf("\n%d! adalah %d", N, Fak(N)); }

int Fak(int N){
if (N == 0)
return 1;
else
return N*Fak(N-1);
}
