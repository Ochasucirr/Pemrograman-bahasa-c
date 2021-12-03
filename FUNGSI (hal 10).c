//program fungsi f(x)=2x2+5x-8
#include "stdio.h"

float F(float X);

main(){
int X;
printf("X : ");scanf("%d",&X);
printf("\nF(X) : %f",F(X));

}
float F(float X){
float Y;
Y = 2*X*X + 5*X - 8;
return Y;
}
