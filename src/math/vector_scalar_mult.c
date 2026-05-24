/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_scalar_mult.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganselmo <ganselmo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 21:33:53 by ganselmo          #+#    #+#             */
/*   Updated: 2026/05/23 21:49:40 by ganselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math/vector.h"

t_vector	*scalar_multiplication(t_vector *vector, long double scalar)
{
	t_vector	*result_vector;
	size_t		index;

	result_vector = create_blank_vector(vector->size);
	index = 0;
	while (index < result_vector->size)
	{
		result_vector->data[index] = vector->data[index] * scalar;
		index++;
	}
	return (result_vector);
}
