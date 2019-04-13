/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** 103cipher
*/

#ifndef PROT_F_
#define PROT_F_

#define M_PI 3.14159265358979323846

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "struct.h"

int error(int ac, char **av);
int error_b(int ac, char **av);
void option(int a, int b);
void coordinates(char **av, math_t *math);
void intersection(math_t *math, int a, int b, int c);

#endif /* PROT_F_ */
