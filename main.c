/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganselmo <ganselmo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 20:45:56 by ganselmo          #+#    #+#             */
/*   Updated: 2026/05/23 21:10:15 by ganselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "math/vector.h"
#include "math/vector_operations.h"

static void	print_vector(t_vector *vector)
{
	size_t	index;

	index = 0;
	printf("[ ");
	while (index < vector->size)
	{
		printf("%Lf ", vector->data[index]);
		index++;
	}
	printf("]\n");
}

int	main(void)
{
	t_vector		*v1;
	t_vector		*v2;
	t_vector		*result;
	t_vector_array	array;

	v1 = create_blank_vector(3);
	v2 = create_blank_vector(2);
	v1->data[0] = 1;
	v1->data[1] = 2;
	v1->data[2] = 3;
	v2->data[0] = 4;
	v2->data[1] = 5;
	array.count = 2;
	array.vectors = malloc(sizeof(t_vector *) * 2);
	array.vectors[0] = v1;
	array.vectors[1] = v2;
	result = add_vectors(&array);
	print_vector(result);
	return (0);
}