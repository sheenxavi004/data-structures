#ifndef _LL_H_
#define _LL_H_
// Create a structure that will define a node in linked list.
typedef struct node{
    int data;
    struct node* link;
} node;
// Function to create a node for Linked List from heap
node* getNodeLL(int data);
node* newLL(int data);
node* insertNodeAtEndLL(node* root, int data);
node* insertNodeAtBegLL(node* head, int data);
node* deleteNodeAtBegLL(node* head);
void displayLL(node* head);
#endif