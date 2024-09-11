#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int size);

int     main(void)
{       
        char dest[50] = "1234";
        char src[] = "56789";
        unsigned int n;

	scanf("%d", &n);
	printf("A strig resultante e: %s\nE o retorno da funcao e: %s", dest, ft_strncat(dest, src, n));
        return (0);
} 
