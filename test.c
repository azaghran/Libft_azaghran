#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <ctype.h>
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = s1;
	p2 = s2;
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}

int main()
{
    const char *src = "Hello, world!";
    char *dup;

    // Test 1: Normal string duplication
    dup = ft_strdup(src);
    if (dup)
    {
        printf("Original: %s\n", src);
        printf("Duplicate: %s\n", dup);
        free(dup);
    }
    else
    {
        printf("Memory allocation failed for normal string.\n");
    }

    // Test 2: Empty string duplication
    src = "";
    dup = ft_strdup(src);
    if (dup)
    {
        printf("Original: \"%s\"\n", src);
        printf("Duplicate: \"%s\"\n", dup);
        free(dup);
    }
    else
    {
        printf("Memory allocation failed for empty string.\n");
    }

    // Test 3: Long string duplication
    src = "This is a very long string to test the ft_strdup function. It should handle long strings correctly.";
    dup = ft_strdup(src);
    if (dup)
    {
        printf("Original: %s\n", src);
        printf("Duplicate: %s\n", dup);
        free(dup);
    }
    else
    {
        printf("Memory allocation failed for long string.\n");
    }

    return 0;
}