#include <unistd.h>
#include <stdio.h>
#include <pwd.h>

int help(void)
{
  printf("usage: whoami\n");
  return 0;
}

int main(int argc, char **argv)
{
  if (argv[1])
  {
    return help();
  }
  uid_t uid = geteuid();
  struct passwd *pw = getpwuid(uid);
  if (!pw)
  {
    printf("error\n");
    return 1;
  }

  puts(pw->pw_name);
  return 0;
}
