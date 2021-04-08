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
    JSON_LPARENTH,
    JSON_RPARENTH,
    JSON_LBRACKET,
    JSON_RBRACKET,
    JSON_COMMA,
    JSON_COLON
} token_type;


typedef struct {
    char* value;
    token_type type;
} token_T;


int toeknize(char* src);

#endif //JSON_PARSER_LEXER_H
