void ft_memset(char *string, char character, int size)
{
    for (int c = 0; c < size; c++)
    {
        string[c] = character;
    }
}
