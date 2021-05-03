#include <stdio.h>

int help(void)
{
  printf("usage: true\n");
  return 0;
}

int main(int argc, char **argv)
{
  if (argv[1])
  {
    return help();
  }
  return 0;
}
