#ifndef function_pointers.h
#define function_pointers .h

#include <stddef.h>

void print_name(char *name, void (*f)(char *));

#endif
