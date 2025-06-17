#ifndef DYNAMIC_INTEGER_LIST_H
#define DYNAMIC_INTEGER_LIST_H

#include <stddef.h>

typedef struct DynamicIntegerList {
  
  size_t size;
  size_t capacity;
  int* data;

} DynamicIntegerList;

DynamicIntegerList new_dynamic_integer_list(size_t initial_capacity);
void free_dynamic_integer_list(DynamicIntegerList* list);
// void add_int_at_index(DynamicIntegerList* list, size_t index, int some_data);
// void remove_int_at_index(DynamicIntegerList* list, size_t index);
void append_to_list(DynamicIntegerList* list, int some_data);
void remove_at_end_list(DynamicIntegerList* list);
void print_dynamic_list(DynamicIntegerList* list);

#endif
