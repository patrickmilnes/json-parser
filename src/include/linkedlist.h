//
// Created by Patrick on 10/04/2021 - 14:27.
//

#ifndef JSON_PARSER_LINKEDLIST_H
#define JSON_PARSER_LINKEDLIST_H

#include "lexer.h"

typedef struct node {
    json_token_t* data;
    struct node* next;
} node_s;

int get_count(node_s* head);
int prepend_node(node_s** head, node_s* new_node);
int delete_node(char* data);
void print_list(node_s* head);
node_s* create_node(json_token_t* data);

#endif //JSON_PARSER_LINKEDLIST_H
