#include <stdio.h>
#include <unistd.h>

int help(void)
{
  printf("usage: sync\n");
  return 0;
}

int main(int argc, char **argv)
{
  if (argv[1])
  {
    return help();
  }
  sync();
  return 0;
}
