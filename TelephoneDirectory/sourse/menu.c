#include "../header/defines.h"
#include "../header/menu.h"
#include "../header/data.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>




void init(PhoneBook* book){
	int op = 0;

	for (;;) {
		
		printf("Select an operation:\n1. Add a record.\n2. Show all records.\n3. Delete a record.\n4. search a record.\n5. Manage a record.\nSelect an action: ");

		(void)scanf("%d", &op);

		if (op == 0) break;
		switch (op) {
		case 1:
			addRecord(book);
			break;
		case 2:
			showInfo(book);
			break;
		case 3:
			removeRecord(book);
			break;
		case 4:
			searchRecord(book);
			break;
		case 5:
			manageRecord(book);
			break;
		}
		
	}
}

void clear(PhoneBook* book){
	free(book->entryList);
	book->entryList = NULL;
	book->size = 0;
}
