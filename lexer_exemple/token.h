#ifndef TOKEN_H
# define TOKEN_H

#include "lexer.h"

typedef struct s_token
{
	enum
	{
		TOKEN_ID,
		TOKEN_EQUALS,
		TOKEN_STRING,
		TOKEN_SEMI,
		TOKEN_LPAREN,
		TOKEN_RPAREN,
	} type ;
	char	*value;
}	t_token;

t_token *init_token(int type, char *value);

#endif