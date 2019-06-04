#include <stdio.h>
#include <string.h>
#include "mylib.h"


void search() {
	char schoolnumber[20];
	printf("search\n");
	printf("search for schoolnumber : ");
	scanf_s("%s", schoolnumber, 20);
	while (info != NULL) {
		if (strcmp(info->schoolnumber, schoolnumber) == 0) {
			printf("schoolnumber : %s\n", info->schoolnumber);
			printf("name : %s\n", info->name);
			printf("zip : %s\n", info->zip);
			printf("address : %s\n\n", info->address);
			break;
		}
		else {
			info = info->next;
		}
	}
	if (info == NULL) {
		printf("error\n");
	}
	info = start;
}


