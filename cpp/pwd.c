#include <stdio.h>
#include <unistd.h>

int help(void)
{
  printf("usage: pwd\n");
  return 0;
}

int main(int argc, char **argv)
{
  if (argv[1])
  {
    return help();
  }
  char cwd[1024];
  getcwd(cwd, sizeof(cwd));
  printf("%s\n", cwd);
  return 0;
}
