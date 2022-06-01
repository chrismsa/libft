/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoreira <chmleave@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 10:39:36 by cmoreira          #+#    #+#             */
/*   Updated: 2022/05/16 09:27:56 by cmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*str, const char *little, size_t len)
{
	unsigned int	pos;
	unsigned int	i;

	if (!*little)
		return ((char *)str);
	pos = 0;
	while (str[pos] != '\0' && (size_t)pos < len)
	{
		if (str[pos] == little[0])
		{
			i = 1;
			while (little[i] != '\0' && str[pos + i] == little[i]
				&& (size_t)(pos + i) < len)
				++i;
			if (little[i] == '\0')
				return ((char *)&str[pos]);
		}
		++pos;
	}
	return (0);
}
