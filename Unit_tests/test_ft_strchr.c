
#include "../libft.h"

void	test_ft_strchr(void)
{
	int errorState = 1;
	char testStringArr[] = "01234567899 qwdjko okDJ32J98U9 283U0U0RU20 DDASD52352g7808-3UR0UK";

	for (int i = 0; i < 250; i++)
	{
		if (strchr(testStringArr, i) != ft_strchr(testStringArr, i))
		{
			printf("========================\n");
			printf("Error: test_ft_strchr\n");
			printf("strchr(i = %d) = %p, ft_strchr(i = %d) = %p \n", i, strchr(testStringArr, i), i, ft_strchr(testStringArr, i) );
			printf("========================\n");
			errorState = 0;
		} 
	}
	if (errorState == 1)
	{
		printf("test_ft_strchr: OK!\n");
	}
	
}