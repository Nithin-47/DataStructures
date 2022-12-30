#include<stdio.h>
#include<stdlib.h>

struct node{
int value;
struct node *next;
};


typedef struct node *NODE;

//For allocating memory space-

NODE getnode()
{
    NODE temp;
    temp=(NODE)malloc(sizeof(struct node));

    if(temp==NULL)
    {
        printf("Memory could not be allocated.");
    }

    return(temp);

}


//For inserting at the end-

NODE insert_end(NODE first,int item)
{
    NODE New,last;
    New=getnode();
    New->value=item;
    New->next=NULL;

    if(first==NULL)
        return New;
   
    if(first->next==NULL)
    {
    first->next=New;
    return first;
    }
  
    // last=getnode();
    last=first;

    while(last->next!=NULL)
        last=last->next;
    
    last->next=New;



    return first;

}


//For deleting at the beginning-

NODE delete_beg(NODE first)
{
    NODE temp;
    // temp=getnode();

    if(first==NULL)
    {
        printf("There is nothing to delete");
        return NULL;
    }

    temp=first;
    temp=temp->next;

    printf("Item has been deleted:%d\n",first->value);
    free(first);

    return(temp);
}



//For displaying-

void display(NODE first)
{
    NODE temp;
    // temp=getnode();
    temp=first;

    while(temp!=NULL)
    {
        printf(" %d",temp->value);
        temp=temp->next;
    }
}


int main(){

 int choice, item;
    NODE first = NULL;
    while (1)
    {
        printf("\n\nMenu\n-----------------------------------------\n1) EnQueue\n2) DeQueue\n3) Display\n4) Exit\n-----------------------------------------\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {   
        case 1: printf("Enter the element to be pushed:");
                scanf("%d",&item);
                first=insert_end(first,item);
                printf("Item has been inserted to the Queue.");
                break;
        case 2: first=delete_beg(first);
        
                printf("\nItem has been Deleted from the Queue.");
                break;
        case 3: display(first);
                break;
        case 4: exit(0);
        default:
        printf("Please Enter the correct value.");
            break;
        }
}

return 0;
}