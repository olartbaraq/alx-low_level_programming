#ifndef __SEARCH_ALGOS_H
#define __SEARCH_ALGOS_H

#include <stdio.h>

/**
 * @value: Integer element being searched
 * @size: number of elements in the array
 * @array: pointer to the first element of the array to search in
 *
 * Description: linear search algorithm
 */


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

#endif /* __SEARCH_ALGOS_H */
