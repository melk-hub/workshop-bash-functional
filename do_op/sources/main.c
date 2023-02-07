/*
** EPITECH PROJECT, 2022
** workshop_bash
** File description:
** main
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "const.h"
#include "my_do_op.h"

static bool my_str_isnum(char const *str)
{
    for (int c = 0; str[c]; ++c) {
        if ((str[c] < '0' || str[c] > '9') && str[c] != '-' && str[c] != '+')
            return false;
    }
    return true;
}

static int error_handle(int ac, char **av)
{
    if (ac != 4) {
        dprintf(2, "invalid argument, check usage\n");
        return ERROR;
    }
    if (!my_str_isnum(av[1]) || !my_str_isnum(av[3])) {
        dprintf(2, "invalid number, check usage\n");
        return ERROR;
    }
    return SUCCESS;
}

static bool print_usage(int ac, char **av)
{
    if (ac == 2 && strcmp(av[1], "-h") == 0) {
        printf("%s", usage);
        return true;
    }
    return false;
}

int main(int ac, char **av)
{
    if (print_usage(ac, av) == true)
        return SUCCESS;
    if (error_handle(ac, av) == ERROR)
        return FAILURE;
    return (do_op(av[1], av[2], av[3]));
}
