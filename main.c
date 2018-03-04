#include "ft.h"
#include <stdio.h>

int main()
{
	char t[] = "abcef";

	printf("%s\n", t);
	ft_memmove(t + 2, t, 3);
	printf("%s\n", t);
}
