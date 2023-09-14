#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;
      printf("entrer la moyenne:");scanf("%f",&n);
      if (n<10)printf(" recale");
      else if (n<12)printf("mention passable");
      else if (n<14)printf("mention assez bien");
      else if (n<16)printf("mention bien ");
      else printf("menyion tres bien");
    return 0;
}



