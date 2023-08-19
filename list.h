#ifndef KTOOLS_LIST_H
#define KTOOLS_LIST_H

typedef struct {
    void* value;
    LinkList next;
    LinkList prev;
} LinkList;

typedef struct {
    char* key;
    void* value;
} Dict;
#endif