#include "ll.h"
#include<stdio.h>
#include<stdlib.h>
// getNode function creates a node for the linked list
node* getnode(int data){
    node* newNode;
    newNode=(node*)malloc(sizeof(node));
    newNode->data=data;
    newNode->link=NULL;
    return newNode;
}
// insertNodeAtEndLL funtion inserts a node to end of linked list
node* insertNodeAtEndLL(node* head, int data){
    if(head==NULL){
        head=getnode(data);
    }
    else{
        head->link=insertNodeAtEndLL(head->link,data);
    }
    return head;
}
// insertNodeAtBegLL funtion inserts a node to begining og linked list
node* insertNodeAtBegLL(node* head, int data){
    if(head==NULL){
        head=getnode(data);
    }
    else{
        node* newNode=getnode(data);
        newNode->link=head;
        head=newNode;
    }
    return head;
}
node* newLL(int data){
    node* newLL=NULL;
    newLL=insertNodeAtEndLL(newLL,data);
}
node* deleteNodeAtBegLL(node* head){
    if(head==NULL) return head;
    node* begNode=head;
    head=head->link;
    begNode->link=NULL;
    free(begNode);
    return head;
}
void displayLL(node* head){
    node* traversePtr=head;
    while(traversePtr!=NULL){
        printf("%d ",traversePtr->data);
        traversePtr=traversePtr->link;
    }
}