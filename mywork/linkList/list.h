//
// Created by xyz on 11/05/2022.
//

#ifndef LINKLIST_LIST_H
#define LINKLIST_LIST_H

#include <stdio.h>

/* define a struct for linked list elements */
typedef struct ListElement {
    void *data;
    struct ListElement *next;
    struct List *list;
    void (*insertToNext)(const void *data);
    void (*removeNext)(void **data);
    _Bool (*isHead)();
    _Bool (*isTail)();
} ListElement;

/* define a struct for linked lists */
typedef struct LinkedList {
    int size;
    ListElement *head;
    ListElement *tail;
    void (*destroy)(void *data);
    void (*match)(const void *key1, const void *key2);
} List;

/* public interface */
void list_init(List *list, void (*destroy)(void *data));
void list_destroy(List *list);
int list_size(const List *list); // What is Macro?


ListElement *list_head(const List *list);
ListElement *list_tail(const List *list);
void *list_data_of(const ListElement *element);
ListElement *list_next_of(const ListElement *element);

#endif //LINKLIST_LIST_H
