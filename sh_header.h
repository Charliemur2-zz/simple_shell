#ifndef _SH_HEADER_H_
#define _SH_HEADER_H_
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>

/*
 * Structs, enums and unions definitions
 * Typedefs
 * Function prototypes
 */

int _strcmp(char *strtocmp);
void handle_sigint(int sig);
char *read_line(void);
int execute(char **pathname);

#endif /* _SH_HEADER_H_ */
