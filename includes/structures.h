#ifndef STRUCTURES_H
# define STRUCTURES_H

#include"structures.h"

//Structure globale partagee par tous les noeux
typedef	struct s_glob
{
	int		nb_pipes;
} t_glob;

//Structure pour cmd line sans pipe
typedef	struct s_datas
{
	char	*data;
	char	*type;
	struct s_datas 	*next;
	struct s_datas 	*previous;
	struct s_glob	*glob;	
} t_datas;

//Structure pour cmd line ac pipe
typedef	struct s_blocks
{
	char	*block;
	char	**spl_bl;
	int		id;
	struct s_datas 	*ll_pipe;
	struct s_blocks 	*next;
	struct s_blocks 	*previous;
} t_blocks;

// Struct pur construire les built-in
typedef	struct s_myBuiltins
{
	char *name;
	int (*func)(void);	
} t_myBuiltins;

typedef struct s_tokens
{
	enum
	{
		TOKEN_HYPHEN,
		TOKEN_RR,
		TOKEN_LL,
		TOKEN_RD,
		TOKEN_PIPE,
		TOKEN_SLASH,
		TOKEN_BSLASH,
		TOKEN_DOLLAR,
		TOKEN_PARENR,
		TOKEN_PARENL,
		TOKEN_BACKETR,
		TOKEN_BRACKETL,
		TOKEN_DQUOTEL,
		TOKEN_DQUOTER,
		TOKEN_SQUOTEL,
		TOKEN_SQUOTER,
	} type;
	char *value;
}	t_tokens

#endif