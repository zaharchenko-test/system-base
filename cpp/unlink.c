#include <stdio.h>
#include <unistd.h>

int help(void)
{
  printf("usage: unlink [file]\n");
  return 0;
}

int main(int argc, char **argv)
{
  if (!argv[1])
  {
    return help();
  }
  if (unlink(argv[1]) < 0)
  {
    printf("error\n");
    return 1;
  }
  return 0;
}
