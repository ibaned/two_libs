#include "add_nums.h"
#include <incr_num.h>

int add_nums(int a, int b) {
  for (int i = 0; i < b; ++i)
    a = incr_num(a);
  return a;
}
