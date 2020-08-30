#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char L_name[6][10]={"adam","Bailey","Cheng","Davis","Edward","Fox"},
     G_name[6][10]={"Bruce","Irene L","Kim","John C","Steven","Kenneth"};
int  year[6]={2,4,1,2,3,2},  L=2 , i,j, itte=0,p,row,column;
float cum[6]={2.55,3.25,3.40,2.85,1.75,2.80},k=3.0;


 printf("The students name whose cum is greater than k=3.0 :   \n\n ");
for(i=0;i<6;i++)
{
    if(cum[i]>=k){
    printf("%s %s: %f\n",L_name[i],G_name[i],cum[i]);
    }
}
printf("\n\n");

printf("The students name whose Year, L =2:       \n\n");
for(i=0;i<6;i++)
{
if(year[i]>=L)
    {
    printf(" %s %s: %d\n",L_name[i],G_name[i],year[i]);
}
    
}


printf("\n");
return 0;
}