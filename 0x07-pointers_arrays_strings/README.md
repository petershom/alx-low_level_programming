# C - Even more pointers, arrays and strings


## Task 0: a function that fills memory with a constant byte.
The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
Returns a pointer to the memory area s

## Task 1: a function that copies memory area.
The _memcpy() function copies n bytes from memory area src to memory area dest
Returns a pointer to dest

## Task 2: a function that locates a character in a string.
Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found

## Task 3: a function that gets the length of a prefix substring.
Returns the number of bytes in the initial segment of s which consist only of bytes from accept

## Task 4:a function that searches a string for any of a set of bytes.
The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept
Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found

## Task 5: a function that locates a substring.
The _strstr() function finds the first occurrence of the substring needle in the string haystack.
The terminating null bytes (\0) are not compared
Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.

## Task 6: a function that prints the chessboard.

## Task 7: a function that prints the sum of the two diagonals of a square matrix of integers.
Format: see example
You are allowed to use the standard library
EXAMPlE
julien@ubuntu:~/0x07$ cat 8-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
    int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521, 12512},
        {1000, 101, 102, 12545, 214543435},
        {100, 1012451, 11102, 12545, 214543435},
        {10, 12401, 10452, 11542545, 1214543435},
    };
    print_diagsums((int *)c3, 3);
    print_diagsums((int *)c5, 5);
    return (0);
}
