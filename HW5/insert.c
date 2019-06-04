#include <stdio.h>
#include <string.h>
#include "mylib.h"


void insert() {
	printf("insert\n");

	struct ContactPoint *new_info = (struct ContactPoint *)malloc(sizeof(struct ContactPoint));
	//start->next = info;
	char schoolnumber[20], name[40], zip[20], address[40];

	printf("schoolnumber : ");
	scanf("%s", schoolnumber);
	strcpy(new_info->schoolnumber,schoolnumber);

	printf("name : ");
	scanf("%s", name);
	strcpy(new_info->name,name);

	printf("zip : ");
	scanf("%s", zip);
	strcpy(new_info->zip,zip);

	printf("address : ");
	scanf("%s", address);
	strcpy(new_info->address,address);

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
