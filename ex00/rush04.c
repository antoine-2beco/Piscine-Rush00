/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeuneho <njeuneho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 10:39:39 by njeuneho          #+#    #+#             */
/*   Updated: 2023/09/09 18:24:58 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	line(int x, char g, char m, char d)
{
	if (x <= 0)
		return ;
	ft_putchar(g);
	x--;
	while (x > 1)
	{
		ft_putchar(m);
		x--;
	}
	if (x > 0)
		ft_putchar(d);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (y <= 0)
		return ;
	line(x, 'A', 'B', 'C');
	y --;
	while (y > 1)
	{
		line (x, 'B', ' ', 'B');
		y --;
	}
	if (y > 0)
		line(x, 'C', 'B', 'A');
}
