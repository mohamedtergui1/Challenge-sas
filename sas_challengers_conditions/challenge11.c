#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    n = rand() % 7 ;

     switch (n){
          case 1 : printf("Lundi");break;
          case 2 : printf("mardi");break;
          case 3 : printf("mercredi");break;
          case 4 : printf("jeudi");break;
          case 5 : printf("vendredi");break;
          case 6 : printf("samedi");break;
          case 7 : printf("dimanche");break;
          default: printf("aucin jeur"); break;
     }

    return 0;
}



