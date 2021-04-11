//
// Created by Patrick on 07/04/2021 - 12:37.
//

#ifndef JSON_PARSER_LEXER_H
#define JSON_PARSER_LEXER_H

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
    char value;
    token_type_t type;
} json_token_t;

json_token_t* tokenize(const char* src);
json_token_t* create_token(char character, token_type_t type);

#endif //JSON_PARSER_LEXER_H
