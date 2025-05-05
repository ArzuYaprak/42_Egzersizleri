/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaprak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:30:24 by ayaprak           #+#    #+#             */
/*   Updated: 2025/04/29 11:35:02 by ayaprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(char c)
{
	char	*data;

	data = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(data[(unsigned char)c / 16]);
	ft_putchar(data[(unsigned char)c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < ' ' || str[i] == 127)
			ft_puthex(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
