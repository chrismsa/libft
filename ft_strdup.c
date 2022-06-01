/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoreira <chmleave@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 19:00:20 by cmoreira          #+#    #+#             */
/*   Updated: 2022/05/01 19:19:31 by cmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	char	*cp;
	size_t	i;

	cp = (char *)malloc((ft_strlen(str1) + 1) * sizeof(char));
	if (!cp)
		return (NULL);
	i = 0;
	while (str1[i])
	{
		cp[i] = str1[i];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}
