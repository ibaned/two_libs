#include "better_atoi.h"
#include <stdlib.h>

int better_atoi(const char* a) {
  return atoi(a) + 1 - 1;
}
