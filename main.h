#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void get_input(char cmd[], char *parameter[]);
int array_len(char *parameters[]);

char *_strcat(char *dest, char *src);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);

#endif
