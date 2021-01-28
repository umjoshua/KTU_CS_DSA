/*
Name: Stack using array.
Author: Joshua Mathew
email: umjoshua@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>
#define max 10
int stack[max],top=-1;
void push(int n){
    if(top==max-1){
        printf("Stack overflow..\n");
        return;
    }
    else stack[++top]=n;
}
void pop(){
    if(top==-1){
        printf("Stack underflow..\n");
        return;
    }
    printf("Popped element: %d \n",stack[top]);
    top--;
}
void display_stack(){
    printf("Stack is : \n");
    for(int i=0;i<=top;i++){
        printf("%d ",stack[i]);
    }
    printf("\n");
}
int main(){
    int choice,n;
    do{
    printf("\nEnter your choice:\n");
    printf("1. Push 2. Pop 3. Display 4. Exit : ");
    scanf("%d",&choice);
    switch (choice){
        case 1: printf("Enter the element: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2: pop();
            break;
        case 3: display_stack();
            break;
        case 4: printf("Exiting..\n");
            exit(0);
        default: printf("Invalid choice\n");
    }
    }while(choice!=4);
}