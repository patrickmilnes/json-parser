//
// Created by Patrick on 07/04/2021 - 12:37.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/lexer.h"

token_node_t* tokenize(const char* src) {
    printf("TOKENIZING\n");
    int position_increment = 0;
    json_token_t* token;
    for (int i = 0; i < strlen(src); i++) {
        if (src[i] != 32) {
            printf("%c\n", src[i]);
            // Create tokenes
            switch (src[i]) {
                case 123:
                    printf("LBRACE\n");
                    token = create_token(position_increment, JSON_LBRACE);
                    insert_into_symbol_table(token);
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
