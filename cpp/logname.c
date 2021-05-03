#include <stdio.h>
#include <unistd.h>

int help(void)
{
  printf("usage: logname\n");
  return 0;
}

int main(int argc, char **argv)
{
  if (argv[1])
  {
    return help();
  }
  char *login = getlogin();
  if (!login)
  {
    printf("no login name.\n");
    return 1;
  }

  puts(login);
  return 0;
}
