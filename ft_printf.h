/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbraga-b <dbraga-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:18:45 by dbraga-b          #+#    #+#             */
/*   Updated: 2022/11/18 18:08:38 by dbraga-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdarg.h>

int			ft_printf(const char *format, ...);
size_t		ft_strlen(const char *str);
int			ft_printchar(va_list args, int tamanho);
int			ft_printstr(va_list args, int tamanho);
int			ft_printaddr(va_list args, int tamanho);
void		ft_putnubhex_fd(unsigned long int addr, int fd);
int			ft_printdecimal(va_list args, int tamanho);
int			ft_printunsig(va_list args, int tamanho);
size_t		osize16(unsigned long n);
int			ft_longitoa(long int n);
int			ft_printlowerx(va_list args, int tamanho);
int			ft_putnubhex_fd2(unsigned long addr, int fd, int tamanho);
void		ft_putchar_fd(char c, int fd);
void		ft_putnubhexup_fd(unsigned long addr, int fd);
int			ft_printupperx(va_list args, int tamanho);
void		ft_putstr_fd(char *s, int fd);

#endif
