#include "../../includes/minishell.h"

char	**get_copy(char **d_tab)
{
	char	**new_dtab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	new_dtab = malloc(sizeof(char **) * ft_strlen_double(d_tab));
	while (d_tab[i])
	{
		new_dtab[i] = malloc(sizeof(char) * ft_strlen(d_tab[i]) + 1);
		new_dtab[i] = ft_strcpy(new_dtab[i], d_tab[i]);
		i++;
	}
	return (new_dtab);
}

t_blocks	*fromtab_toll(char **args)
{
	return (get_ll(args));
}