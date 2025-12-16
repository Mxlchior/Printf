/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrelli <melchior.grellier42@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:36:16 by megrelli          #+#    #+#             */
/*   Updated: 2025/12/12 19:17:14 by megrelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdio.h>

int	ft_printchar(char c);
int	ft_printstr(char *str);
int	ft_printnbr(int nb);
int	ft_printf(const char *str, ...)__attribute__((format(printf, 1, 2)));
int	ft_printnbr_uns(unsigned int nb);
int	ft_printhexa(unsigned int nb, char format);
int	ft_printpointer(void *ptr);

#endif