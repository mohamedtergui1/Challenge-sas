#include <windows.h>
#include <stdio.h>

int main() {
    char nom[20],prenom[20],sexe[10];
    int age ;
    int numero;

            printf("entrer votr nome :");scanf("%s",nom);
            printf("entrer votr prenom :");scanf("%s",prenom);
            printf("entrer votr age :");scanf("%d",&age);
            printf("entrer votr sexe :"); scanf("%s",&sexe);
            printf("entrer votr numero de telephone :");scanf("%d",&numero);


            printf("\n *  nome :%s",nom);
            printf("\n *  prenom :%s",prenom);
            printf("\n *  age :%d",age);
            printf("\n *  sexe :%s",sexe);
            printf("\n *  numero de telephone :0%ld",numero);

    return 0;
}
