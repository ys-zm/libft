/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 13:37:16 by yzaim         #+#    #+#                 */
/*   Updated: 2022/10/14 18:46:36 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		n_len;
	char	*save;

	n_len = ft_strlen(needle);
	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len > 0)
	{
		i = 0;
		save = (char *)haystack;
		while (*haystack == needle[i] && len > 0)
		{
			
			if (i == n_len - 1)
				return (save);
			len--;
			haystack++;
			i++;
		}
		len--;
		haystack++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	str[] = "hello";
	char	str2[] = "hi hello there";

	printf("my func: %s\n", ft_strnstr(str2, str, 15));
}*/

