#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b;
    float resultat;
    char c;
    printf("entre oppiration tu peux te calculer:");scanf("%d%c%d", &a, &c, &b);
    if (c='+')resultat=a+b;
    else if (c='-')resultat=a-b;
    else if (c='*')resultat=a*b;
    else if (c='/')resultat=a/b;
    else if (c='%')resultat=a%b;

    printf("le resultat est : %.2f ",resultat);
    return 0;
}
