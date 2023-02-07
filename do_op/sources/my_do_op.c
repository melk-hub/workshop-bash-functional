/*
** EPITECH PROJECT, 2022
** workshop_bash
** File description:
** do_op
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "my_do_op.h"
#include "const.h"

int do_op(char *n1, char *op, char *n2)
{
    int (*op_tab[5])(int, int) = {my_add, my_sub, my_mul, my_div, my_mod};
    char *op_tab_str[5] = {"+", "-", "x", "/", "%"};
    int a = atoi(n1);
    int b = atoi(n2);

    for (int i = 0; i < 5; i++) {
        if (strcmp(op, op_tab_str[i]) == 0)
            return op_tab[i](a, b);
    }
    dprintf(2, "invalid operator, check usage\n");
    return ERROR;
}