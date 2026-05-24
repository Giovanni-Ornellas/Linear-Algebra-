/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganselmo <ganselmo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 15:36:54 by ganselmo          #+#    #+#             */
/*   Updated: 2026/05/23 21:09:08 by ganselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_vector
{
	size_t		size;
	long double	*data;
}	t_vector;

typedef struct s_vector_array
{
	size_t		count;
	t_vector	**vectors;
}	t_vector_array;

int			check_sizes(t_vector_array *array);
t_vector	*create_blank_vector(size_t size);

#endif