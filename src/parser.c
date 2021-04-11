//
// Created by Patrick on 05/04/2021 - 22:31.
//

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h> // For exit() function
#include <string.h>
#include "include/lexer.h"
#include "include/parser.h"
#include "include/tokenlinkedlist.h"

//typedef struct JsonValue {
//    bool json_null;
//    int json_int;
//    float json_float;
//    char* json_string;
//    struct JsonValue* json_array[];
//} json_value;

//void readFile(char* path) {
//    FILE* fp;
//    char buffer[1000];
//    fp = fopen(path, "r");
//    if (fp == NULL) {
//        printf("Error opening file");
//        exit(1);
//    }
//    printf("%i\n", sizeof(fp));
//    //fprintf(fp, "Testing fprintf...\n");
//    fgets(buffer, 1000, fp);
//    fclose(fp);
//    printf("%s\n", buffer);
//}

int parse(char* src) {
    token_node_s* tokens = tokenize(src);
    return 0;
}