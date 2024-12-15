/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidsaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:48:05 by hidsaid           #+#    #+#             */
/*   Updated: 2024/11/08 10:41:00 by hidsaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char	*ft_strcpy(char *dest, char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

static char	*fill_string(char *s, int n, int i)
{
	if (n == 0)
		ft_strcpy(s, "0");
	else if (n < 0)
	{
		n = n * -1;
		s[0] = '-';
		while (n != 0 && i > 0)
		{
			s[i] = (n % 10) + '0';
			n = n / 10;
			i--;
		}
	}
	else
	{
		while (n != 0 && i >= 0)
		{
			s[i] = (n % 10) + '0';
			n = n / 10;
			i--;
		}
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;
	int		i;

	len = count_digits(n) + 1;
	if (n < 0)
		len = count_digits(n) + 2;
	s = (char *)malloc(len * sizeof(char));
	if (s == NULL)
		return (NULL);
	if (n == -2147483648)
	{
		ft_strcpy(s, "-2147483648");
		return (s);
	}
	i = len - 1;
	s[i] = '\0';
	i--;
	fill_string(s, n, i);
	return (s);
}
/*int main()
{
        printf("%s",ft_itoa(67));
        return (0);
}*/
