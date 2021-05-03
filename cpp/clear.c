#include <stdio.h>

int help(void)
{
  printf("usage: clear\n");
  return 0;
}

int main(int argc, char **argv)
{
  if (argv[1])
  {
    return help();
  }
  printf("\033c\033[H\033[J");
  return 0;
}
