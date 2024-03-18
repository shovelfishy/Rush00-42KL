/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgoh <isgoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 10:59:30 by isgoh             #+#    #+#             */
/*   Updated: 2024/03/18 09:51:30 by isgoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c);

void	rush(int xW, int yH)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while ((y <= yH && x <= xW))
	{
		x++;
		if (x >= xW + 1)
		{
			ft_putchar('\n');
			x = 0;
			y = y + 1;
		}
		else if (x <= 0 || y <= 0)
			write(1, "use positive lah bro", 20);
		else if (x == 1 && y == 1)
			ft_putchar('A');
		else if ((x == xW && y == 1) || (x == 1 && y == yH))
			ft_putchar('C');
		else if (x == xW && y == yH)
			ft_putchar('A');
		else if ((x >= 2 || x == xW - 1) && (y == 1 || y == yH))
			ft_putchar('B');
		else if ((x == 1 || x == xW) && (y >= 2 || y == yH - 1))
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}
