#include<stdio.h>
int main()
{
    char str[80]="     kdsjkfsajkj.      fklsjaflkj jfskl      fjkksj";
    int count = 0, PAR[15], loc=1, NPAR=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==' ') count++;
        else count = 0;

        if(count==5){
            PAR[loc]= i+2;
            loc++;
            NPAR++;
        }
    }
    printf("NPAR = %d\n",NPAR);
    for(int i=1;i<=NPAR;i++)
    {
        printf("%d ",PAR[i]);
    }
}