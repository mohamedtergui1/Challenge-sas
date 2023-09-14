#include <stdio.h>
#include <stdlib.h>

int main()
{
      char s;
      printf("entrer une seul character : ");scanf("%c",&s);
      int n = s;
      if (s<=90 && s>=65)printf("lphabet est majuscule ");
      else printf("lphabet minuscule ");


    return 0;
}
