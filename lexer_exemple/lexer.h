#ifndef LEXER_H
#define LEXER_H

#include "token.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct LEXER_STRUCT
{
	char			c;
	unsigned int 	i;
	char			*contents;
}	lexer_T;

lexer_T* init_lexer(char *contents);
void lexer_advance(lexer_T *lexer);
void lexer_skip_whitespace(lexer_T *lexer);
t_token *lexer_get_next_token(lexer_T *lexer);
t_token *lexer_collect_string(lexer_T *lexer);
t_token *lexer_collect_id(lexer_T *lexer);
char *lexer_get_current_char_as_string(lexer_T *lexer);
t_token* lexer_advance_with_token(lexer_T *lexer, t_token* token);

#endif