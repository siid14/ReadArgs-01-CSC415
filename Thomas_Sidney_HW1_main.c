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

    // printf("Start of program\n"); // print a statement indicating the start of the program

    // printf("Number of arguments - argc: %d\n", argc);

    // printf("Program name - argv: %s\n", argv[0]);

    printf("There were %d arguments on the command line.\n", argc);

    // print the command-line arguments received by the program
    // printf("ARGV: {");
    for (i = 0; i < argc; i++)
    {
        // printf("\"%s\", ", argv[i]);
        printf("Argument 0%d:   ", i);
        printf("%s\n", argv[i]);
    }
    // printf("\b\b}\n"); // remove the trailing comma and space and close the array

    return 0; // indicate successful execution
}