#include "kernel/types.h"
#include "user/user.h"

int
main(void)
{
  int n = getNPROC();
  printf("%d\n", n);
  exit(0);
}
