#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char L_name[6][10]={"Adam","Bailey","Cheng","Davis","Edward","Fox"},
     G_name[6][10]={"Bruce","Irene L","Kim","John C","Steven","Kenneth"},name[10];
int  year[6]={2,4,1,2,3,2},SOC[6]={211-58-1329,169-38-4248,166-48-5842,187-52-4076,126-63-6382,135-58-9565},L=2;
float cum[6]={2.55,3.25,3.40,2.85,1.75,2.80},k=3.0;
int LB=0, UB=6, mid, loc=-1;

printf("enter last name:\n");
scanf("%s",name);

while(LB<=UB)
{
    mid=(LB+UB)/2;
    if(strcmp(L_name[mid], name)==0)
    {
    loc=mid+1;
    break;
    }

    else if(strcmp(name,L_name[mid])>0)
        LB=mid+1;
    
    else if(strcmp(name,L_name[mid])<0)
        UB=mid-1;
}

if(loc!=-1) printf("LOC = %d", loc);
else printf("not found");



printf("\n");
return 0;
}