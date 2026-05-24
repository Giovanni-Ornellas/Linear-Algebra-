/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_parser.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganselmo <ganselmo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 15:50:33 by ganselmo          #+#    #+#             */
/*   Updated: 2026/05/23 17:50:01 by ganselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_PARSER_H
# define VECTOR_PARSER_H

# include "vector/vector.h"

t_vector		*parse_vector(FILE *file);

t_vector_array	*parse_vector_array(FILE *file);

#endif