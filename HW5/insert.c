#include <stdio.h>
#include <string.h>
#include "mylib.h"


void insert() {
	printf("insert\n");

	struct ContactPoint *new_info = (struct ContactPoint *)malloc(sizeof(struct ContactPoint));
	//start->next = info;
	char schoolnumber[20], name[40], zip[20], address[40];

	printf("schoolnumber : ");
	scanf("%s", schoolnumber, 20);
	strcpy(new_info->schoolnumber, 20, schoolnumber);

	printf("name : ");
	scanf("%s", name, 40);
	strcpy(new_info->name, 40, name);

	printf("zip : ");
	scanf("%s", zip, 20);
	strcpy(new_info->zip, 20, zip);

	printf("address : ");
	scanf("%s", address, 40);
	strcpy(new_info->address, 40, address);

	new_info->next = NULL;

	if (start = NULL) {
		info = new_info;
		start = new_info;
	}
	else {
		new_info->next = info;
		start = new_info;
		info = start;
	}

}
