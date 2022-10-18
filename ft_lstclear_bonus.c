/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear_bonus.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 13:00:38 by yzaim         #+#    #+#                 */
/*   Updated: 2022/10/18 15:12:23 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_ltclear(t-list **lst, void (*del)(void *))
{
	t_list	*prev;

	prev = *lst;
	while (prev != NULL)
	{
		(*del)(prev->content);
		*lst = *lst->next;
		free(prev);
		prev = *lst;
	}
}
