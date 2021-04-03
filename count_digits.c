#include<stdio.h>
#include<math.h>
int main(){
    double n,m;
    printf("Enter a number : \n");
    scanf("%lf",&n);
    m=log10(n);
    printf("Number of digits = %lf",m+1);
    return 0;
}
