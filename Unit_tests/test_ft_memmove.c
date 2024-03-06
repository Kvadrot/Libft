
#include "../libft.h"

void test_ft_memmove(void)
{
	char test_arr[15] = "0123456789";
	char test_arr1[15] = "0123456789";
	int testBytes = 4;
	int moveByte = 2;

	int errorState = 1;

	ft_memmove(test_arr + moveByte, test_arr, testBytes);
	memmove(test_arr1 + moveByte, test_arr1, testBytes);
	
	if (memcmp(test_arr, test_arr1, testBytes) != 0)
	{
		printf("========================\n");
        printf("Error: test_ft_memmove\n");
		printf("memcmp(test_arr, test_arr1, testBytes) = %d \n", memcmp(test_arr + 1, test_arr1, testBytes));
        printf("test_arr[] = %s\ntest_arr1[] = %s\n", test_arr, test_arr1);
        printf("========================\n");
        errorState = 0;
	}

	if (errorState == 1)
    {
        printf("test_ft_memmove: OK!\n");
    }

}