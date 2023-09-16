#include <stdio.h>
#include <stdlib.h>

int main()
{
      int n;
      printf("entrer une nomber entiee:");scanf("%d",&n);
      int x=0,s=1;
      while(1){
         if   (n-(n%s)==0 ) break;
        x++;
        s=s*10;
      }
      int outp=0,o=1;s=10;
      for (int i=1;i<=x;i++){
        outp = (n%s-outp)/o;

         printf("%d",outp);
         s*=10;
              o*=10;
          }

    return 0;
}
