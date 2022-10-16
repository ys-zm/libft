#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*s;
	int		i;

	i = 0;
	s = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!s)
		return 0;
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	s[i] = 0;
	return s;
}