/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrelli <melchior.grellier42@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:46:57 by megrelli          #+#    #+#             */
/*   Updated: 2025/11/10 14:46:57 by megrelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tab;
	size_t			i;

	tab = malloc(count * size);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < size * count)
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}
