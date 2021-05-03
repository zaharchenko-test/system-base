#include <stdio.h>
#include <unistd.h>

int help(void)
{
  printf("usage: link [target] [name]\n");
  return 0;
}

int main(int argc, char **argv)
{
  if (argc != 3)
  {
    return help();
  }
  if (link(argv[1], argv[2]) < 0)
  {
    printf("failed to create link\n");
    return 1;
  }
  return 0;
}
