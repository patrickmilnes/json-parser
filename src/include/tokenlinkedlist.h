//
// Created by Patrick on 10/04/2021 - 14:27.
//

#ifndef JSON_PARSER_TOKENLINKEDLIST_H
#define JSON_PARSER_TOKENLINKEDLIST_H

typedef enum {
    JSON_ID,
    JSON_INT,
    JSON_FLOAT,
    JSON_STRING,
    JSON_ARRAY,
    JSON_BOOL,
    JSON_NULL,
    JSON_LBRACKET,
    JSON_RBRACKET,
    JSON_COMMA,
    JSON_COLON,
    JSON_EOF
} token_type_t;

typedef struct {
    int symbol_position;
    token_type_t type;
} json_token_t;

typedef struct node {
    json_token_t* data;
    struct node* next;
} token_node_t;

int get_count(token_node_t* head);
int prepend_node(token_node_t** head, token_node_t* new_node);
int delete_node(char* data);
void print_list(token_node_t* head);
token_node_t* create_node(json_token_t* data);

#endif //JSON_PARSER_TOKENLINKEDLIST_H
