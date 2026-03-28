#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

struct node{
    uint8_t data;
    struct node* next;
};

struct node* createNode(struct node* temp,uint8_t *data)
{
    struct node* newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=*data;
    newNode->next=temp;
    temp=newNode;
    printf("data at head %x\n",temp->data);
    return temp;
}

struct node* removeNode(struct node* temp)
{
    struct node* t1=temp;
    printf("Removing data %x from head\n",temp->data);
    temp=temp->next;
    free(t1);
    printf("data at head %x\n",temp->data);
    return temp;

}

struct node* reverseLinkedList(struct node* temp)
{
    struct node* t1=temp;
    struct node* t2=NULL;
    while(temp!=NULL)
    {
        temp=temp->next;
        t1->next=t2;
        t2=t1;
        t1=temp;
    }
    return t2;
}

void printLinkedList(struct node* temp)
{
    while(temp!=NULL)
    {
        printf("data %x\n",temp->data);
        temp=temp->next;
    }
}

int main()
{
    {
        struct  node* head=NULL;
        uint8_t data;
        data=0x23;
        head=createNode(head,&data);
        data=0x43;
        head=createNode(head,&data);
        data=0x55;
        head=createNode(head,&data);
        head=removeNode(head);
        head=reverseLinkedList(head);
        printLinkedList(head);
    };
    
    return 0;
}