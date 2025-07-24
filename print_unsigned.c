#include "main.h"

/**
 * print_unsigned - Affiche un entier non signé sur la sortie standard
 * @n: Nombre non signé à afficher
 *
 * Return: Nombre de caractères affichés
 */
int print_unsigned(unsigned int n)
{
	int len = 0;

	if (n / 10) len += print_unsigned(n / 10);
	len += print_char((n % 10) + '0');

	return len;
}
