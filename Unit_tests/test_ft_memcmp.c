
#include "../libft.h"

void	test_ft_memcmp(void)
{
	int errorState = 1;
	char testStringArr[] = "012340123401234567";
	char testStringArr1[] = "012340123401267";
	int byteLimit = 40;



	for (int i = 0; i > byteLimit; i++)
	{

		int origResult = memcmp(testStringArr, testStringArr1, i);
		int mineResult = ft_memcmp(testStringArr, testStringArr1, i);

		if ( origResult != mineResult)
		{
			printf("========================\n");
			printf("Error: test_ft_memcmp\n");
			printf("byteLimit = %d\n" , i);
			printf("memcmp() = %d, ft_memcmp() = %d \n", origResult, mineResult);
			printf("========================\n");
			errorState = 0;
		} 
	}

	if (errorState == 1)
	{
		printf("test_ft_memcmp: OK!\n");
	}
}