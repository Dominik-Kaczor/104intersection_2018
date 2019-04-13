/*
** EPITECH PROJECT, 2018
** tools 104intersection
** File description:
** tools
*/

#include "include/my.h"
#include "include/struct.h"

int error(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
        printf("USAGE\n    ./105torus opt a0 a1 a2 a3 a4 n\n\n");
        printf("DESCRIPTION\n");
        printf("    opt       method option:\n");
        printf("                  1 for the bisection method\n");
        printf("                  2 for Newton's method\n");
        printf("                  3 for the secant method\n");
        printf("    a[0-4]    coefficients of the equation\n");
        printf("    n         precision (the application of the polynominal");
        printf(" to the solution should\n");
        printf("              be smaller than 10^⁻n\n");
        return (1);
    } else if (ac != 8) {
        write(2, "invalide nomber\n", 16);
        return (1);
    }
    return (0);
}

int error_b(int ac, char **av)
{
    if ((av[1][0] != '1' && av[1][0] != '2' && av[1][0] != '3')
        || av[1][1] != '\0')
        return (1);
    for (int i = 2; i != ac; i++) {
        for (int k = 0; av[i][k] != '\0'; k++) {
            if ((av[i][k] < '0' || av[i][k] > '9') && av[i][k] != '-')
                return (1);
        }
    }
    return (0);
}

void coordinates(char **av, math_t *math)
{
    math->a0 = atoi(av[2]);
    math->a1 = atoi(av[3]);
    math->a2 = atoi(av[4]);
    math->a3 = atoi(av[5]);
    math->a4 = atoi(av[6]);
    math->n = atoi(av[7]);
}
