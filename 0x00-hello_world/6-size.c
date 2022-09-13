#include <stdio.h>
/**
 * main - prints the size of data types
 * Return: zero
 */
int main(void)
{
        char c;
        int i;

        printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
        printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
        printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
        printf("Size of a long long int: %lu byte(s)\n",
                        (unsigned long)sizeof(long long int));
        printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
        return (0);
}
