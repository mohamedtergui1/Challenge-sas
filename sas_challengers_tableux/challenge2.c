#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[10];
    for (int i=0;i<10;i++){
        printf("element %d:",i+1); scanf("%d",&tab[i]);
    }
     for (int i=0;i<10;i++){
        printf("element %d:%d\n",i+1,tab[i]);
    }
    int min= tab[0];
    for (int i=1;i<10;i++){
       if(min>tab[i])min=tab[i];
    }
     int max= tab[0];
    for (int i=1;i<10;i++){
       if(max<tab[i])max=tab[i];
    }
    printf("\nle max est : %d",max);
    printf("\nle min est : %d",min);
    return 0;
}
