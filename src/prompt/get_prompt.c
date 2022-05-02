#include "../../includes/minishell.h"

void	get_prompt(char **my_env)
{
	char	*entry;
	int		int_mode;
	char	*my_prompt;

	my_prompt = "~$ ";
	while(int_mode)
	{
		int_mode = isatty(STDIN_FILENO);
		if (int_mode == 1)
		{
			entry = readline(my_prompt);
			// RAJOUTER CONDITION SI CA FOIRE
	        add_history(entry); //add it to the history
			parse_args(entry);
        }
	}
}