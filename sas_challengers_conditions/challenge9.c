#include <stdio.h>
#include <stdlib.h>

int main()
{
       char s;
       printf(" entrer aleatoire input:");scanf("%c",&s);
       int n=s;
       if (n<122 && n>97){
          printf("tu ai entrer une  chqrqcter minuscil");
       }
       else if (n>=65&&n<=90) printf("tu ai entrer une  chqrqcter minuscil");
       else printf(" ton input ne pas une charactere ");

    return 0;
}



