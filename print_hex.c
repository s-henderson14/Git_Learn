#include "print_hex.h"

char	*print_hex(unsigned int num)
{
	int		len;
	const char*	hex = "0123456789abcdef";
	char		*str;
	
	len = num_len(num);
	str = malloc(len * sizeof(char) + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num == 0)
		str[0] = hex[0];
	while (num != 0)
	{
		str[--len] = hex[num % 16];
		num /= 16;
	}
	return (str);
}

int	main()
{	
	int	num;

	num = 131690;
	printf("%x\n", 131690);
	printf("%s\n", print_hex(num));
	return (0);
}
