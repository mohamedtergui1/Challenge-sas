#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    printf("entrer le nomber de ligne   de pyramide:");scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=n;j>-n+1;j--){
                int m=j;
            if(j<0)m=-j;
            if (i>m)printf("*");
            else  printf(" ");
        }
        printf("\n");
    }

    return 0;
}
