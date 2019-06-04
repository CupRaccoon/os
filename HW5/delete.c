#include <stdio.h>
#include <string.h>
#include "mylib.h"




void delete() {
	printf("delete\n");
	struct ContactPoint *temp = NULL;
	struct ContactPoint *pre = NULL;

	char schoolnumber[20];
	printf("delete for schoolnumber : ");
	scanf_s("%s", schoolnumber, 20);
	while (info != NULL) {
		if (strcmp(info->schoolnumber, schoolnumber) == 0) {
			if (pre == NULL) {
				temp = info;
				free(info);
				info = temp->next;
			}
			else {
				pre->next = info->next;

				free(info);
				break;
			}
		}
		else {
			pre = info;
			info = info->next;
		}
	}
	if (info == NULL) {
		printf("error\n");
	}
	info = start;
}
