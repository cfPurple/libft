char *ft_strchr(const char *s, int c)
{
	int i;
	int t;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			t = i;
		i++;
	}
	if (s[t] == c)
		return((char *)s[t]);
	return (0);
}