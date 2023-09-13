#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,s;
    printf("entrer la valeur de n : ");scanf("%d",&n);
    s= (n%10);
    printf("%d",s);
    s= (n%100-s)/10;
    printf("%d",s);
    s=( n%1000-s)/100;
    printf("%d",s);


}
