#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

struct node {
    int value;
    struct node* next;
};



struct node* reverseList(struct node* head) {

    struct node *current = head; // Current pointer
    struct node *prev = NULL;    // pointer to prev node
    struct node *next = NULL;    // pointer to next node

    // Traverse and make the pointer adjustments
    while(current!=NULL) {
        next = current->next; // Store next node so that it won't be lost during this reversal

        current->next = prev; // reverse pointer
        prev = current; // move next element on list

        current = next;
    }

    // Once reversal is done, return modified head
    head = prev;
    return head;
}



void printLinkedList(struct node* node) {

    while (node != NULL) {
        printf("%d\n",node->value);
        node = node->next;
    }

}







int main(void) {

    struct node* node1 = malloc(sizeof(struct node));
    struct node* node2 = malloc(sizeof(struct node));
    struct node* node3 = malloc(sizeof(struct node));
    struct node* node4 = malloc(sizeof(struct node));

    node1->value = 1;
    node1->next = node2;

    node2->value = 2;
    node2->next = node3;

    node3->value = 3;
    node3->next = node4;

    node4->value = 4;
    node4->next = NULL;

    head = node1;

    struct node *returnNode = reverseList(node1);

    printLinkedList(returnNode);




}