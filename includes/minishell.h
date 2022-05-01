#ifndef MINISHELL_H
# define MINISHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "structures.h"
#include <readline/readline.h>
#include <readline/history.h>

#define OP  "OPERATOR"
#define CMD "COMMANDE"
#define OPT "OPTIONS"
#define ARG "ARGUMENTS"
#define PI  "PIPE"


//External functions
size_t		ft_strlen(const char *str);
size_t		ft_strlen_double(char **str);
char		*ft_strcpy(char	*dest, char	*src);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strdup(const char *s1);
char		**ft_split(char const *s, char c);
t_datas		*ft_lstnew(char *args);
void		ft_lstadd_back(t_datas **alst, t_datas *new);
void		*ft_calloc(size_t count, size_t size);
void		ft_bzero(void *s, size_t n);
t_datas		*ft_lstlast(t_datas *lst);
void		ft_exit(t_datas *list);
//Main functions
void		get_prompt(char **env);
char		**get_copy(char **d_tab);
void		parse_args(char	*str);
t_blocks	*fromtab_toll(char **args);
void		*get_ll(char **args);
void	init_struct(t_glob *global);


#endif