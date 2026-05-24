/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganselmo <ganselmo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 01:16:56 by ganselmo          #+#    #+#             */
/*   Updated: 2026/05/24 01:17:17 by ganselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "io/vector_parser.h"

int	main(void)
{
	FILE	*file;
	size_t	size;
	size_t	lines;

	file = fopen("vectors.txt", "r");

	if (file == NULL)
	{
		printf("Error opening file\n");
		return (1);
	}

	size = file_size(file);

	printf("File size: %zu characters\n", size);

	rewind(file);

	lines = count_file_vectors(file);

	printf("File lines: %zu\n", lines);

	fclose(file);

	return (0);
}
