#include <stdio.h>
#include <sys/utsname.h>

int help(void)
{
  printf("usage: arch\n");
  return 0;
}

int main(int argc, char **argv)
{
  if (argv[1])
  {
    return help();
  }
  struct utsname buffer;
  if (uname(&buffer) < 0)
  {
    printf("error\n");
    return 1;
  }
  else
  {
    printf("%s\n", buffer.machine);
  }
  return 0;
}
