
#include "../libft.h"

void test_ft_split()
{
	char *test = "0123|567|94";
	char spaceChar = '|';
	char **mainstr = ft_split(test, spaceChar);
	if (!mainstr)
		printf("gamno");
	// else {
	// 	for (size_t i = 0; i < strlen(*mainstr); i++)
	// 	{
	// 		printf("s = %s\n", mainstr[i]);
	// 	}
	// }
}