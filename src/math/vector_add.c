/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganselmo <ganselmo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 19:36:41 by ganselmo          #+#    #+#             */
/*   Updated: 2026/05/23 21:08:26 by ganselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math/vector_operations.h"

t_vector	*add_vectors(t_vector_array *array)
{
	size_t		line;
	size_t		index;
	size_t		size;
	t_vector	*result_vector;

	if (array == NULL || array->count == 0)
		return (NULL);
	if (!check_sizes(array))
		return (NULL);
	size = array->vectors[0]->size;
	result_vector = create_blank_vector(size);
	if (result_vector == NULL)
		return (NULL);
	line = 0;
	while (line < array->count)
	{
		index = 0;
		while (index < array->vectors[line]->size)
		{
			result_vector -> data[index] += array->vectors[line]->data[index];
			index++;
		}
		line++;
	}
	return (result_vector);
}
