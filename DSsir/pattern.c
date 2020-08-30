#include<stdio.h>
#include<stdlib.h>

void main()
{
    char str[100], search[50];
    int flag,j=0, i=0,c1=0,c2=0,count=0,n=0;
    printf("input the string : \n");
    fgets(str,sizeof str,stdin);
    printf("input the substring to search: \n");
    fgets(search,sizeof search,stdin);

while(str[c1]!='\0')
    c1++;
c1--;
while(search[c2]!='\0')
   c2++;
c2--;



for(i=0;i<=c1-c2;i++)
{
for(j=i;j<i+c2;j++)
{


    flag=1;
if(str[j]!=search[j-i])
{flag=0;
    break;
}

}
 count++;
if (flag==1)
 {

    printf("substring exists and the position is :%d \n",count);}
}


if (flag==1)
     {

    printf("yes substring exists");}

else
{
     printf("substring not exists");}
return 0;
    }







