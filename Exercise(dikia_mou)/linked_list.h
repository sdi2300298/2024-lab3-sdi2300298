#include <stdio.h>
#include <stdlib.h>


typedef int Datatype;

typedef struct Node {

    Datatype data;
    struct Node* next;

} Node;


void push( Node** root, Datatype num);
Datatype pop( Node** root);
int list_size();
void print_list( Node** root );
void insert_node( Node** root, int pos, Datatype num );
void destroy( Node** root );