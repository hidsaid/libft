/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidsaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:59:14 by hidsaid           #+#    #+#             */
/*   Updated: 2024/11/04 10:57:36 by hidsaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	if ((*lst)->next != NULL)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = tmp;
		}
	}
	else
		ft_lstdelone(*lst, del);
}
/*void del(void *content)
{
	free(content);
}

int main()
{
	t_list *lst = NULL;
	int *i = malloc(sizeof(int));
	*i = 384;
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Hafsa")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Hafsa")));
    ft_lstclear(&lst, del);
	return 0;
}*/