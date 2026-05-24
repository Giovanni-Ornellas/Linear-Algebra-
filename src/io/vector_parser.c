/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_parser.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganselmo <ganselmo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 15:50:17 by ganselmo          #+#    #+#             */
/*   Updated: 2026/05/24 01:31:36 by ganselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io/vector_parser.h"

size_t	file_size(FILE *fd)
{
	size_t	size;

	if (fd == NULL)
		return (0);
	size = 0;
	while (fgetc(fd) != EOF)
		size++;
	rewind(fd);
	return (size);
}

size_t	count_file_vectors(FILE *fd)
{
	size_t	count;
	int		letter;

	if (fd == NULL)
		return (0);
	count = 0;
	letter = fgetc(fd);
	while (letter != EOF)
	{
		if (letter == '\n')
			count++;
		letter = fgetc(fd);
	}
	rewind(fd);
	count /= 2;
	return (count);
}
