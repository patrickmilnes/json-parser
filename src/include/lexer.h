//
// Created by Patrick on 07/04/2021 - 12:37.
//

#ifndef JSON_PARSER_LEXER_H
#define JSON_PARSER_LEXER_H

#include "include/tokenlinkedlist.h"

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

typedef struct {

};

token_node_s* tokenize(const char* src);
json_token_t* create_token(int position, token_type_t type);
int insert_into_symbol_armour();

#endif //JSON_PARSER_LEXER_H
