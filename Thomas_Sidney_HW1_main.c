/**************************************************************
 * Class:  CSC-415-01# Fall 2023
 * Name: Sidney Thomas
 * Student ID: 918656419
 * GitHub Name: siid14
 * Project: Assignment 1 – Command Line Arguments
 *
 * File: Thomas_Sidney_HW1_main.c
 *
 * Description: This program demonstrates how to access and print command-line arguments in C.
 * It takes advantage of the main function's parameters, argumentCount and argumentValues,
 * to display information about the command-line inputs provided when the program is executed.
 *
 * argumentCount: The variable stores the count of command-line arguments passed to the program.
 * argumentValues: An array of strings containing the values of command-line arguments.
 * i: A counter variable used for looping through the command-line arguments.
 *
 * The program starts by printing the total number of command-line arguments received.
 * It then uses a loop to iterate through each argument and displays its index and value.
 * This loop enables the program to process and display multiple arguments systematically.
 *
 * Finally, the program concludes by indicating its successful execution and returning 0.
 *
 **************************************************************/

#include <stdio.h>

int main(int argumentCount, char *argumentValues[])
{
    int i; // counter variable for loops

    // print the total number of arguments passed to the program
    printf("There were %d arguments on the command line.\n", argumentCount);

    // print the command-line arguments received by the program
    for (i = 0; i < argumentCount; i++)
    {
        // print the index of the argument and the argument itself
        printf("Argument 0%d:   ", i);
        printf("%s\n", argumentValues[i]);
    }

    return 0; // indicate successful execution
}