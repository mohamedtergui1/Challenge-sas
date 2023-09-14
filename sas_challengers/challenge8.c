#include <stdio.h>
#include <stdlib.h>

int main()
{
      char tab[16] = "0123456789ABCDEF";
      int n,m,s;
      printf("entre  une nomber :");scanf("%d",&n);
      m=n%16;s=n/16;
      printf("%c%c", tab[s], tab[m]);
    return 0;
}
