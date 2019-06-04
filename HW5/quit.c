#include <stdio.h>
#include "mylib.h"




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


