#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x=0;
    printf("entrer  une  nomber entiee:");scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0)x++;
    }
    if (x==0)printf("le nomber est premier");
    else printf("le nomber est non premier");
    return 0;
}
