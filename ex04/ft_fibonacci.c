/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberthau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 18:39:13 by rberthau          #+#    #+#             */
/*   Updated: 2020/09/17 20:27:34 by rberthau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	int n;
	
	n = 1;
	if (index < 0)
		return (0);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index >= 2)
		n = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (n);
}

#include <stdio.h>

int main ()
{
    printf("%d", ft_fibonacci(6));
}
