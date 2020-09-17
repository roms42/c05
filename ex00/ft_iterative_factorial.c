/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberthau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 16:38:20 by rberthau          #+#    #+#             */
/*   Updated: 2020/09/17 18:11:59 by rberthau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;

	i = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i >= 1)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}

#include <stdio.h>

int main ()
{
	printf("%d", ft_iterative_factorial(3));
}
