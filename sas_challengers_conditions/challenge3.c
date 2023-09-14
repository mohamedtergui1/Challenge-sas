#include <stdio.h>
#include <stdlib.h>

int main()
{
      int aa;
      printf("entrer le nombere de l annee  tu veux  convirte:");scanf("%d",&aa);
      printf("le nombere de mois est :%d",12*aa);
      printf("\nle nomber de joures :%d",12*30*aa);
      printf("\nle nomber de heurs :%d",12*30*24*aa);
      printf("\nle nomber de minutes:%d",12*30*24*60*aa);
      printf("\nle nomber de seconds:%d",12*30*24*60*60*aa);

    return 0;
}
