#include <stdio.h>
#include <stdlib.h>

int main()
{   char nom [100];int n=0;
    printf("entrer ton nom :");scanf("%s",nom);
    for(int i=0;nom[i]!='\0';i++){
        n++;
    }
    printf("le nomber de chractere est egal = %d",n);
    return 0;
}
