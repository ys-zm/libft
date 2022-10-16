/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 13:35:55 by yzaim         #+#    #+#                 */
/*   Updated: 2022/10/14 18:13:09 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//locate byte in byte string
//first occurence of c in string s.

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	int			s_len;

	str = (const char *)s;
	s_len = ft_strlen(str);
	while (n-- > 0 && *str != 0)
	{
		if (*str == c)
			return ((void *)str);
		str++;
	}
	return (NULL);
}
