/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmokgawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 14:25:13 by nmokgawa          #+#    #+#             */
/*   Updated: 2020/06/26 14:25:25 by nmokgawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>

char  *ft_strncpy(char *dest,char *src,unsigned int n);

{
   int i;

   for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    for ( ; i < n; i++)
        dest[i] = '\0';

   return dest;
}
