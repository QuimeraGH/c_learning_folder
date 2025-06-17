#include "../../include/dynamic_integer_list.h"
#include <assert.h>
#include <stdio.h>

void test_one();
void test_two();
void test_three();

int main() {
  // test_one();
  // test_two();
  test_three();
  printf("All tests passed.\n");
  return 0;
}

void test_one() {
  // Initialize with capacity 2
  DynamicIntegerList list = new_dynamic_integer_list(2);
  assert(list.capacity == 2);
  assert(list.size == 0);

  append_to_list(&list, 1);
  append_to_list(&list, 2);
  append_to_list(&list, 3);
  append_to_list(&list, 4);

  assert(list.size == 4);
  assert(list.capacity >= 4);

  assert(list.data[0] == 1);
  assert(list.data[1] == 2);
  assert(list.data[2] == 3);
  assert(list.data[3] == 4);

  print_dynamic_list(&list);
  free_dynamic_integer_list(&list);
  printf("Test One Passed!\n");
}

void test_two() {
  // Initialize with capacity 0
  DynamicIntegerList list = new_dynamic_integer_list(0);
  assert(list.capacity == 0);
  assert(list.data == NULL);

  append_to_list(&list, 1);
  append_to_list(&list, 2);
  append_to_list(&list, 3);
  append_to_list(&list, 4);

  assert(list.size == 4);
  assert(list.capacity >= 4);

  assert(list.data[0] == 1);
  assert(list.data[1] == 2);
  assert(list.data[2] == 3);
  assert(list.data[3] == 4);

  print_dynamic_list(&list);
  free_dynamic_integer_list(&list);

  // Freeing again
  free_dynamic_integer_list(&list);

  printf("Test Two Passed!\n");
}

void test_three() {
  // Initialize with capacity 0
  DynamicIntegerList list = new_dynamic_integer_list(0);
  assert(list.capacity == 0);
  assert(list.data == NULL);

  append_to_list(&list, 1);
  append_to_list(&list, 2);
  append_to_list(&list, 3);
  append_to_list(&list, 4);

  assert(list.size == 4);
  assert(list.capacity >= 4);

  assert(list.data[0] == 1);
  assert(list.data[1] == 2);
  assert(list.data[2] == 3);
  assert(list.data[3] == 4);

  // remove past nothing.
  remove_at_end_list(&list);
  assert(list.data[0] == 1);
  assert(list.data[1] == 2);
  assert(list.data[2] == 3);
  assert(list.data[3] == 0);
  printf("Should only print, 1, 2, 3:\n");
  assert(list.size == 3);
  print_dynamic_list(&list);

  remove_at_end_list(&list);
  assert(list.size == 2);
  remove_at_end_list(&list);
  assert(list.size == 1);
  remove_at_end_list(&list);
  assert(list.size == 0);

  printf("Should print nothing:\n");
  print_dynamic_list(&list);

  // Shouldnt be able to remove:
  remove_at_end_list(&list);
  assert(list.size == 0);
  printf("Test Three Passed!\n");
}
