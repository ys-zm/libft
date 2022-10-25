#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/*typedef struct s_list
{
	void	*content;
	struct s_list	*next;
}	t_list;*/

int	main(int argc, char *argv[])
{
	int	i;
	t_list **List = NULL;
	t_list *next_item = NULL;
	t_list *temp = NULL;

	i = 1;
	if (argc > 1)
	{
		temp = *List;
		while (i++ < argc)
		{
			if (!(*List))
				temp = ft_lstnew(argv[i]);
			else 
			{
				next_item = ft_lstnew(argv[i]);
				temp->next = next_item;
				temp = temp->next;
			}
		}
	}
	temp = *List;
	while (*List->next != NULL)
	{
		
		printf("%s\n",(char *)(temp->content));
		temp = temp->next;
	}
}
