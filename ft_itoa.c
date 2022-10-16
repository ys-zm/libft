/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/15 14:47:39 by yzaim         #+#    #+#                 */
/*   Updated: 2022/10/15 15:06:04 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

//function adds an extra count for the minus sign
////converts to +ve to count len
static int	len(int n)
{
	unsigned int	x;
	int				i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		x = n * -1;
		i ++;
	//	printf("x is: %d\n", x);
	}
	else
		x = n;
	while (x > 0)
	{
		x /= 10;
		i++;
	//	printf("x is now: %d\n", x);
	}
	//printf("i is:%d\n", i);
	return i;
	//printf("i is:%d\n", i);
}

char *ft_itoa(int n)
{
	unsigned int	x;
	char			*str;
	int				i;
	
	x = n;
	i = len(n) - 1;
	//printf("i: %d\n", i);
	str = malloc(sizeof(char) * (i + 2));
	if (!str)
		return (0);
	str[i + 1] = (0);
	if (n == 0)
		str[i] = '0';
	if (n < 0)
	{
		x = n * -1;
		str[0] = '-';
	}
	//printf("x is: %d\n", x);
	while (x > 0)
	{
		str[i] = (x % 10) + 48;
		//printf("char: %c\n", str[i]);
		x /= 10;
		i--;
	}
	//printf("x =: %d\n", x);
	//printf("%c\n", str[0]);
	//printf("%c\n", str[1]);
	return (str);
}

/*int	main(void)
{
	char	*s;

	s = ft_itoa(9);
	printf("final: %s\n", s);
}*/
