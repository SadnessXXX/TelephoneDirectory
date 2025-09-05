#include "../header/defines.h"
#include "../header/menu.h"
#include "../header/data.h"

#include <stdio.h>



void init(PhoneBook* book)
{
	int op = 0;

	for (;;) {
		printf("Select an operation:\n1. add a record.\n2. Delete a record.\n3. search a record.\n4. Manage a record.\nSelect an action: ");

		(void)scanf("%d", &op);

		if (op == 0) break;
		switch (op) {
		case 1:
			addRecord(&book);
			break;
		case 2:
			showInfo(&book);
			break;
		case 3:
			removeRecord(&book);
			break;
		case 4:
			searchRecord(&book);
			break;
		case 5:
			manageRecord(&book);
			break;
		}
	}
}

void clear(PhoneBook* book){
	for (int i = 0; i < book->size; ++i) {
		free(book->entryList[i]);
	}
	free(book->entryList);
}
