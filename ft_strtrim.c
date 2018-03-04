#include "libft.h"

char		*ft_strtrim(const char *s)
{
	char	*new;
	size_t	size;
	size_t	i;

	i = 0;
	size = 0;
	while (s[i + size] == ' ' || s[i + size] == '\t' || s[i + size] == '\n')
		i++;
	while (s[i + size] && s[i + size] != ' ' &&
				s[i + size] != '\t' && s[i + size] != '\n')
		size++;
	if (!(new = malloc(size + 1)))
		return (NULL);
	size = 0;
	while (s[i + size] && s[i + size] != ' ' &&
				s[i + size] != '\t' && s[i + size] != '\n')
	{
		new[size] = s[i + size];
		size++;
	}
	new[size] = '\0';
	return (new);
}
