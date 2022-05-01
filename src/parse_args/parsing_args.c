#include "../../includes/minishell.h"

int	check_pipes(char *entry, t_glob *global)
{
	int	i;

	i = 0;
	while (entry[i])
	{
		if (entry[i] == '|')
			global->nb_pipes++;
		i++;
	}
	return (global->nb_pipes);
}

void	*get_blocks(char **args)
{
	t_blocks	*block;
	t_blocks	*c_block;

	block = fromtab_toll(args);
	c_block = block;
	while(c_block)
	{
		c_block->id++;
		c_block->spl_bl = ft_split(c_block->block, ' ');
		c_block->ll_pipe = get_ll(c_block->spl_bl);
		//Mettre tous les cas de figure ossible, si commande ou operator ou fichier ou autre
		
		c_block = c_block->next;
	}
	return (block);
}

void	create_all_args(t_datas *arg_one, t_datas *arg_two,
			char **args)
{
	int	i;

	i = 2;
	while (i < (ft_strlen_double(args)))
	{
		arg_two = ft_lstnew(args[i]);
		ft_exit(arg_two);
		ft_lstadd_back(&arg_one, arg_two);
		i++;
	}
}

void	*get_ll(char **args)
{
	t_datas	*arg_one;
	t_datas	*arg_two;

	if (ft_strlen_double(args) > 1)
	{
		arg_one = ft_lstnew(args[0]);
		ft_exit(arg_one);
		arg_two = ft_lstnew(args[1]);
		ft_exit(arg_two);
		arg_one->next = arg_two;
		arg_two->previous = arg_one;
		create_all_args(arg_one, arg_two, args);
		return (arg_one);
	}
	else if (ft_strlen_double(args) == 1)
	{
		arg_one = ft_lstnew(args[0]);
		ft_exit(arg_one);
		return (arg_one);
	}
	else
		return (NULL);
}

void	parse_args(char	*entry)
{
	char		**args;
	t_datas		*split_args;
	t_glob		*global;
	t_blocks	*blocks;

	global = ft_calloc(1, sizeof(t_glob));
	blocks = ft_calloc(1, sizeof(t_blocks));
	if (check_pipes(entry, global) > 0)
	{
		args = ft_split(entry, '|');
		blocks = get_blocks(args);
	}
	else
	{
		args = ft_split(entry, ' ');
		if (!args[0])
			return ;
		split_args = get_ll(args);
		while (split_args)
		{
			printf("%s\n", split_args->data);
			split_args = split_args->next;
		}
	}
	
}