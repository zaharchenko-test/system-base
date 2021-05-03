#include <stdio.h>
#include <unistd.h>

int help(void)
{
  printf("usage: hostname\n");
  return 0;
}

int main(int argc, char **argv)
{
  if (argv[1])
  {
    return help();
  }
  char host[512];
  if (gethostname(host, sizeof(host)) < 0)
  {
    printf("error\n");
  }
  printf("%s\n", host);
  return 0;
}
