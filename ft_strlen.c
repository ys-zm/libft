/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 14:29:22 by yzaim         #+#    #+#                 */
/*   Updated: 2022/11/01 16:29:44 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	x;

	x = 0;
	while (*s++ != 0)
		x++;
	return (x);
}
