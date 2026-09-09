#include <stdio.h>
#include <stdarg.h>

int	sum_all(int count, ...)
{
	va_list	list;
	int	i;
	int	sum;

	va_start(list, count);
	i = 0;
	sum = 0;
	while (i < count)
	{
		sum = sum + va_arg(list, int);
		i++;
	}
	va_end(list);
	return (sum);
}

int	main(void)
{
	int	test1 = sum_all(3, 10, 20, 30);
	int	test2 = sum_all(5, 1, 2, 3, 4, 5);
	int	test3 = sum_all(0);

	printf("%d\n", test1);
	printf("%d\n", test2);
	printf("%d\n", test3);
	return (0);
}
