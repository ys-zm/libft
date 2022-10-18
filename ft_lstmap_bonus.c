/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 13:10:59 by yzaim         #+#    #+#                 */
/*   Updated: 2022/10/18 15:12:37 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new;
	t_list	*temp;

	temp = lst;
	new_lst = NULL;
	new = NULL;
	while (temp != NULL)
	{
		new = ft_lstnew((*f)(temp->content));
		if (!new)
			ft_lstclear(&new_lst, free(lst));
		ft_lstadd_back(&new_lst, new);
		temp = temp->next;
	}
	return (new_lst);
}
