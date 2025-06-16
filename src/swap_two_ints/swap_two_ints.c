#include "../../include/swap_two_ints.h"

void int_swapper(int* first_int, int* second_int) {
  int temp = *first_int;
  *first_int = *second_int;
  *second_int = temp;
}
