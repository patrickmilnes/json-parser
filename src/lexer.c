//
// Created by Patrick on 07/04/2021 - 12:37.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/lexer.h"

token_node_s* tokenize(const char* src) {
    printf("TOKENIZING");
    for (int i = 0; i < strlen(src); i++) {
        printf("%c\n", src[i]);

    }
    return 0;
}

json_token_t* create_token(int position, token_type_t type) {
    json_token_t* result = (json_token_t*) malloc(sizeof(json_token_t));
    result->symbol_position = position;
    result->type = type;
    return result;
}
