//
// Created by Patrick on 05/04/2021 - 18:44.
//

#include <stdio.h>
#include <string.h>
#include "include/hashtable.h"

Person* hash_table[TABLE_SIZE];

/**
 * Create hash for a striug of characters.
 * @param name
 * @return hash_value
 */
size_t hash(char* name) {
    int length = strnlen(name, MAX_NAME);
    uint hash_value = 0;
    for (int i = 0; i < length; ++i) {
        hash_value += name[i];
        hash_value = (hash_value * name[i]) % TABLE_SIZE;
    }
    return hash_value;
}

/**
 * Set all elements in table to null;
 */
void initHashTable() {
    for (int i = 0; i < TABLE_SIZE; ++i) {
        hash_table[i] = NULL;
    }
}

/**
 * Inserts person into hash table, returns 1 if unsuccessful
 * or returns 0 if successful.
 * @param person
 * @return
 */
int hashTableInsert(Person* person) {
    if(person == NULL) return 1;
    int index = hash(person->name);
    for (int i = 0; i < TABLE_SIZE; ++i) {
        int try = (i + index) % TABLE_SIZE;
        if(hash_table[try] == NULL) {
            hash_table[try] = person;
            return 0;
        }
    }
    return 1;
}

/**
 * Deletes person from hash table by name.
 * @param name
 * @return
 */
Person* hashTableDelete(char* name) {
    int index = hash(name);
    int comparison = strncmp(hash_table[index]->name, name, TABLE_SIZE);
    if (hash_table[index] != NULL && comparison == 0) {
        Person* temp = hash_table[index];
        hash_table[index] = NULL;
        return temp;
    } else {
        return NULL;
    }
}

/**
 * Lookup a hashtable by name.
 * @param name
 * @return
 */
Person* hashTableLookup(char* name) {
    int index = hash(name);
    for (int i = 0; i < TABLE_SIZE; i++) {
        int try = (index + i) % TABLE_SIZE;
        int comparison = strncmp(hash_table[try]->name, name, TABLE_SIZE);
        if (hash_table[try] != NULL && comparison == 0) {
            return hash_table[try];
        } else {
            return NULL;
        }
    }
}

/**
 * Prints the contents of the table to the console.
 */
void printTable() {
    printf("Start\n");
    for (int i = 0; i < TABLE_SIZE; ++i) {
        if (hash_table[i] == NULL) {
            printf("\t%i\t---\n", i);
        } else {
            printf("\t%i\t%s\t%i\n", i, hash_table[i]->name, hash_table[i]->age);
        }
    }
    printf("End\n");
}