/*
** EPITECH PROJECT, 2017
** libC
** File description:
** strcasecmp.c
*/

#include "../ctype/ctype.h"
#include "strings.h"

int strcasecmp(const char *s1, const char *s2)
{
	int c1;
	int c2;

	for (size_t i = 0; s1[i] != 0; ++i) {
		c1 = tolower(s1[i]);
		c2 = tolower(s2[i]);
		if (c1 != c2) {
			if (c1 > c2)
				return 1;
			else
				return -1;
		}
	}
	return 0;
}