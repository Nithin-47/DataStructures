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



//For deleting at the end-


NODE delete_end(NODE first)
{
    NODE prev,curr;

    if(first==NULL)
    {
        printf("Nothing to delete");
        return NULL;
    }

    // prev=getnode();
    // curr=getnode();

    prev=NULL;
    curr=first;

    while(curr->next!=NULL)
    {   
        prev=curr;
        curr=curr->next;
    }

    prev->next=NULL;
    printf("Deleted Item:%d",curr->value);
    free(curr);
    return(first);
}



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

 int choice, item, x,pos;
    NODE first = NULL;
    while (1)
    {
        printf("\n\nMenu\n-----------------------------------------\n1) Push to stack\n2) Pop from stack\n3) Display\n4) Exit\n-----------------------------------------\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {   
        case 1: printf("Enter the element to be pushed:");
                scanf("%d",&item);
                first=insert_end(first,item);
                printf("Item has been Pushed to the stack.");
                break;
        case 2: first=delete_end(first);
                printf("\nItem has been popped from the stack.");
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