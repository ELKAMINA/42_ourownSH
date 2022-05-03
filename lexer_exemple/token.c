#include  "token.h"
#include  "lexer.h"

t_token* init_token(int type, char *value)
{
	t_token *token = calloc(1, sizeof(struct s_token));
	token->type = type;
	token->value = value;

	return token;
}