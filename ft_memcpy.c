/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <student@42.tr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:51:32 by fakman            #+#    #+#             */
/*   Updated: 2022/12/23 00:03:34 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	((char *)dest)[i] = '\0';
	return (dest);
}

/*int main()
{
	char src[] = "merhabadeneme";
	char dest[] = "sekn";
	ft_memcpy(dest + 2, dest +, 5);
	printf("%s", dest);
}*/