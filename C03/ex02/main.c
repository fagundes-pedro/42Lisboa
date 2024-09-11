#include <stdio.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src);

int	main(int argc, char **argv)
{
	char	dest[] = "Primeira";
	char	src[] = "Segunda";

//	dest = (char *) malloc(sizeof(char)*50);
//	dest = argv[1];
//	src = argv[2];
	printf("O resultado da concatenacao e: %s\n", ft_strcat(dest, src));
//	free(dest);
	return (0);
}
