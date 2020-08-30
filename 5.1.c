#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAMES 100
struct Node
{
  char *data;
  struct Node *next;
};

void  lawyerDavis(struct Node** head_ref, char *names)
{
    struct Node* temp1= (struct Node*)malloc(sizeof(struct Node));
    struct Node *last = *head_ref;
    temp1->data = malloc(strlen(names)+1);
    strcpy(temp1->data,names);

    temp1->next=NULL;
    if (*head_ref == NULL)
    {
       *head_ref = temp1;
       return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = temp1;
    return;

}

void  lawyer2(struct Node** head_ref,char *names)
{
    struct Node* temp1= (struct Node*)malloc(sizeof(struct Node));
    struct Node *last = *head_ref;
    temp1->data = malloc(strlen(names)+1);
    strcpy(temp1->data,names);

    temp1->next=NULL;
    if (*head_ref == NULL)
    {
       *head_ref = temp1;
       return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = temp1;
    return;

}

void  lawyer3(struct Node** head_ref,char *names)
{
    struct Node* temp1= (struct Node*)malloc(sizeof(struct Node));
    struct Node *last = *head_ref;
    temp1->data = malloc(strlen(names)+1);
    strcpy(temp1->data,names);

    temp1->next=NULL;
    if (*head_ref == NULL)
    {
       *head_ref = temp1;
       return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = temp1;
    return;

}
void  lawyer4(struct Node** head_ref,char *names)
{
    struct Node* temp1= (struct Node*)malloc(sizeof(struct Node));
    struct Node *last = *head_ref;
    temp1->data = malloc(strlen(names)+1);
    strcpy(temp1->data,names);

    temp1->next=NULL;
    if (*head_ref == NULL)
    {
       *head_ref = temp1;
       return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = temp1;
    return;

}

void printClient(struct Node *node)
{
    printf("\nList of clients is-\n");
  while (node != NULL)
  {
     printf("%s", node->data);
     node = node->next;
     printf("\n");
  }
  printf("\n");
}

int main()
{

     int k;
    printf("Enter 1 for lawyer Davis. \nEnter 2 for lawyer Levine.  \nEnter 3 for lawyer Nelson. \nEnter 4 for lawyer Rogers. \n");
    scanf("%d",&k);
    if(k==1)
    {
        struct Node* head = NULL;
        printf("Enter How Many clients you want to add for lawyerDavis \n");
        int n;
        scanf("%d",&n);
        int i;
        for(i=0;i<n;i++){
            char name[50];
            scanf("%s",name);
            lawyerDavis(&head,name);
        }
        printClient(head);
    }
    
    else if(k==2){
        struct Node* head = NULL;
        printf("Enter How Many clients you want to add for lawyer2 \n");
        int n;
        scanf("%d",&n);
        int i;
        for(i=0;i<n;i++){
            char name[50];
            scanf("%s",name);
            lawyer2(&head,name);
        }
        printClient(head);
    }
    else if(k==3){
        struct Node* head = NULL;
        printf("Enter How Many clients you want to add for lawyer2 \n");
        int n;
        scanf("%d",&n);
        int i;
        for(i=0;i<n;i++){
            char name[50];
            scanf("%s",name);
            lawyer2(&head,name);
        }
        printClient(head);
    }
    else if(k==4){
        struct Node* head = NULL;
        printf("Enter How Many clients you want to add for lawyer2 \n");
        int n;
        scanf("%d",&n);
        int i;
        for(i=0;i<n;i++){
            char name[50];
            scanf("%s",name);
            lawyer2(&head,name);
        }
        printClient(head);
    }
    
    else
    {
            printf("invalid");
    }
}