#include <stdio.h>

int help(void)
{
  printf("usage: reset\n");
  return 0;
}

int main(int argc, char **argv)
{
  if (argv[1])
  {
    return help();
  }
  printf("\033c\033(B\033[m\033[J\033[?25h");
  return 0;
}
