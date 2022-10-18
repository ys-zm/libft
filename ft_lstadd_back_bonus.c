/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back_bonus.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 12:43:58 by yzaim         #+#    #+#                 */
/*   Updated: 2022/10/18 14:42:03 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *temp;

	if (lst == NULL)
		return (NULL);
	temp = *lst;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
}
