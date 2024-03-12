
#include "../libft.h"

void	test_ft_substr()
{
	char *test = "0123456789";

	char *subStr = ft_substr(test, 5, 10);

	int errorState = 1;
	
	if (strcmp(subStr, "5678") != 0)
	{
		printf("========================\n");
		printf("Error: test_ft_substr\n");
		printf("substr(0123456789 ,5, 10) = %s instead 5678", subStr);
		printf("========================\n");
		errorState = 0;
	} 

	if (errorState == 1)
	{
		printf("test_ft_substr: OK!\n");
	}
}