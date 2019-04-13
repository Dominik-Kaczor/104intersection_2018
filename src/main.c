/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main.c
*/

#include "include/my.h"
#include "include/struct.h"

void bisection(math_t *math)
{
}

void newton(math_t *math)
{
}

void secant(math_t *math)
{
}

void general(char **av, math_t *math)
{
    coordinates(av, math);
    if (av[1][0] == '1') {
        bisection(math);
    } else if (av[1][0] == '2') {
        newton(math);
    } else
        secant(math);
}

int main(int ac, char **av)
{
    math_t math;

    if (error(ac, av))
        return (84);
    if (error_b(ac, av)) {
        write(2, "invalid insertion\n", 18);
        return (84);
    }
    general(av, &math);
    return (0);
}
