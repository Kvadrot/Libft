
#include "../libft.h"

void test_ft_strtrim()
{
	char *s1 = "1 2";
	char *set = " ";
	char *res = ft_strtrim(s1, set);

	// printf("%lu\n", ft_strlen(res));
	printf("res = %s\n", res);
}