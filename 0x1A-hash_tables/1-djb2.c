/**
 * hash_djb2 - hashes a string passed to it
 * @str: The string to be hashed
 * Return: a hash code as an unsigned int
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
