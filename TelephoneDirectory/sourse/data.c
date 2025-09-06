#include "../header/data.h"

#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 


void addRecord(PhoneBook* book){
	
	
	char name[NAME_LENGTH];
	char phone[PHONE_LENGTH];

	printf("Write the name: ");
	(void)scanf("%9s", name);
	
	printf("Write the phone: ");
	(void)scanf("%19s", phone);

	
	Entry** tmp = realloc(book->entryList, (book->size + 1) * sizeof * book->entryList);
	if (tmp == NULL) {
		perror("realloc failed");
		return;
	}

	book->entryList = tmp;
	
	book->entryList[book->size] = malloc(sizeof(Entry));
	
	strcpy(book->entryList[book->size]->FullName, name);
	strcpy(book->entryList[book->size]->Phone, phone);

	book->size++;
	system("cls");
}

void showInfo(PhoneBook* book) {
	system("cls");
	for (int i = 0; i < book->size; ++i) {
		printf("Name: %s\n", book->entryList[i]->FullName);
		printf("Phone: %s\n", book->entryList[i]->Phone);
	}
	printf("\n");
}

void removeRecord(PhoneBook* book) {
	system("cls");
}

void searchRecord(PhoneBook* book) {
	system("cls");
}

void manageRecord(PhoneBook* book){
	system("cls");
}
