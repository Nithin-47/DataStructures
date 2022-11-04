
#include<stdio.h>
#include<stdlib.h>

#define stack_size 5

int st[10],item,top=-1;

void push()
{
    if(top==stack_size)
    printf("\nOverflow");
    else
    {
        top++;
        st[top]=item;
    }
}

int pop()
{   int del_item;
    if(top==-1)
    printf("\nUnderflow");
    else
    {
        del_item=st[top];
        top--;
    }
return(del_item);

}
void display()
{   int i=0;
if(top==-1)
printf("\nUnderflow");
else    
    {
        printf("\nStack:");
    for(i=0;i<=top;i++)
        {
        printf("\t%d",st[i]);
        }
    }
}

void main()
{   int choice,l;
while(1)
{


    printf("\n\n\t---MENU---\n");
    printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: printf("Enter the element to be pushed:");
                scanf("%d",&item);
                push();
                printf("Item has been pushed");
                break;
        case 2: l=pop();
                printf("Removed Item:%d",l);
                break;
        case 3: display();
                break;
        case 4: exit(0);
                break;


    }


}
}















