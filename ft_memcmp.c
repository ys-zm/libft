/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 17:09:17 by yzaim         #+#    #+#                 */
/*   Updated: 2022/10/17 17:09:54 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//compares s1 byte to s2 byte. both are n bytes long;

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*str1;
	const char	*str2;

	str1 = (const char *)s1;
	str2 = (const char *)s2;
	while (n-- > 0)
	{
		if (*str1 == *str2)
			return (*str1 - *str2);
		if (*str1 == 0 || *str2 == 0)
			return (*str1 - *str2);
	}
	return (0);
}
