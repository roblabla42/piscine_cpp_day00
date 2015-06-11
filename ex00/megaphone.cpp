#include <iostream>
#include <string>
#include <locale>
#include <vector>

int		main(int argc, char *argv[]) {
	int i, j;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				if ('a' <= argv[i][j] && argv[i][j] <= 'z')
					std::cout << (char)(argv[i][j] - 'a' + 'A');
				else
					std::cout << argv[i][j];
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
