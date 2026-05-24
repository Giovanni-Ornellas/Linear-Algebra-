/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganselmo <ganselmo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 15:43:58 by ganselmo          #+#    #+#             */
/*   Updated: 2026/05/23 21:08:16 by ganselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math/vector.h"

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
	while (index < array->count)
	{
		if (size != array->vectors[index]->size)
			return (0);
		index++;
	}
	return (1);
}
