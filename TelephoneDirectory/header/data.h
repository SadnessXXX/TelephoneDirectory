#ifndef DATA_H
#define DATA_H

#include "defines.h"


typedef struct {
	char FullName[NAME_LENGHT];
	char Phone[PHONE_LENGHT];
} DATA;


void add();
void remove();
void search();


#endif // !DATA_H
