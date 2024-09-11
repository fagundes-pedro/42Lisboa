#include <stdio.h>
#include <string.h>

int     ft_strncmp(char *s1, char *s2, unsigned int n);

int     main(void)
{
        char    *s1;
        char    *s2;
	unsigned int	n;

	n = 12;
        s1 = "Palavra";
        s2 = "Palavra1234567";

        printf("A diferenca usando a funcao e: %d\n", ft_strncmp(s1, s2, n));
	printf("A diferenca com a funcao pronto e: %d", strncmp(s1, s2, n));

        return (0);
}
