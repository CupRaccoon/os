#ifndef MYLIB_H_
#define MYLIB_H_

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

#endif