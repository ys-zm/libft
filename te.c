#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
#include <ctype.h>


int	main()
{
	char	**arr;
	int		i;

	i = 0;
	arr = ft_split("xxxx|xx|||xxx|", '|');
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i++;
	}
	return (0);
}
