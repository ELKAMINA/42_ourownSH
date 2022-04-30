#include "../../includes/minishell.h"

void	create_all_args(t_datas *arg_one, t_datas *arg_two,
			char **args)
{
	int	i;

	i = 2;
	while (i <= (ft_strlen_double(args) - 1))
	{
		arg_two = ft_lstnew(args[i]);
		ft_exit(arg_two);
		ft_lstadd_back(&arg_one, arg_two);
		i++;
	}
}

t_datas	*get_ll(char **args)
{
	t_datas	*arg_one;
	t_datas	*arg_two;

	if (ft_strlen_double(args) >= 1)
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
	else
		return (NULL);
}

void	parse_args(char	*entry)
{
	char	**args;
	t_datas	*split_args;

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