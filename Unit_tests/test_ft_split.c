
#include "../libft.h"

void test_ft_split()
{
	char *test = "||";
	char spaceChar = '|';
	char **mainstr = ft_split(test, spaceChar);
	if (!mainstr)
		printf("gamno");
	else {
		for (size_t i = 0; mainstr[i] != NULL; i++)
		{
			printf("s = %s\n", mainstr[i]);
		}
	}
}