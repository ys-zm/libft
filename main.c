/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 12:39:30 by yzaim         #+#    #+#                 */
/*   Updated: 2022/10/11 13:43:12 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include "libft.h"

#include <string.h>
#include <ctype.h>

/*int	main(int argc, char *argv[])
{
	int	y;

	y = 1;
	while  (y <= argc)
	{
		printf("%d", (ft_isalpha(argv[y][0]) + 48));
		y++;	
	}
} <-- why was this not working*/

/*int	compare(int in, int exp, int got, char *func)
{
	if (exp != got)
	{
		printf("Oh no! input %d gave %d, but should be %d for %s function\n", in, got, exp, func);
		return 1;
	}
	else
		return 0;
}

int	main(void)
{
	int	lower;
	int	upper;
	int	fails;

	lower = -1000;
	upper = 1000;
	fails = 0;
	
	//is* functions
	for (int i = lower; i < upper; i++)
	{
		fails += compare(i, isalpha(i), ft_isalpha(i), "ft_isalpha");
	}
	
	for (int i = lower; i < upper; i++)
	{
		fails += compare(i, isdigit(i), ft_isdigit(i), "ft_isdigit");
	}	

	for (int i = lower; i < upper; i++)
	{
		fails += compare(i, isalnum(i), ft_isalnum(i), "ft_isalnum");
	}
	for (int i = lower; i < upper; i++)
	{
		fails += compare(i, isascii(i), ft_isascii(i), "ft_isascii");
	}
	for (int i = lower; i < upper; i++)
	{
		fails += compare(i, isprint(i), ft_isprint(i), "ft_isprint");
	//tolower && toupper
	}
	for (int i = lower; i < upper; i++)
	{
		fails += compare(i, toupper(i), ft_toupper(i), "ft_toupper");
	}
	for (int i = lower; i < upper; i++)
	{
		fails += compare(i, tolower(i), ft_tolower(i), "ft_tolower");
	}
}*/
