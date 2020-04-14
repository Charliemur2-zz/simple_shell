#ifndef _SH_HEADER_H_
#define _SH_HEADER_H_
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <sys/stat.h>

/*
 * Structs, enums and unions definitions
 * Typedefs
 * Function prototypes
 */

int built_in(char *strtocmp, char **env);
void handle_sigint(int sig);
char *read_line(void);
int execute(char **pathname);
char **toktok(char *buffer);
int _atoi(char *s);
void freezer(char **token, char *string);
void _printenv(char **env);

#endif /* _SH_HEADER_H_ */
