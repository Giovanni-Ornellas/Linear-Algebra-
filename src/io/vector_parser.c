/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_parser.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganselmo <ganselmo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 15:50:17 by ganselmo          #+#    #+#             */
/*   Updated: 2026/05/23 19:44:16 by ganselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/io/vector_parser.h"

/*
	O que a função deve fazer:
		1. Pegar quantos vetores forem os que 
*/
t_vector	*parse_vector(FILE *file);
{
	FILE	*file;

	file = fopen("../../vectors.txt", "r");
	if (file == NULL)
		return (1);
	fclose(file);
	return (vector);
}

t_vector_array	*parse_vector_array(FILE *file)
{

	
}