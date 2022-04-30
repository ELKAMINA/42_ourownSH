#include "../../includes/minishell.h"

t_datas	*ft_lstlast(t_datas *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
