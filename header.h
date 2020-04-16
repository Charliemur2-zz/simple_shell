#ifndef _HEADER_H_
#define _HEADER_H_
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
char **path_finder(char **token_path, char **env_path, char *stringet);
char *_strcat(char *dest, char *src);
int childhood(char **token, char *av[], char **env, char *string);

#endif /* _HEADER_H_ */
