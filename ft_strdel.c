#include "ft.h"

void		ft_strdel(char **as)
{
	free(*as);
	*as = NULL;
}
