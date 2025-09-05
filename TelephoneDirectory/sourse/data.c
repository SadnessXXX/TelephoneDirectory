#include "../header/data.h"

#include <stdio.h>


void addRecord(PhoneBook* book){
	book->size++;

	char name[NAME_LENGHT];
	char phone[PHONE_LENGHT];

	printf("Write the name: ");
	(void)scanf("%s", name);
	
	printf("Write the phone: ");
	(void)scanf("%s", phone);


	Entry** tmp = realloc(book->entryList, book->size * sizeof * book->entryList);
	if (tmp != NULL){
		book->entryList = tmp;
	}
	else {
		book->entryList = malloc(book->size * sizeof * book->entryList);
	}

	book->entryList[book->size - 1] = malloc(sizeof(Entry));

	strcpy(book->entryList[book->size - 1]->FullName, name);
	strcpy(book->entryList[book->size - 1]->Phone, phone);
}

void showInfo(PhoneBook* book) {
	
}

void removeRecord(PhoneBook* book) {

}

void searchRecord(PhoneBook* book) {

}

void manageRecord(PhoneBook* book){

}
