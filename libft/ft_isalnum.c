/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungsle <kyungsle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:48:52 by kyungsle          #+#    #+#             */
/*   Updated: 2021/11/14 18:13:50 by kyungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	return (((c >= '0') && (c <= '9'))
		|| ((c >= 'a') && (c <= 'z'))
		|| ((c >= 'A') && (c <= 'Z')));
}
