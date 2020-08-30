#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAMES 100
struct Node
{
    int age;
  char *data;
  struct Node *next;
};

void  lawyerDavis(struct Node** head_ref, char *names, int age)
{
    struct Node* temp1= (struct Node*)malloc(sizeof(struct Node));
    struct Node *last = *head_ref;
    temp1->data = malloc(strlen(names)+1);
    temp1->age=age;
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
    struct Node* Node= (struct Node*)malloc(sizeof(struct Node));
    Node = node;

    printf("\nList of clients whose age is 41 or higher is-\n");
  while (node != NULL)
  {
      if(node->age >= 41)
      {
     printf("%s", node->data);
     printf("\n");
      }
     node = node->next;
  }
  printf("\n");
    printf("\nList of clients whose age is 48 or higher is-\n");
  while (Node != NULL)
  {
      if(Node->age >= 48)
      {
     printf("%s", Node->data);
     printf("\n");
      }
     Node = Node->next;
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
        int i, age;
        for(i=0;i<n;i++){
            char name[50];
            printf("Enter name-\n");
            scanf("%s",name);
            printf("Enter age-\n");
            scanf("%d",&age);
            lawyerDavis(&head,name, age);
        }
        printClient(head);
    }
    
    else if(k==2)
    {
        struct Node* head = NULL;
        printf("Enter How Many clients you want to add for lawyerDavis \n");
        int n;
        scanf("%d",&n);
        int i, age;
        for(i=0;i<n;i++){
            char name[50];
            printf("Enter name-\n");
            scanf("%s",name);
            printf("Enter age-\n");
            scanf("%d",&age);
            lawyerDavis(&head,name, age);
        }
        printClient(head);
    }
    else if(k==3)
    {
        struct Node* head = NULL;
        printf("Enter How Many clients you want to add for lawyerDavis \n");
        int n;
        scanf("%d",&n);
        int i, age;
        for(i=0;i<n;i++){
            char name[50];
            printf("Enter name-\n");
            scanf("%s",name);
            printf("Enter age-\n");
            scanf("%d",&age);
            lawyerDavis(&head,name, age);
        }
        printClient(head);
    }
    else if(k==4)
    {
        struct Node* head = NULL;
        printf("Enter How Many clients you want to add for lawyerDavis \n");
        int n;
        scanf("%d",&n);
        int i, age;
        for(i=0;i<n;i++){
            char name[50];
            printf("Enter name-\n");
            scanf("%s",name);
            printf("Enter age-\n");
            scanf("%d",&age);
            lawyerDavis(&head,name, age);
        }
        printClient(head);
    }
    else
    {
            printf("invalid");
    }
}