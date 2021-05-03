#include <stdio.h>
#include <unistd.h>

int help(void)
{
  printf("usage: sleep [seconds]\n");
  return 0;
}

int main(int argc, char **argv)
{
  if (!argv[1])
  {
    return help();
  }
  sleep(atoi(argv[1]));
  return 0;
}
