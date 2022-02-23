/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:37:51 by ydumaine          #+#    #+#             */
/*   Updated: 2022/02/23 13:05:02 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
void	*ft_memchr(const char *s, int c, size_t n)
{
	size_t	i;
	
	i = 0;
	while (i < n)
	{
		if (s[i] == c)
			return ((char *)(&s[i]));
		i++;
	}
	return (0);
}