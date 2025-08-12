#include "../header/menu.h"
#include "../header/defines.h"

#include <stdio.h>
#include <locale.h>


void init(){

}

void run(){

}

void choise()
{
	setlocale(LC_ALL, "ru");
	int Choise;

	printf("Select an operation:\n1. Add a record.\n2. Delete a record.\n3. Search.\n4. Manage a record.\nSelect an action: ");

	(void)scanf("%d", &Choise);

	switch (Choise) {
		case 1:
			
			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

			break;
	}
}

void clear(){

}
