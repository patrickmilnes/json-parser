//
// Created by Patrick on 10/04/2021 - 14:26.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/tokenlinkedlist.h"

int get_count(token_node_t *head) {
    return 0;
}

int prepend_node(token_node_t** head, token_node_t* new_node) {
    printf("Prepending node!\n");
    new_node->next = *head;
    *head = new_node;
    return 0;
}

int delete_node(char *data) {
    return 0;
}

void print_list(token_node_t* head) {
    printf("Printing list:\n");
    //token_node_t* temp = (token_node_t*) malloc(sizeof(token_node_t));
    token_node_t* temp = head;
    //memcpy(temp, head, sizeof(token_node_t));
    while(temp != NULL) {
        printf("%i\n", temp->data->symbol_position);
        temp = temp->next;
    }
    free(temp);
}

token_node_t* create_node(json_token_t *data) {
    token_node_t* result = (token_node_t*) malloc(sizeof(token_node_t));
    result->data = data;
    result->next = NULL;
    return result;
}
