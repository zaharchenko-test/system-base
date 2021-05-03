#include <stdio.h>
#include <string.h>
#include <getopt.h>
#include <stdlib.h>
#include <unistd.h>



int main(int argc, char** argv)
{
        char **ep, *p;
        char *cleanenv[1];
        int ch;

        while ((ch = getopt(argc, argv, "-iu:")) != -1)
                switch(ch) {
                case '-':
                case 'i':
                        environ = cleanenv;
                        cleanenv[0] = NULL;
                        break;
                case 'u':
                        unsetenv(optarg);
                        break;
                default:
			printf("usage: env [-i] [-u var] ... [var=value] ... [cmd [arg ...]]\n");
                        break;
                }
        for (argv += optind; *argv && (p = strchr(*argv, '=')); ++argv)
                setenv(*argv, ++p, 1);
        if (*argv) {
                execvp(*argv, argv);
                printf("%s", *argv);
        }
        for (ep = environ; *ep; ep++)
                printf("%s\n", *ep);
        exit(EXIT_SUCCESS);
}
