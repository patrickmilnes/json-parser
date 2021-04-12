//
// Created by Patrick on 07/04/2021 - 12:37.
//

#ifndef JSON_PARSER_LEXER_H
#define JSON_PARSER_LEXER_H

#include "tokenlinkedlist.h"

token_node_t* tokenize(const char* src);
json_token_t* create_token(int position, token_type_t type);
int insert_into_symbol_table(json_token_t* token);

#endif //JSON_PARSER_LEXER_H
