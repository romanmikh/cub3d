/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_len_char.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocky <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:48:44 by rocky             #+#    #+#             */
/*   Updated: 2024/04/15 16:51:03 by rocky            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_list_len_char(char a[])
{
	int	i;

	i = 0;
	while (a[i] != '\0')
		i++;
	return (i);
}
