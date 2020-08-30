#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char L_name[6][10]={"adam","Bailey","Cheng","Davis","Edward","Fox"},
     G_name[6][10]={"Bruce","Irene L","Kim","John C","Steven","Kenneth"};
int  year[6]={2,4,1,2,3,2},L=2 , i,j, itte=0,p,UB,LB, f=0;
float cum[6]={2.55,3.25,3.40,2.85,1.75,2.80},k=3.0;
char SOC[6][12]={"211-58-1329","169-38-4248","166-48-5842","187-52-4076","126-63-6382","135-58-9565"};


        for(i=0;i<6;++i)
        {
        if(strcmp(SOC[i],"166-48-5842")==0)
        {
            f=1;
        printf("Element found at LOC %d\n",i+1);
        printf(" %s: name : %s %s cum: %f \n\n",SOC[i],L_name[i],G_name[i],cum[i]);
        }
        }

if(f==0)
printf("Element not found\n");
return 0;
}