#include "mult_nums.h"
#include <add_nums.h>

int mult_nums(int a, int b) {
  int c = 0;
  for (int i = 0; i < b; ++i)
    c = add_nums(a, c);
  return c;
}
