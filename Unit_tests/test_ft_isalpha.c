
#include "../libft.h"

void	test_ft_isalpha(char testChar)
{
	if (isalpha(testChar) == 0 && ft_isalpha(testChar) != 0)
	{
		printf("========================\n");
		printf("Error: ft_isalpha_test\n");
		printf("isalpha(%c) = 0 but ft_isalpha(%c) = %d\n", testChar, testChar, ft_isalpha(testChar));
		printf("========================\n");
	} else if (isalpha(testChar) > 0 && ft_isalpha(testChar) <= 0) {
		printf("========================\n");
		printf("Error: ft_isalpha_test\n");
		printf("isalpha(%c) = %d but ft_isalpha(%c) = %d\n", testChar, isalpha(testChar), testChar, ft_isalpha(testChar));
		printf("========================\n");
	} else {
		printf("ft_isalpha: OK!\n ");
	}
}