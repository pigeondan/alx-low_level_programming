#include "main.h"

/**
  * _memset - main function of the prototype
  *
  * @b: The value used to fill the memory
  *
  * @s: Function paramater
  *
  * @n: Function parameter
  *
  * Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	s[a] = b;
	return (s);
}


Task 1

#include "main.h"

/**
  * _memcpy - main function prototype
  *
  * @src: Source parameter
  *
  * @dest: Destination parameter
  *
  * @n: Function parameter
  *
  * Return: Copied memory
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
	dest[k] = src[k];
	}
	return (dest);
}
