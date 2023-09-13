#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float xa,xb,ya,yb,distance;
    printf("entrer les cordonnee de A ce formme xa,ya :");scanf("%f,%f", &xa, &ya);
    printf("entrer les cordonnee de A ce formme xb,yb :");scanf("%f,%f", &xb, &yb);
    distance = sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb) );
    printf("la distance est : %.2f",distance);

}
