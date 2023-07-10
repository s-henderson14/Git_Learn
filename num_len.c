#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	num_len(int	num)
{	
	int	count;
	
	count = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		count++;
		num /= 16;
	}
	return (count);
}

/*int	main()
{
	int	num = 453488882;

	printf("%d\n", num_len(num));
	return (0);
}*/
