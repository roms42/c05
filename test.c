/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberthau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 10:20:08 by rberthau          #+#    #+#             */
/*   Updated: 2020/09/18 10:32:15 by rberthau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int test(int nb)
{
	if ((nb % 2))
			return (0);
	return (1);
}

#include <stdio.h>

int main ()
{
    printf("%d", test(97));
}