#include "../../includes/minishell.h"

t_datas	*ft_lstnew(char *args)
{
	t_datas	*new;

	new = ft_calloc(1, (sizeof(t_datas)));
	new->data = args;
	return (new);
}
