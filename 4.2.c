#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
     int ARRAY[20],i,ITEM,LB=0,UB, f=0;
    printf("Enter number of elements:\n");
    scanf("%d",&UB);

    printf("Enter %d integers:\n", UB);

    for(i=LB;i<UB;++i)
        scanf("%d",&ARRAY[i]);
    printf("Enter element to search:");
    scanf("%d",&ITEM);

    for(i=LB;i<UB;++i)
        {if(ARRAY[i]==ITEM)
        {
        printf("Element found at LOC %d\n",i+1);
        f=1;
        }
        }
        if(f==0)
        printf("Element not found \n");
    return 0;
}