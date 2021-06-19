#include "include/parser.h"

int main(int argc, char* argv[]) {
    char* json_string = "{'name': 'Patrick', 'age': 56, 'misc': 'knife'}";
    parse(json_string);
    /*
    json_token_t* token = create_token('c', JSON_STRING);
    json_token_t* token2 = create_token('a', JSON_STRING);

    token_node_t* head = (token_node_t*) malloc(sizeof(token_node_t));

    token_node_t* ele1 = create_node(token);
    token_node_t* ele2 = create_node(token2);
    prepend_node(&head, ele1);
    prepend_node(&head, ele2);

    print_list(head);
    */
    return 0;
}
