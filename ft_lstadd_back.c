/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <student@42.tr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:01:51 by fakman            #+#    #+#             */
/*   Updated: 2022/12/22 23:41:11 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!*lst)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}
/*
int main()
{
	t_list *list = (t_list*)malloc(sizeof(t_list));
	list = NULL;
	t_list *new = ft_lstnew((void *)3);
	t_list *new2 = ft_lstnew((void *)11);
	t_list *new3 = ft_lstnew((void *)2);
	t_list **x = &list;
	ft_lstadd_back(x,new);
	ft_lstadd_back(x,new2);
	ft_lstadd_back(x,new3);
	while (list)
	{
		
		printf("%d\n", (int)list->content);
		list = list->next;
	}
}*/