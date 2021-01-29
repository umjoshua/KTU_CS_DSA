/*
Name: Circular Queue using array
Author: Joshua Mathew
email: umjoshua@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>
#define max 10
int queue[max],front=-1,rear=-1;

void display_queue();

int isEmpty(){
    if (front==-1)
        return 1;
    else return 0;
}
int isFull(){
    if((front==0 && rear==max-1) || front==rear+1)
        return 1;
    else return 0;
}

void enqueue(int num){
    if(isFull()){
        display_queue();
        printf("\nQueue is full\n");
        return;
    }
    if(front==-1)
        front=0;
    if(front==max-1)
        front=0;
    queue[++rear]=num;
    display_queue();
}
void dequeue(){
    if(isEmpty()){
        printf("\nQueue is empty\n");
        return;
    }
    if(front==rear){
        front=-1; rear=-1;
    }
    else if(front==max-1)
        front=0;
    else
        front=front+1;
    display_queue();
}
void display_queue(){
    if(isEmpty()){
        printf("\nQueue is empty\n");
        return;
    }
    printf("\nQueue is: \n");
    if(front<=rear){
        for(int i=front;i<=rear;i++)
            printf("%d ",queue[i]);
    }
    if(front>rear){
        for(int i=front;i<=rear;i++)
            printf("%d ",queue[i]);
        for(int i=0;i<=front;i++)
            printf("%d ",queue[i]);
    }
}
int main(){
    int choice,n;
    do{
    printf("\nEnter your choice:\n");
    printf("1. Enqueue 2. Dequeue 3. Display 4. Exit : ");
    scanf("%d",&choice);
    switch (choice){
        case 1: printf("Enter the element: ");
            scanf("%d",&n);
            enqueue(n);
            break;
        case 2: dequeue();
            break;
        case 3: display_queue();
            break;
        case 4: printf("Exiting..\n");
            exit(0);
        default: printf("Invalid choice\n");
    }
    }while(choice!=4);
}