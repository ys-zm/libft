#include <stdio.h>
#include <stdlib.h>
//#include "libft.h"

typedef struct s_list
{
	void	*content;
	struct s_list	*next;
}	t_list;

t_list *ft_lstnew(void *content);

void	ft_lstadd_back(t_list **lst, t_list *new);

int	main(int argc, char *argv[])
{
	int	i;
	t_list *List = NULL;
	t_list *next_item = NULL;
	t_list *temp = NULL;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			if (i == 1)
			{
				List = ft_lstnew(argv[i]);
				temp = List;
			}
			else
			{
				next_item = ft_lstnew(argv[i]);
				//List->next = next_item;
				//List = next_item;
				ft_lstadd_back(&List, next_item);
			}
			i++;
		}
	}
	//List = temp;
	while (temp != NULL)
	{
		
		printf("%s\n",(char *)(temp->content));
		temp = temp->next;
	}
}

//ft_memset(list, 0, sizeof(t_list));
