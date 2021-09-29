#include "slide_line.h"

/**
 * slides - Prints array of integers
 * @a: pointer to array of integers
 * @b: pointer to an int
 */
void slides(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

/**
 * slide_left - slides an array of integers to the left,
 * skipping all the zeros in between.
 * @line: pointer to an array of integers.
 * @size: size of line array
 */
void slide_left(int *line, size_t size)
{
	size_t i, p = 0;

	for (i = 0; i < size && p < size; i++)
	{
		while (line[p] == 0 && p < size && p + 1 < size)
			p++;
		if (line[i] == 0)
			slides(&line[p], &line[i]);
		p++;
	}
}

/**
 * slide_right - slides an array of integers to the right,
 * skipping all the zeros in between.
 * @line: pointer to an array of integers.
 * @size: size of line array
 */
void slide_right(int *line, size_t size)
{
	size_t i, p = size - 1;

	for (i = size - 1; (int) i >= 0 && (int) p >= 0; i--)
	{
		while (line[p] == 0 && (int) p > 0)
			p--;
		if (line[i] == 0)
			slides(&line[p], &line[i]);
		p--;
	}
}

/**
 * slide_line - slides and merges an array of integers
 * @line: pointer to the array of integers to print
 * @size: number of elements of array
 * @direction: Right and Left
 * Return: 0 - EXIT_SUCCESS or 1 - EXIT_FAILURE
 */
int slide_line(int *line, size_t size, int direction)
{
	size_t i;

	if (direction == SLIDE_LEFT)
	{
		slide_left(line, size);
		for (i = 0; i < size; i++)
		{
			if (line[i] == line[i + 1])
			{
				line[i] = line[i] + line[i + 1];
				line[i + 1] = 0;
			}
		}
		slide_left(line, size);
		return (1);
	} else if (direction == SLIDE_RIGHT)
	{
		slide_right(line, size);
		for (i = size - 1; (int) i >= 0; i--)
		{
			if (line[i] == line[i - 1])
			{
				line[i] = line[i] + line[i - 1];
				line[i - 1] = 0;
			}
		}
		slide_right(line, size);
		return (1);
	}
	return (0);
}