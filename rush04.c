/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgoh <isgoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 10:59:30 by isgoh             #+#    #+#             */
/*   Updated: 2024/03/17 17:22:49 by mmohd-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	xW;
	int	yH;

	xW = 0;
	yH = 1;
	while ((yH <= y && xW <= x))
	{
		xW++;
		if (xW >= x + 1)
		{
			ft_putchar('\n');
			xW = 0;
			yH = yH + 1;
		}
		else if ((xW == 1 && yH == 1) || (xW >= x && yH >= y && y != 1))
			ft_putchar('A');
		else if ((xW == x && yH == 1) || (xW == 1 && yH == y))
			ft_putchar('C');
		else if ((xW >= 2 || xW == x - 1) && (yH == 1 || yH == y))
			ft_putchar('B');
		else if ((xW == 1 || xW == x) && (yH >= 2 || yH == y - 1))
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}
