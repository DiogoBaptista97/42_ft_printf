/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbraga-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:50:58 by dbraga-b          #+#    #+#             */
/*   Updated: 2022/11/21 17:50:59 by dbraga-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_printchar(va_list args, int tamanho)
{
	char	c;

	c = va_arg(args, int);
	write(1, &c, 1);
	tamanho++;
	return (tamanho);
}

int	ft_printstr(va_list args, int tamanho)
{
	char	*c;

	c = va_arg(args, char *);
	if (c == NULL)
	{
		write(1, "(null)", 6);
		tamanho += 6;
		return (tamanho);
	}
	ft_putstr_fd(c, 1);
	tamanho += ft_strlen(c);
	return (tamanho);
}
