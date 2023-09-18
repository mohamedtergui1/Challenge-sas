#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p=0,o=0;
    char t[]="Quel sinistre mot !";
   int  s[2],m;
    for(int i=0;t[i]!='\0';i++){
        if(t[i]=='s'){
            s[o]=i;
            o++;

        }
        else if(t[i]=='m'){
            p=i;
        }
    }
    printf("\nles position de s est: %d-%d",s[0]+1,s[1]+1);
    printf("\nles position de m est: %d\n",p+1);

    for(int i=0;i<o;i++){
            int l=s[i];
        char temP=t[p];
        t[p]=t[l];
        t[l]=temP;
    }
    for(int i=0;t[i]!='\0';i++)printf("%c",t[i]);


    char d;
    printf("\nentrer une  chrachter:"); scanf("%c",&d);

    for(int i=0;t[i]!='\0';i++){
        if(t[i]==d){
            printf("la position de character %c:%d",d,i+1);
            return 0;
        }
    }
    printf("error!!");
    return 0;
}
