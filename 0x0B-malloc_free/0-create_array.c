#include main.h
#include <stdlib.h>
/**
 * create_array - Write a function that creates an array of chars, and initializes it with a specific char.
 * @size: size of array
 * @c: char to initalize
 * Return: NULL if size = 0 or pointer to the array, or NULL if it fails
 */
char *create_array(int size, char c)
{
    char *array; 
    int i; 

    if (size == 0) 
        return (NULL);

    array = malloc(sizeof(char) * size);
    if (array == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
    {
        array[i] = c;
    }
    return (array);
}
