#include <unistd.h>
//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	sort;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] >= tab[i + 1])
			{
				sort = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = sort;
			}
			i++;
		}
		size--;
	}
}
/*
int	main(void)
{
	int	arr[5] = {25, 100, 4, 4, 4};
	int	i = 0;
	ft_sort_int_tab(arr, 5);
	for(int i = 0; i < 5 ; i++){
		printf("%d", arr[i]);
		}
}
*/
