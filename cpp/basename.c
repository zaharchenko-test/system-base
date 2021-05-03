#include <stdio.h>
#include <libgen.h>

int help(void)
{
  printf("usage: basename [path]...\n");
  return 0;
}

int main(int argc, char **argv)
{
  if (!argv[1])
  {
    return help();
  }
  for (int i = 1; i < argc; i++)
  {
    printf("%s\n", basename(argv[i]));
  }
  return 0;
}
