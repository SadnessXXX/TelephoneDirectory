#ifndef DATA_H
#define DATA_H

#include "defines.h"


typedef struct {
	char FullName[NAME_LENGHT];
	char Phone[PHONE_LENGHT];
} Entry;

typedef struct {
	
} PhoneBook;

void addRecord();
void removeRecord();
void searchRecord();
void manageRecord();


#endif // !DATA_H
