#include <stdio.h>
#include <stdlib.h>

int main()
{
    char voyel;
    printf ("entret une seul charactere:");scanf("%c",&voyel);
        switch (voyel){
        case 'a' : printf("le charachtere est une voyelle "); break;
        case 'e' : printf("le charachtere est une voyelle "); break;
        case 'u' : printf("le charachtere est une voyelle "); break;
        case 'i' : printf("le charachtere est une voyelle "); break;
        case 'o' : printf("le charachtere est une voyelle "); break;
        case 'y' : printf("le charachtere est une voyelle "); break;
        default : printf("le charachtere est n pas une voyelle ");
        }
    return 0;
}
