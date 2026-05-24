/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganselmo <ganselmo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 15:43:58 by ganselmo          #+#    #+#             */
/*   Updated: 2026/05/24 01:50:09 by ganselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math/vector.h"

int	check_size(size_t size);

t_vector	*create_blank_vector(size_t size)
{
	t_vector	*vector;

	vector = malloc(sizeof(t_vector));
	if (vector == NULL)
		return (NULL);
	vector->size = size;
	vector->data = calloc(size, sizeof(long double));
	if (vector->data == NULL)
	{
		free(vector);
		return (NULL);
	}
	return (vector);
}

int	check_sizes(t_vector_array *array)
{
	size_t	index;
	size_t	size;

	index = 0;
	size = array->vectors[0]->size;
	if (!check_size(size))
		return (0);
	while (index < array->count)
	{
		if (size != array->vectors[index]->size)
			return (0);
		index++;
	}
	return (1);
}

int	check_size(size_t size)
{
	if (size <= 0)
		return (0);
	return (1);
}

t_vector	*fill_vector(FILE *fd)
{
	size_t		size;
	t_vector	*vector;

	if (fd == NULL)
		return (NULL);
	size = atoi(fgetc(fd));
	vector = create_blank_vector(size);
	while ()
}