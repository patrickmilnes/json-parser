//
// Created by Patrick on 10/04/2021 - 14:26.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/linkedlist.h"

int get_count(node_s *head) {
    return 0;
}

int prepend_node(node_s** head, node_s* new_node) {
    printf("Prepending node!\n");
    new_node->next = *head;
    *head = new_node;
    return 0;
}

int delete_node(char *data) {
    return 0;
}

void print_list(node_s* head) {
    printf("Printing list:\n");
    //node_s* temp = (node_s*) malloc(sizeof(node_s));
    node_s* temp = head;
    //memcpy(temp, head, sizeof(node_s));
    while(temp != NULL) {
        printf("%c\n", temp->data->value);
        temp = temp->next;
    }
    free(temp);
}

node_s* create_node(json_token_t *data) {
    node_s* result = (node_s*) malloc(sizeof(node_s));
    result->data = data;
    result->next = NULL;
    return result;
}
