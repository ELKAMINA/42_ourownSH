#ifndef MINISHELL_H
# define MINISHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <readline/readline.h>
#include <readline/history.h>

typedef	struct s_datas
{
	char	*data;
	struct s_datas *next;
	struct s_previous *previous;	
} t_datas;

//External functions
size_t	ft_strlen(const char *str);
size_t	ft_strlen_double(char **str);
char	*ft_strcpy(char	*dest, char	*src);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
//Main functions
void	get_prompt(char **env);
char	**get_copy_env(char **env);



#endif