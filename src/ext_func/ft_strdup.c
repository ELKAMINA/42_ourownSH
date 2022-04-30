#include "../../includes/minishell.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	i;

	i = 0;
	copy = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	while (s1[i])
	{
		copy[i] = s1[i];
		i ++;
	}
	copy[i] = '\0';
	return (copy);
}
