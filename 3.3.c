#include<stdio.h>
int main()
{
    char str[80]="     To      Be or      not     to     be";
    int count = 0, PAR[15], loc=1, NPAR=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==' ') count++;
        else count = 0;

        if(count==5){
            PAR[loc]= i;
            loc++;
            NPAR++;
        }
    }
    printf("NPAR = %d\n",NPAR);
    for(int i=1;i<=NPAR;i++)
    {
        printf("%d ",PAR[i]);
    }
    printf("\n");

    int j, k, temp;
    scanf("%d %d",&j, &k);

    temp=PAR[j];
    PAR[j]=PAR[k];
    PAR[k]= temp;

     printf("\n %c ",str[6]);
    for(int i=1;i<=NPAR;i++)
    {
        int ite= PAR[i];

        printf("%d ",ite);
        printf("\n %c ",str[ite]);
        printf("\n %c ",str[ite]);
        }
    


}