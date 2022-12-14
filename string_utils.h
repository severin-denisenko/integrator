//
// Created by Severin on 23.09.2022.
//

#ifndef INTEGRATOR_STRING_UTILS_H
#define INTEGRATOR_STRING_UTILS_H

#include <string.h>
#include "logger.h"

#define MAX_BUFFER_LENGTH 256
#define MAX_PARAMETERS 256

void remove_spaces(char s[MAX_BUFFER_LENGTH]);

void remove_comments(char s[MAX_BUFFER_LENGTH]);

void split_parameters(const char s[MAX_BUFFER_LENGTH], char p[MAX_BUFFER_LENGTH], char v[MAX_BUFFER_LENGTH]);

int is_in_parameters(char arr[MAX_PARAMETERS][MAX_PARAMETERS], const char *s);

int index_in_parameters(char arr[MAX_PARAMETERS][MAX_PARAMETERS], const char *s);

#endif //INTEGRATOR_STRING_UTILS_H
