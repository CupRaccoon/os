#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"



void display() {
	printf("display\n");

	while (info != NULL) {
		printf("schoolnumber : %s\n", info->schoolnumber);
		printf("name : %s\n", info->name);
		printf("zip : %s\n", info->zip);
		printf("address : %s\n\n", info->address);

		info = info->next;

	}
	info = start;
}

