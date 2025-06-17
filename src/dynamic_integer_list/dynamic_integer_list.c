#include "../../include/dynamic_integer_list.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void reallocate_list_data(DynamicIntegerList *list) {
  if (list->capacity == list->size) {

    size_t new_capacity = (list->capacity == 0) ? 1 : list->capacity * 2;

    if (!list->data) {
      list->data = malloc(sizeof(int) * new_capacity);
      if (!list->data) {
        printf("Memory Error: Failed to allocate memory.");
      }
      list->capacity = new_capacity;
      return;
    }

    int *new_data = realloc(list->data, sizeof(int) * new_capacity);

    if (!new_data) {
      printf("Memory Error: Could not reallocate list.\n");
      return;
    }

    list->capacity = new_capacity;
    list->data = new_data;
  }
}

void try_data_allocation(size_t capacity, DynamicIntegerList *list) {
  list->data = malloc(sizeof(int) * capacity);
}

DynamicIntegerList new_dynamic_integer_list(size_t initial_capacity) {

  DynamicIntegerList new_list = {
      .data = NULL, .size = 0, .capacity = initial_capacity};

  if (initial_capacity >= 1) {
    try_data_allocation(initial_capacity, &new_list);
    if (!new_list.data) {
      printf("Memory Error: Could not allocate initial memory.\n");
    }
  }

  return new_list;
}

void append_to_list(DynamicIntegerList *list, int some_data) {
  reallocate_list_data(list);
  list->data[list->size++] = some_data;
}

void remove_at_end_list(DynamicIntegerList *list) {
  if (list->size >= 1) {
    list->size--;
    list->data[list->size] = 0;
  }
}

void print_dynamic_list(DynamicIntegerList *list) {
  if (list->size == 0) {
    printf("Nothing to print!\n");
    return;
  }

  printf("[");
  for (size_t i = 0; i < list->size; i++) {
    if (i != list->size - 1) {

      printf(" %d,", list->data[i]);
      continue;
    }

    printf(" %d ", list->data[i]);
  }
  printf("]\n");
}

void free_dynamic_integer_list(DynamicIntegerList *list) {
  if (list && list->data) {
    free(list->data);
    list->data = NULL;
  }

  list->capacity = 0;
  list->size = 0;
}
