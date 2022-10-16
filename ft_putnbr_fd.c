/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 11:50:19 by yzaim         #+#    #+#                 */
/*   Updated: 2022/10/15 16:10:44 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	if_negative(int fd)
{
	write(fd, "-", 1);
}

void	min_int(int fd)
{
	write(fd, "-2147483648", 11);
}


void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		min_int(fd);
		return ;
	}
	else if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n < 0)
	{
		if_negative(fd);
		n = n * -1;
	}
	if (n < 10)
	{
		c = n + '0';
		write(fd, &c, 1);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}

/*int	main(void)
{
	ft_putnbr_fd(-57, 1);
}*/
