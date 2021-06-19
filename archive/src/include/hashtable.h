//
// Created by Patrick on 05/04/2021 - 18:44.
//

#ifndef JSON_PARSER_HASHTABLE_H
#define JSON_PARSER_HASHTABLE_H

#define MAX_NAME 256
#define TABLE_SIZE 10

typedef struct {
    char name[MAX_NAME];
    int age;
    // Add more later.
} Person;

void initHashTable();
void printTable();
int hashTableInsert(Person* person);
Person* hashTableLookup(char* name);
Person* hashTableDelete(char* name);

#endif //JSON_PARSER_HASHTABLE_H
