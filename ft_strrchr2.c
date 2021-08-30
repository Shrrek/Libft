/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperales <jperales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:19:06 by jperales          #+#    #+#             */
/*   Updated: 2021/08/23 18:58:38 by jperales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*s,	int	c)
{
	while (*s)
		s++;
//	printf ("%s\n", s); 
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

int main()
{
	printf("%s", ft_strrchr("CasaJoaquin", '\0'));
	return (0);
}
