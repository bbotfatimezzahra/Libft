/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbbot <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:22:47 by fbbot             #+#    #+#             */
/*   Updated: 2023/12/01 11:51:54 by fbbot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>

int	main()
{
	/*
	//isalpha
	printf("isalpha\n");
	char arg;
	printf("mine : %d\n",ft_isalpha('a'));
	printf("original : %d\n",isalpha('a'));

	//toupper
	printf("toupper\n");
	char arg;
	printf("mine : %d\n",ft_toupper(INT_MIN));
	printf("original : %d\n",toupper(INT_MIN));

	//strlen
	printf("strlen\n");
	char *arg = "hello\200ooo";
	printf("mine : %zu\n",ft_strlen(arg));
	printf("original : %zu\n",strlen(arg));
	
	//strlcpy
	printf("strlcpy\n");
	char dst[25] = "NULL\200 vim";
	printf("mine : %zu\n",ft_strlcpy(dst,NULL,sizeof(dst)));;
	printf("%s\n",dst);
	char ds[25] = "NULL\200 vim";
	printf("original : %zu\n",strlcpy(ds,NULL,sizeof(ds)));
	printf("%s\n",ds);
	*/
/*
	//strlcat
	printf("strlcat\n");
	char dst[25] = "NULL";
	char *s = dst;
	printf("mine : %zu\n",ft_strlcat(dst,s,50));;
	printf("%s\n",dst);
	char ds[25] = "NULL";	
	char *s = ds;
	printf("original : %zu\n",strlcat(ds,s,25));
//	printf("%s\n",ds);

	//atoi
	printf("%d\n", ft_atoi("-9255555555555555555555555555555555555555555555555555233720368547758090"));
	printf("%d\n", atoi("-9255555555555555555555555555555555555555555555555555233720368547758090"));

	//calloc
	printf("%zu \n", sizeof(ft_calloc((SIZE_MAX /sizeof(char)) + 4, sizeof(char))));
	printf("%zu \n", sizeof(calloc((SIZE_MAX /sizeof(char)) + 4, sizeof(char))));
	
	//memchr
	printf("%s\n", ft_memchr(NULL, 'z', 0));
	printf("%s\n", memchr(NULL, 'z', 0));

	//strchr
	printf("%s\n", ft_strchr("asd\200", '\0'));
	printf("%s\n", strchr("asd\200", '\0'));

	//strjoin
	char *str1 = "str 1";
	char *str2 = "";
	printf("%zu\n", ft_strlen(ft_strjoin(str1, str2)));
	printf("%s\n", (ft_strjoin(str1, str2)));
*/

	//strnstr
	printf("%s\n", ft_strnstr(NULL, "asd", 0));
	printf("%s\n", strnstr(NULL, "asd", 0));	
}
