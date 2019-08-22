/*gcc -Wall -Wextra -Werror -o test test.c norminette -R CheckForbiddenSourceHeader*/
#include <unistd.h>
#include <stdio.h>
#include "ex01/ft_foreach.c"
#include "ex03/ft_any.c"
#include "ex05/ft_is_sort.c"
#include "ft_putnbr.c"

int		ft_h(int a1, int a2)
{
	if (a1 < a2)
		return (-1);
	else if (a1 == a2)
		return (0);
	else
		return (1);
}

int		main(void)
{
	int arr[9] = {1,2,3,4,5,6,7,8,9};
	int arr1[9] = {9,8,7,6,5,4,3,2,1};
	int arr2[3] = {1,2,1};

	printf("%d",ft_is_sort(arr, 9, &ft_h));
	printf("%d",ft_is_sort(arr1, 9, &ft_h));
	printf("%d",ft_is_sort(arr2, 3, &ft_h));
	return(0);
}

int		ft_putchar(char c)
{
		write(1, &c, 1);
		return (0);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
