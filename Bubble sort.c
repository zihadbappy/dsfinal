#include <stdio.h>
int* bubble_sort(int i_store[], int i_size);
int* get_element(int i_size);
void display_element(int i_store[], int i_size);
int main()
{
    printf("\n\n\n");
    printf("\t\t\tBubble sort.");
    printf("\n\n\n");
	
	int i_store_size;
    printf("Enter the total number of items to store: ");
    scanf("%d", &i_store_size);

    int* ip_store = get_element(i_store_size);
    ip_store = bubble_sort(ip_store, i_store_size);
    printf("\n\nResult: \n");
    display_element(ip_store, i_store_size);

    return 0;
}
 
 int* get_element(int i_size)
{
    int* ip_store = malloc(sizeof(int) * i_size);
    int i_count = 0;
    int i_temp_size = i_size;
    while (i_temp_size)
    {
      printf("\nEnter item for index - %d : ", i_count);
      scanf("%d", (ip_store+i_count));
      i_count++;
      i_temp_size--;
    }

    display_element(ip_store, i_size);

    return ip_store;
}

int* bubble_sort(int i_store[], int i_size)
{
    int i_temp;
    int i_count_0, i_count_1;
    printf("\n\nSwapping Steps: \n");
    for (i_count_0 = (i_size - 1); i_count_0 > 0; --i_count_0)
    {
       for (i_count_1 = 1; i_count_1 <= i_count_0; ++i_count_1)
       {
           if (i_store[i_count_1 - 1] > i_store[i_count_1])
           {
              i_temp = i_store[i_count_1 - 1];
              i_store[i_count_1 - 1] = i_store[i_count_1];
              i_store[i_count_1] = i_temp;

              display_element(i_store, i_size);
           }
       }
    }
    return i_store;
}

void display_element(int i_store[], int i_size)
{
    printf("\n-------------------------------------------------------\n");
    printf("Elements stored in order: ");

    int i_ndx = 0;
    while (i_size)
    {
       printf("| %d |",i_store[i_ndx]);
       i_ndx++;
       i_size--;
    }
    printf("\n-------------------------------------------------------");
}

