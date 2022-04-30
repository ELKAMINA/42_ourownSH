#include "../../includes/minishell.h"

void	ft_lstadd_back(t_datas **alst, t_datas *new)
{
	t_datas	*last;

	if (*alst == NULL)
	{
		*alst = new;
		return ;
	}
	last = ft_lstlast(*alst);
	last -> next = new;
	new->previous = last;
	new->next = NULL;
}
