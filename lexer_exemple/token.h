#ifndef TOKEN_H
# define TOKEN_H

#include "lexer.h"

typedef struct TOKEN_STRUCT
{
	enum
	{
		TOKEN_ID,
		TOKEN_EQUALS,
		TOKEN_STRING,
		TOKEN_SEMI,
		TOKEN_LPAREN,
		TOEN_RPAREN,
	} type ;
	char	*value;
}	token_T;

token_T *init_token(int type, char *value);

#endif