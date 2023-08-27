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

int main(int argumentCount, char *argumentValues[])
{
    int i;

    // printf("Start of program\n"); // print a statement indicating the start of the program

    // printf("Number of arguments - argumentCount: %d\n", argumentCount);

    // printf("Program name - argumentValues: %s\n", argumentValues[0]);

    // print the total number of arguments passed to the program
    printf("There were %d arguments on the command line.\n", argumentCount);

    // print the command-line arguments received by the program
    // printf("ARGV: {");
    for (i = 0; i < argumentCount; i++)
    {
        // print the index of the argument and the argument itself
        // printf("\"%s\", ", argumentValues[i]);
        printf("Argument 0%d:   ", i);
        printf("%s\n", argumentValues[i]);
    }
    // printf("\b\b}\n"); // remove the trailing comma and space and close the array

    return 0; // indicate successful execution
}