#ifndef _UNISTD_H
#define _UNISTD_H
#include <sys/types.h>
#ifdef __cplusplus
extern "C" {
#endif

int execv(const char*, char* const[]); // TODO
int execve(const char*, char* const[], char* const[]); // TODO
int execvp(const char*, char* const[]); // TODO
pid_t fork(void); // TODO

#ifdef __cplusplus
}
#endif

#endif
