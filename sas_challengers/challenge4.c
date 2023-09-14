#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c,d,somme;
    float moyenne;
      printf("entrer la valeur de nomber1:");scanf("%d",&a);
      printf("entrer la valeur de nomber2:");scanf("%d",&b);
      printf("entrer la valeur de nomber3:");scanf("%d",&c);
      printf("entrer la valeur de nomber4:");scanf("%d",&d);
      somme=a+b+c+d;
      moyenne=(float)somme/4;
      printf("la somme est :%d",somme);
      printf("\nla moyenne est : %.2f",moyenne);

}
