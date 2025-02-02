#include <stdio.h>
#include <stdlib.h>

/*
Coding a linked list in C, using pointers and structs. May not be perfect. Not using any tutorial of any kind, just using references 
on how to use pointers
*/


/*
Creating the Node struct
*/

struct node {
    int *num; /*The value in the node*/
    struct node *next; /*The pointer to the next node*/
}; 

struct node *add(struct node *, int i); /* Implementing the add function in a linkedList. Adds an integer to the end of the linked list*/

void printList(struct node *); /*Will print the Linked List*/

int size(struct node *); /* Returns the size of the Linked List*/

int get(struct node *, int i); /*Returns the element at that index in the linked List*/

int main() {
    struct node *root; 

    root = NULL; 

    printList(root); 

    root =  add(root, 1); 
    printList(root); 

    root = add(root, 2); 

    printList(root); 

    root = add(root, 3);

    printList(root); 

    int s = size(root); 

    printf("%d \n", s); 

    int x = get(root, 3); 

    printf("%d\n", x); 

    return 0; 
}

struct node *add(struct node *l, int i) {
    if (l == NULL) {
        int *p; 

        p = (int *) malloc(sizeof(int)); 

        *p = i; 

        l = (struct node *) malloc(sizeof(struct node)); 
        l -> num = p; 
        l -> next = NULL; 
    } else {
        l->next = add(l -> next, i); 
    }

    return l; 
}

void printList(struct node *l) {
    /*Points to the current node*/
    struct node *curr; 

    curr = l; 

    if (l == NULL) {
        /* First node is Null, hence empty list*/
        printf("[]\n"); 
    } else {
        printf("["); 

        while (curr != NULL) {

            printf("%d, ", *(*curr).num); 


            /*Set the current pointer to the next node*/
            curr = (*curr).next; 
        }

        printf("]\n"); 
    }
}

int size(struct node *l) {
    if (l == NULL) {
        return 0; 
    } else {
        int count = 0; 

        struct node *curr; 

        curr = l; 

        while (curr != NULL) {
            count += 1; 

            curr = (*curr).next; 
        }

        return count; 
    }

}

/*
Function will return -1 if the index is greater than the size of 
the list
*/
int get(struct node *l, int i) {
    if (i >= size(l)) {
        return -1; 
    } else {

        int count = 0; 

        struct node *curr; 

        curr = l; 

        while (count < size(l)) {
            if (count == i) {
                break; 
            } else {
                curr = (*curr).next; 
                count += 1; 
            }
        }

        return *(*curr).num; 
    }

}







