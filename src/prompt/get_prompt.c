#include "../../includes/minishell.h"

int get_index_path(char *path)
{

	int		i;
	int		k;
	int		length;

	i = 0;
	k = 0;
	length = ft_strlen(path) - 1;
	while (path[length])
	{
		if (path[length] == '/')
		{
			k++;
			if (k == 2)
				return (length);
		}
		length--;
	}
	return (-1);
}

char	*get_path()
{
	char	*path;
	int 	index;
	char	*new_path;
	int		i;

	i = 0;
	path = malloc(sizeof(char) * 50);
	getcwd(path, 50);
	index = get_index_path(path);
	new_path = malloc(sizeof(char) * ((ft_strlen(path) - index) + 1) + 1);
	while (path[index])
	{
		new_path[i] = path[index];
		i++;
		index++;
	}
	new_path = ft_strjoin("~", new_path);
	return (new_path);
}

char	*getplace()
{
	char	*place;
	char	*info;
	int 	i;
	int 	j;

	j = 6;
	i = 0;
	place = malloc(sizeof(char) * 6 + 1);
	info = getenv("SESSION_MANAGER");
	while(info[j] && i < 6)
	{
		place[i] = info[j];
		i++;
		j++;
	}
	return (place);
}

char	*get_bf_prompt()
{
	
	char	*my_prompt;

	my_prompt = NULL;

	my_prompt = ft_strjoin(my_prompt, getenv("USER"));
	my_prompt = ft_strjoin(my_prompt, "@");
	my_prompt = ft_strjoin(my_prompt, getplace());
	my_prompt = ft_strjoin(my_prompt, ":");
	my_prompt = ft_strjoin(my_prompt, get_path());
	my_prompt = ft_strjoin(my_prompt, "$ ");
	return (my_prompt);
}

void	get_prompt(char **my_env)
{
	char	*entry;
	int		int_mode;
	char	*my_prompt;

	my_prompt = get_bf_prompt();
	while(int_mode)
	{
		int_mode = isatty(STDIN_FILENO);
		if (int_mode == 1)
		{
			entry = readline(my_prompt);
			// RAJOUTER CONDITION SI CA FOIRE
	        add_history( entry ); //add it to the history
			parse_args(entry);
        }
	}
}