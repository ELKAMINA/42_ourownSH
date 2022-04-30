#include "../../includes/minishell.h"

char	**get_copy_env(char **env)
{
	char	**my_env;
	int		i;
	int		j;

	i = 0;
	j = 0;
	my_env = malloc(sizeof(char **) * ft_strlen_double(env));
	while (env[i])
	{
		my_env[i] = malloc(sizeof(char) * ft_strlen(env[i]) + 1);
		my_env[i] = ft_strcpy(my_env[i], env[i]);
		i++;
	}
	return (my_env);
}