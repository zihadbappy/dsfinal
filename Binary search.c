#include <stdio.h>
int main()
{
    printf("\n\n\n");
    printf("\t\t\tBinary Search.");
    printf("\n\n\n");
	
	int i, low, high, mid, n, key, array[100];
    printf("Enter the total number of elements: \n");
    scanf("%d",&n);
    printf("Enter %d integer elements: \n", n);
    for(i = 0; i < n; i++)
    scanf("%d",&array[i]);
    printf("Enter the value to find from the list: \n");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    mid = (low+high)/2;
    while (low <= high) 
	{
         if(array[mid] < key)
         low = mid + 1;
         else if (array[mid] == key) 
		 {
         printf("%d The search value is found at location %d \n", key, mid+1);
         break;
         }
        else
        high = mid - 1;
        mid = (low + high)/2;
    }
    if(low > high)
    printf("Not found! %d isn't present in the list", key);
    return 0;
}
