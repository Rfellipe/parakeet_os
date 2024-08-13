#ifndef _STDIO_H
#define _STDIO_H

#include <sys/cdefs.h>
#include <stdarg.h>
#include <stddef.h>

#define EOF (-1)
#define SEEK_SET 0
typedef struct { int unused; } FILE;

#ifdef __cplusplus
extern "C" {
#endif

extern FILE* stderr;
#define strderr stderr

int fclose(FILE*); // TODO
int fflush(FILE*); // TODO
FILE* fopen(const char*, const char*); // TODO
int fprintf(FILE*, const char*, ...); // TODO
size_t fread(void*, size_t, size_t, FILE*); // TODO
int fseek(FILE*, long, int); // TODO
long ftell(FILE*); // TODO
size_t fwrite(const void*, size_t, size_t, FILE*); // TODO
void setbuf(FILE*, char*); // TODO
int vfprintf(FILE*, const char*, va_list); // TODO

int printf(const char* __restrict, ...);
int putchar(int);
int puts(const char*);

#ifdef __cplusplus
}
#endif

#endif
