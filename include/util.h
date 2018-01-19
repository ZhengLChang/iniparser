#ifndef UTIL_H_
#define UTIL_H_
#include <stdio.h>
const char * strlwc(const char * in, char *out, unsigned len);
char * xstrdup(const char * s);
unsigned strstrip(char * s);
#define XISSPACE(tmp) (tmp>0 && tmp <255 && isspace(tmp))
#endif
