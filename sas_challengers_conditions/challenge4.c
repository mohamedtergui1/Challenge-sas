#include <stdio.h>
#include <stdlib.h>

int main()
{
       float a,b,c,delta,s1,s2;
       printf("entrer les valeur de l eqoition tu veux resodre (ax^2+bx+c)  ce forme => a/b/d :");scanf("%f/%f/%f",&a,&b,&c);
       delta=b*b-4*a*c;
       if (delta<0)printf("il ai aucun selition ");
       else if (delta>0){
           int r = sqrt(delta);
           s1= -b/(2*a) + r/(2*a);
           s2= -b/(2*a) - r/(2*a);
           printf("il a deux solition s1= %.2f \n                   s2= %.2f",s1,s2);
       }
        else {
           int r = sqrt(delta);
           s1= -b/(2*a);

           printf("il a deux solition s1= s2 = %.2f",s1);
       }

    return 0;
}
