/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidsaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:33:15 by hidsaid           #+#    #+#             */
/*   Updated: 2024/11/09 16:05:26 by hidsaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char to_uppercase(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_s;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	new_s = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (new_s == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

/*int main()
{
	printf("%s", ft_strmapi("1337 is the best school ever",to_uppercase));
	return (0);
}*/
