/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 14:04:40 by yzaim         #+#    #+#                 */
/*   Updated: 2022/10/11 10:46:22 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h" 

int	ft_isalpha(int c);
int	ft_isdigit(int c);

int	ft_isalnum(int c)
{
	return ((ft_isalpha(c)) || (ft_isdigit(c)));
}
