#include <stdio.h>
#include <stdlib.h>
#include "include/parser.h"
#include "include/linkedlist.h"
#include "include/lexer.h"

int main(int argc, char* argv[]) {
    //char* json_string = "{'name': 'Patrick', 'age': 56, 'misc': 'knife'}";
    //parse(json_string);
    json_token_t* token = create_token('c', JSON_STRING);
    json_token_t* token2 = create_token('a', JSON_STRING);

    node_s* head = (node_s*) malloc(sizeof(node_s));

    node_s* ele1 = create_node(token);
    node_s* ele2 = create_node(token2);
    prepend_node(&head, ele1);
    prepend_node(&head, ele2);

    print_list(head);


    return 0;
}
