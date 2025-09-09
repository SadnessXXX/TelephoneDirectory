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

	
	Entry* tmp = realloc(book->entryList, (book->size + 1) * sizeof * book->entryList);
	if (tmp == NULL) {
		perror("realloc failed");
		return;
	}

	book->entryList = tmp;
	
	strncpy(book->entryList[book->size].FullName, name, NAME_LENGTH - 1);
	strncpy(book->entryList[book->size].Phone, phone, PHONE_LENGTH - 1);

	book->size++;
	system("cls");
} 

void showInfo(PhoneBook* book) {
	system("cls");
	for (int i = 0; i < book->size; ++i) {
		printf("Name: %s\n", book->entryList[i].FullName);
		printf("Phone: %s\n\n", book->entryList[i].Phone);
	}
	printf("\n");
}

void removeRecord(PhoneBook* book) {
	char data[20];
	
	printf("Enter name or phone number to delete: ");
	(void)scanf("%s", &data);

	for (int i = 0; i < book->size; ++i) {
		if (strcmp(book->entryList[i].FullName, data) == 0 ||
			strcmp(book->entryList[i].Phone, data) == 0)	{

			for (int j = i; j < book->size-1; ++j) {
				book->entryList[j] = book->entryList[j + 1];
			}
			book->size--;
			
			if (book->size > 0) {
				Entry* tmp = realloc(book->entryList, book->size * sizeof(Entry));
				book->entryList = tmp;
			}
			else {
				free(book->entryList);
				book->entryList = NULL;
			}
			

			break;
		}
	}
	system("cls");
}

void searchRecord(PhoneBook* book) {
	char pattern[20];

	printf("Pattern for searching name and phone: ");
	(void)scanf("%s", &pattern);

	system("cls");

	for (int i = 0; i < book->size; ++i) {
		if (strstr(book->entryList[i].FullName, pattern) != 0 ||
			strstr(book->entryList[i].Phone, pattern)    != 0) {
			printf("Match found!\nName: %s\nPhone: %s\n\n", 
				book->entryList[i].FullName, 
				book->entryList[i].Phone);
			
		}
	}
}

void manageRecord(PhoneBook* book){

	system("cls");
}
