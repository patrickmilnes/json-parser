//
// Created by Patrick on 07/04/2021 - 12:37.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/lexer.h"

token_node_t* tokenize(const char* src) {
    printf("TOKENIZING\n");
    token_node_t* head = (token_node_t*) malloc(sizeof(token_node_t));
    int position_increment = 0;
    json_token_t* token;
    for (int i = 0; i < strlen(src); i++) {
        if (src[i] != 32) {
            printf("%c\n", src[i]);
            // Create tokens
            switch (src[i]) {
                case 123:
                    printf("LBRACE\n");
                    token = create_token(position_increment, JSON_LBRACE);
                    token_node_t* node = create_node(token);
                    prepend_node(&head, node);
                    position_increment++;
                    break;

                case 125:
                    printf("RBRACE\n");
                    token = create_token(position_increment, JSON_RBRACE);
                    insert_into_symbol_table(token);
                    position_increment++;
                    break;

                default:
                    break;
            }
        }
    }
    print_list(head);
    return 0;
}

json_token_t* create_token(int position, token_type_t type) {
    json_token_t* result = (json_token_t*) malloc(sizeof(json_token_t));
    result->symbol_position = position;
    result->type = type;
    return result;
}

int insert_into_symbol_table(json_token_t* token) {
    return 0;
}

void flatten_tokens(token_node_t* head) {
    token_node_t* temp = head;
    while(temp != NULL) {
        printf("%i\n", temp->data->type);
        if(temp->data->type == temp->next->data->type) {
            // Flatten some how
        }
        temp = temp->next;
    }
}
