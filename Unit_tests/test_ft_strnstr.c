
#include "../libft.h"

void	test_ft_strnstr(void)
{
	char biStr[] = "qw\neqwe";
	char littleStr[] = "qwe";
	size_t size = 20;
	char *origResult = strnstr(biStr, littleStr, size);
	char *mineResult = ft_strnstr(biStr, littleStr, size);
	int errorState = 1;

	if (origResult != mineResult)
	{
		printf("========================\n");
        printf("Error: test_ft_strnstr\n");
		printf("strnstr() = %p \n", origResult);
		printf("ft_strnstr() = %p \n", mineResult);
        printf("========================\n");
        errorState = 0;
	}

	if (errorState == 1)
    {
        printf("test_ft_strnstr: OK!\n");
    }
}