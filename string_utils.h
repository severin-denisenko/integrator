//
// Created by Severin on 23.09.2022.
//

#ifndef INTEGRATOR_STRING_UTILS_H
#define INTEGRATOR_STRING_UTILS_H

#define MAX_BUFFER_LENGTH 256
#define MAX_PARAMETERS 256

void remove_spaces(char *s);

void remove_comments(char *s);

void split_parameters(const char *s, char *p, char *v);

int is_in_parameters(char arr[MAX_PARAMETERS][MAX_PARAMETERS], char *s);

int index_in_parameters(char arr[MAX_PARAMETERS][MAX_PARAMETERS], char *s);

#endif //INTEGRATOR_STRING_UTILS_H