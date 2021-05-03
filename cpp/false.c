#include <stdio.h>

int help(void)
{
  printf("usage: false\n");
  return 1;
}

int main(int argc, char **argv)
{
  if (argv[1])
  {
    return help();
  }
  return 1;
}
