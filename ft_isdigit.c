/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidsaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:40:14 by hidsaid           #+#    #+#             */
/*   Updated: 2024/10/27 20:38:54 by hidsaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit( int arg )
{
	if (arg >= '0' && arg <= '9')
	{
		return (1);
	}
	return (0);
}
/*int main()
{
	printf("%d",ft_isdigit(9));
	return 0;
}*/