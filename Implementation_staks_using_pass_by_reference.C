
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100






void push(int stack[],int *top,int *ptr)
{   
    if(*top==SIZE)
    {
        printf("Overflow");
    }
    else
    {
    
    stack[++(*top)]=*ptr;
    }
    
    
}

int pop(int *top,int stack[])
{
    int del_item;
    if(*top==-1)
    {
    printf("\nUnderflow");
    }
    else    
    {
        del_item=stack[*top];
        (*top)--;
        return del_item;
    }
    
    
}


void display(int *top,int stack[])
{   
    int i;
    if(*top==-1)
    printf("\nUnderflow");
    else    
    {
        printf("\nElements inside the Stack:");
        for(i=0;i<=(*top);i++)
        {
        printf("\t%d",stack[i]);
        }
    }
}




int main()
{
    int choice,l,item,stack[SIZE],top=-1;

while(1)
{


    printf("\n\n\t---MENU---\n");
    printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: printf("Enter the element to be pushed:");
                scanf("%d",&item);
                push(stack,&top,&item);
                printf("Item has been pushed");
                break;
        case 2: l=pop(&top,stack);
                printf("Removed Item:%d",l);
                break;
        case 3: display(&top,stack);
                break;
        case 4: exit(0);
                break;


    }


}











    return 0;
}