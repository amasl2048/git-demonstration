#include <stdio.h>
#include "work.h"

void some_function() {
  printf("hello from some_function()\n");
  for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
  }
}
