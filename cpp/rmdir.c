#include <stdio.h>
#include <unistd.h>

int help(void)
{
  printf("");
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
    if (rmdir(argv[i]) < 0)
    {
      printf ("rmdir: failed to remove '%s'\n", argv[i]);
    }
  }
  return 0;
}
