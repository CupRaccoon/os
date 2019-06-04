#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"

int menuSelect() {
	char select[80];
	int num;

	do {
		printf("1. Insert a name\n");
		printf("2. Delete a name\n");
		printf("3. Display\n");
		printf("4. Search\n");
		printf("5. Quit\n");

		printf("Enter your choice: ");

		scanf_s("%d", &num);
	} while (num < 0 || num > 5);

	return num;
}