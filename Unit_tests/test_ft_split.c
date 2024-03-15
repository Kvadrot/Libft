
#include "../libft.h"

void test_ft_split()
{
	char *test =   "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
	char spaceChar = ' ';

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