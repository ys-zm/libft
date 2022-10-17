/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 14:48:59 by yzaim         #+#    #+#                 */
/*   Updated: 2022/10/17 17:11:36 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*x;

	x = (unsigned char *)b;
	while (len-- > 0)
	{
		*x = c;
		x++;
	}
	return ((void *)b);
}
