#include<stdio.h>
#include<stdlib.h>
#define max 10
int queue[max],front=-1,rear=-1;
void enqueue(int num){
    if(front==-1)
        front=0;
    if(rear==max-1){
        printf("Queue overflow\n");
        return;}
    queue[++rear]=num;
}
void dequeue(){
    if(front==-1 || front>rear){
        printf("Queue underflow..\n");
        return;
    }
    front=front+1;
}
void display_queue(){
    printf("Queue is: \n");
    for(int i=front;i<=rear;i++){
        printf("%d ",queue[i]);
    }
    printf("\n");
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