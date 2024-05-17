#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

size_t size = 0;

// typedef int Datatype;

// typedef struct Node {

//     Datatype data;
//     struct Node* next;

// } Node;

void push( Node** root, Datatype num) {
    
    Node* new_node = malloc(sizeof(Node));
    if( new_node == NULL ) {
        printf("Memory for New Node not Allocated !\n");
        exit(0);
    }

    new_node -> next = NULL;
    new_node -> data = num;

    size++;

    if( *root == NULL ) {
        *root = new_node;
        return;
    }

    Node* curr = *root;
    while( curr -> next != NULL )
        curr = curr-> next;
    
    curr -> next = new_node;
}

Datatype pop( Node** root) {
    
    if( *root == NULL ) {
        printf("List is empty !\n");
        exit(1);
    }

    Node* curr = *root;
    Node* prev = NULL;
    while( curr -> next != NULL ) {
        prev = curr;
        curr = curr -> next;
    }

    if( prev == NULL ) {
        Datatype temp = curr -> data;
        free(curr);
        *root = NULL;
        size--;
        return temp; 
    }
    size--;

    Datatype temp = curr -> data;

    free( curr );
    
    prev -> next = NULL;

    return temp;
    
}

int list_size(){
    return size;
}

void print_list( Node** root ){

     if( *root == NULL ) {
        printf("List is empty !\n");
        exit(1);
    }

    Node* curr = *root;
    while( curr != NULL ) {
        printf("%d\n", curr -> data);
        curr = curr -> next;
    }
}

void insert_node( Node** root, int pos, Datatype num ) {
   
    if( root == NULL ) {
        printf("List empty use push function !\n");
        exit(3);
    }

    if( pos == size + 1 ) {
            printf("To create a new node an the end of the list use the push fucntion !\n");
            exit(4);
    }

    Node* new_node = malloc(sizeof(Node));

    Node* prev = NULL;
    Node* curr = *root;
    for( int i = 0 ; i < pos - 1 ; i++ ) {
        prev = curr;
        curr = curr -> next;
    }

        new_node -> data = num;
        new_node -> next = curr;
    if( prev != NULL )
        prev -> next = new_node;
    else
        *root = new_node;

    size++;

}

void destroy( Node** root ){
    if( *root == NULL ) {
        printf("List is empty !\n");
        exit(1);
    }

    Node* prev = NULL;
    Node* curr = *root;
    while( curr != NULL ){
        curr = *root;
        while( curr != NULL ) {
            curr = curr -> next;
            prev = curr;
        }
        free(prev);
        
    }

    *root = NULL;
    size = 0;
}