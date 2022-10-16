#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	
	ptr = malloc(size * count);
	if (ptr)
		ft_bzero(ptr, size * count);
	return ptr;
}
//setting nulls to each byte, does that mean that you yours ints 
