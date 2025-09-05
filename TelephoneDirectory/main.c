#include "header/menu.h"
#include "header/data.h"

int main(void) {
	PhoneBook book = { .size = 0,.entryList = NULL };

	init(&book);
	clear(&book);

	return 0;
}