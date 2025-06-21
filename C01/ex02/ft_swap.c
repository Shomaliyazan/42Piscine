#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int main(void)
{
	int	x=2, y=4, *p, *p1;
	p = &x;
	p1 = &y;

	ft_swap(p, p1);
}
 */	
