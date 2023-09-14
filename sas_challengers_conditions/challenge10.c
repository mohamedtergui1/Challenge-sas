#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aa,mm,jj;
        printf("donnee la date ce formme 15/09/2012:");scanf("%d/%d/%d",&jj,&mm,&aa);
         if (jj<10&&mm<10)printf("0%d-0%d-%d",jj,mm,aa);
         else if (jj<10) printf("%d-0%d-%d",jj,mm,aa);
         else if (mm<10) printf("0%d-%d-%d",jj,mm,aa);
         else  printf("%d-%d-%d",jj,mm,aa);
    return 0;
}



