#include <stdio.h>

void main()
{
	int num;
	scanf_s("%d", &num);

	if (num >= 0) {
		printf("%d", num);
	}
	else {
		printf("%d", -num);
	}
}
