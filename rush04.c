#include <unistd.h>

void ft_putchar(char c);

void ft_print_box(char tl, char tr, char bl, char br, char h, char v, int lines, int cols)
{
	int i = 0;
	while(i < lines)
	{
		int j = 0;
		while(j < cols)
		{
			// Top corners & horizontal 
			if(i == 0)
			{
				if(j == 0)
				{
					ft_putchar(tl);
				}
				else if(j == cols - 1)
				{
					ft_putchar(tr);
					ft_putchar('\n');
				}
				else
				{
					ft_putchar(h);
				}

			}
			// Bottom corners & horizontal
			else if(i == lines - 1)
			{
				if(j == 0)
				{
					ft_putchar(bl);
				}
				else if(j == cols - 1)
				{
					ft_putchar(br);
					ft_putchar('\n');
				}
				else
				{
					ft_putchar(h);
				}
			}
			// Vertical
			else
			{
				if(j == 0)
				{
					ft_putchar(v);
				}
				else if(j == cols - 1)
				{
					ft_putchar(v);
					ft_putchar('\n');

				}
				else
				{
					ft_putchar(' ');
				}
			}	
			j++;
		}
		i++;
	}
}

void rush(int x, int y)
{
	int lines = y;
	int cols = x;

	ft_print_box('A', 'C', 'C', 'A', 'B', 'B', lines, cols);
}
