#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int jour, mois, annee;

    printf("Entrer la date (jour/mois/annee): ");
    scanf("%d/%d/%d", &jour, &mois, &annee);

    printf("%d-", jour);

    switch (mois) {
        case 1: printf("Janvier"); break;
        case 2: printf("Fevrier"); break;
        case 3: printf("Mars"); break;
        case 4: printf("Avril"); break;
        case 5: printf("Mai"); break;
        case 6: printf("Juin"); break;
        case 7: printf("Juillet"); break;
        case 8: printf("Aout"); break;
        case 9: printf("Septembre"); break;
        case 10: printf("Octobre"); break;
        case 11: printf("Novembre"); break;
        case 12: printf("Decembre"); break;
        default: printf("Error"); break;
    }

    printf("-%d\n", annee);

    return 0;
}
