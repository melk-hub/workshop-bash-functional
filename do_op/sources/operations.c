/*
** EPITECH PROJECT, 2022
** workshop_bash
** File description:
** operations
*/

#include <stdio.h>

#include "const.h"

int my_add(int a, int b)
{
    printf("The result of %d + %d is %d\n", a, b, a + b);
    return SUCCESS;
}

int my_sub(int a, int b)
{
    printf("The result of %d - %d is %d\n", a, b, a - b);
    return SUCCESS;
}

int my_mul(int a, int b)
{
    printf("The result of %d x %d is %d\n", a, b, a * b);
    return SUCCESS;
}

int my_div(int a, int b)
{
    if (b == 0) {
        dprintf(2, "Division by 0 is not allowed\n");
        return ERROR;
    }
    printf("The result of %d / %d is %d\n", a, b, a / b);
    return SUCCESS;
}

int my_mod(int a, int b)
{
    if (b == 0) {
        dprintf(2, "Modulo by 0 is not allowed\n");
        return ERROR;
    }
    printf("The result of %d %% %d is %d\n", a, b, a % b);
    return SUCCESS;
}