#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,x=0,y=0,z=0;
     printf("entre le nomber des notes:");scanf("%d",&n);
     if(n==0){
        printf("erreur");return 0;
     }
     float tab[n];
     for (int i=0; i<n;i++){
        printf("entrer la note %d:",i+1);scanf("%f",&tab[i]);
     }
      printf("le nomber des note est:%d",n);
      float somme =0;
       for (int i=0; i<n;i++)somme+=tab[i];
       printf("\nle moyenne est :%02.2f",somme/n);
        for (int i=0; i<n;i++){
        if (tab[i]<(float) somme/n){printf("\nla note %d est infereur a moyenne",i+1);x++;}
        else if (tab[i]>(float)somme/n)  {printf("\nla note %d est suppireur a moyenne",i+1);y++;}
        else  {printf("\nla note %d egale la moyenne",i+1);z++;}
     }
     printf("\nle nomber des note infereur a moyenne:%d",x);
     printf("\nle nomber des note suppireur a moyenne:%d",y);
     printf("\nle nomber des note egale la moyenne:%d",z);
     float max=tab[0],min=max;
     int o=0,p=0;
     for (int i=1; i<n;i++){
        if(max<tab[i]){
                o=i;
                max=tab[i];
        }
     }
     for (int i=1; i<n;i++){
        if(min>tab[i]){
            p=i;
            min=tab[i];}
     }
     printf("\nla note %d est le max = %02.2f",o+1,tab[o]);
     printf("\nla note %d est le min = %02.2f",p+1,tab[p]);

    return 0;
}
