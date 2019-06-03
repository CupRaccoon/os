#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct ContactPoint {
	char schoolnumber[20];
	char name[40];
	char zip[20];
	char address[40];
	struct ContactPoint *next;

}list_entry;

struct ContactPoint *start;
struct ContactPoint *last;
struct ContactPoint *info;
int menuSelect();
void insert();
void delete();
void search();
void display();
void quit();



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
struct ContactPoint *info = NULL;




int main() {
	int choice;

	start = last = info = NULL;

	for (;;) {
		choice = menuSelect();


		switch (choice) {
		case 1:
			insert();
			break;
		case 2:
			delete();
			break;
		case 3:
			display();
			break;
		case 4:
			search();
			break;
		case 5:
			quit();
			exit(0);
			break;
		}
	}

		return 0;
	}




void insert() {
	printf("insert\n");

	struct ContactPoint *new_info = (struct ContactPoint *)malloc(sizeof(struct ContactPoint));
	//start->next = info;
	char schoolnumber[20], name[40], zip[20], address[40];

	printf("schoolnumber : ");
	scanf_s("%s",schoolnumber,20);
	strcpy_s(new_info->schoolnumber,20,schoolnumber);

	printf("name : ");
	scanf_s("%s",name,40);
	strcpy_s(new_info->name,40,name);

	printf("zip : ");
	scanf_s("%s",zip,20);
	strcpy_s(new_info->zip,20,zip);

	printf("address : ");
	scanf_s("%s",address,40);
	strcpy_s(new_info->address,40,address);

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




void search() {
	char schoolnumber[20];
	printf("search\n");
	printf("search for schoolnumber : ");
	scanf_s("%s", schoolnumber,20);
	while (info != NULL) {
		if (strcmp(info->schoolnumber,schoolnumber) == 0) {
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



void quit() {
	printf("quit\n");
	struct ContactPoint *temp = NULL;
	if (info != NULL) {
		temp = info;
		free(info);
		info = temp->next;

	}
	free(temp);
}


