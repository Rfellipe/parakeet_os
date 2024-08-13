#ifndef _STDLIB_H
#define _STDLIB_H 1

#include <sys/cdefs.h>

#ifdef __cplusplus
extern "C" {
#endif

__attribute__((__noreturn__))
void abort(void); // halfway done probably
int atexit(void (*)(void)); // TODO
int atoi(const char*); // TODO
void free(void*); // TODO
char* getenv(const char*); // TODO;
void* malloc(size_t); // TODO

#ifdef __cplusplus
}
#endif

#endif
