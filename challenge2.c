#include <stdio.h>
#include <stdlib.h>

int main()
{
  
     float temperature;
     printf("=>entrer le temperature en Fahrenheit:");scanf("%f",&temperature);
     temperature=(temperature-32)/1.8;
     printf(" # la temperateur en degre Celsius:%.1f",temperature);
     printf("\n sensation ressentie :");
     if (temperature<0) printf("\n * tres froid");
     else if (temperature<20) printf("\n *  froid");
     else if (temperature<35) printf("\n * chaud");
     else printf("\n * tres chaud");


    

    return 0;
}
