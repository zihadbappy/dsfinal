#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of vector element: ");
    scanf("%d", &n);

    int a[n], b[n];

    printf("\nEnter elements for vector A-----------\n");
    for(int i=0;i<n;i++){
    printf("Element no. %d: ", i+1);
    scanf("%d",&a[i]);
    }
    
    printf("\nEnter elements for vector B-----------\n");
    for(int i=0;i<n;i++){
    printf("Element no. %d: ", i+1);
    scanf("%d",&b[i]);
    }

    int x, y;
    printf("\nEnter value of X: "); scanf("%d", &x);
    printf("\nEnter value of Y: "); scanf("%d", &y);

    // 5.14A
    int ans[n];
    printf("\n\nAns of 5.14(a): ");
    for(int i=0;i<n;i++)
    {
    ans[i]= a[i]*x + b[i]*y;
    printf("%d ", ans[i]);
    }
    
    // 5.14B
    int mult=0;
    for(int i=0;i<n;i++)
    mult+= a[i]*b[i];
    printf("\n\nAns of 5.14(b): %d", mult);

    return 0;
}