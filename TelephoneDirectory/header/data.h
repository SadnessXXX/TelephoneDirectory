#ifndef DATA_H
#define DATA_H


#include "defines.h"

#include <stddef.h>


typedef struct {
	char FullName[NAME_LENGTH];
	char Phone[PHONE_LENGTH];
} Entry;

typedef struct {
	Entry* entryList;
	size_t size;
} PhoneBook;

void addRecord(PhoneBook *book);
void showInfo(PhoneBook* book);
void removeRecord(PhoneBook* book);
void searchRecord(PhoneBook* book);
void manageRecord(PhoneBook* book);


#endif // !DATA_H
