/**************************************************************
 * Class:  CSC-415-01# Fall 2023
 * Name: Sidney Thomas
 * Student ID: 918656419
 * GitHub Name: siid14
 * Project: Assignment 1 – Command Line Arguments
 *
 * File: Thomas_Sidney_HW1_main.c
 *
 * Description:
 *
 **************************************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;

    printf("ARGV: {");
    for (i = 0; i < argc; i++)
    {
        printf("\"%s\", ", argv[i]);
    }
    printf("\b\b}\n");

    return 0;
}