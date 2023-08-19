#ifndef KLIB_SORT_H
#define KLIB_SORT_H

#define ASC_ORDER 1
#define DES_ORDER -1
#define EQUAL 0
#define LESS -1
#define GREATER 1

void selection_sort(void* array, unsigned int size, void* cmpfunc);
void bubble_sort(void* array, unsigned int size, void* cmpfunc);
void insertion_sort(void* array, unsigned int size, void* cmpfunc);
void shell_sort(void* array, unsigned int size, void* cmpfunc);
void quick_sort(void* array, unsigned int size, void* cmpfunc);
void merge_sort(void* array, unsigned int size, void* cmpfunc);
void heap_sort(void* array, unsigned int size, void* cmpfunc);
#endif
