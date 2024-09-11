#include <stdio.h>
#include <stdlib.h>

char    *ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char dest[50] = "1234";
	char src[] = "56789";
	unsigned int n;

	scanf("%d", &n);
	printf("A strig resultante e: %s\nO retorno da funcao e: %s", dest, ft_strlcat(dest, src, n));
	return (0);
}
