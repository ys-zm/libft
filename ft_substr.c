/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 15:32:39 by yzaim         #+#    #+#                 */
/*   Updated: 2022/10/15 17:34:03 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	int				i;
	unsigned int	size;
	
	size = ft_strlen(s);
	i = 0;
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (0);
	while (len > 0 && start < size)
	{
		sub[i] = s[start];
		i++;
		start++;
		len--;
	}
	sub[i] = 0;
	return (sub);
}

/*int	main(void)
{
	char str[] = "123456789";


	printf("%s\n", ft_substr(str, 10, 5));
}*/
