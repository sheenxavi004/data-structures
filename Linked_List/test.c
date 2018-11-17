#include "ll.h"
#include<stdio.h>
#include<stdlib.h>
// Driver program to run the linked lists
int main()
{
    node* ll=NULL;
    int data,nodeLimit,loopIterator;
    printf("Enter the root node value to create a linked list instance\n");
    scanf("%d",&data);
    // Create an instance of linked list
    ll=newLL(data);
    printf("How many more nodes you want to enter in linked list?\n");
    scanf("%d",&nodeLimit);
    for(loopIterator=0;loopIterator<nodeLimit;loopIterator++){
        scanf("%d",&data);
        // Push more data to linked list
        ll=insertNodeAtEndLL(ll,data);
    }
    /* Write Code here to test the various funtions for linked list */
    printf("Linked list traversal:\n");
    displayLL(ll);
    return 0;
}