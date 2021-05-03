#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/utsname.h>

int help(void)
{
  printf("usage: uname [-asnrvm]\n");
  return 1;
}

int main(int argc, char **argv)
{
  struct utsname buffer;
  int opt, key_s = 0, key_m = 0, key_v = 0, key_n = 0, key_r = 0, key_e = 0;
  if (uname(&buffer) < 0)
  {
    printf("error\n");
  }

  while((opt = getopt(argc, argv, "::snrvma")) != -1)
  {
    switch(opt)
    {
      case 's':
        key_s = 1;
        break;
      case 'n':
        key_n = 1;
        break;
      case 'r':
        key_r = 1;
        break;
      case 'v':
        key_v = 1;
        break;
      case 'm':
        key_m = 1;
        break;
      case 'a':
        key_s = key_n = key_r = key_v = key_m = 1;
        break;
      case '?':
        key_e = 1;
        break;
    }
  }

  if (key_e)
  {
    return help();
  }
  if (key_s || !(key_n || key_r || key_v || key_m))
  {
    printf("%s ", buffer.sysname);
  }
  if (key_n)
  {
    printf("%s ", buffer.nodename);
  }
  if (key_r)
  {
    printf("%s ", buffer.release);
  }
  if (key_v)
  {
    printf("%s ", buffer.version);
  }
  if (key_m)
  {
    printf("%s", buffer.machine);
  }
  putchar('\n');

  return 0;
}
