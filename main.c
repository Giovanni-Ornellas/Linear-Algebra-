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
	t_vector	*vector;
	t_vector	*result;

	vector = create_blank_vector(3);

	if (vector == NULL)
		return (1);

	vector->data[0] = 1;
	vector->data[1] = 2;
	vector->data[2] = 3;

	printf("Original vector:\n");
	print_vector(vector);

	result = scalar_multiplication(vector, 2);

	if (result == NULL)
		return (1);

	printf("Scalar multiplication by 2:\n");
	print_vector(result);

	free(vector->data);
	free(vector);

	free(result->data);
	free(result);

	return (0);
}