#include "../header/menu.h"
#include "../header/data.h"
#include "../header/defines.h"

#include <stdio.h>


void init(){
	
}

void run(){

}

void choise()
{
	int Choise;

	printf("Select an operation:\n1. add a record.\n2. Delete a record.\n3. search a record.\n4. Manage a record.\nSelect an action: ");

	(void)scanf("%d", &Choise);

	switch (Choise) {
		case 1:
			addRecord();
			break;
		case 2:
			removeRecord();
			break;
		case 3:
			searchRecord();
			break;
		case 4:
			manageRecord();
			break;
	}
}

void clear(){

}
