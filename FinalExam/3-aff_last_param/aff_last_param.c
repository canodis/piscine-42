#include <unistd.h>

void ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		ft_putstr(argv[argc-1]);
	}
}
