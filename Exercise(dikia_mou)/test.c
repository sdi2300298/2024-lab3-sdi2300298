#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

int main(void){
    
    Node* root = NULL;

    push( &root, 1);
    push( &root, 2);
    push( &root, 3);
    push( &root, 4);

    insert_node( &root, 1, 69 );

    printf("%d\n",pop( &root ));
    printf("%d\n",pop( &root ));
    printf("%d\n",pop( &root ));
    printf("%d\n",pop( &root ));

    printf("List:\n");

    print_list( &root );

    printf("%d\n",list_size());

    destroy( &root );

    return 0;
}