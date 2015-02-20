#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char *road;
	int roadNumber;
	char *town;
} address;

typedef struct{
	int idNumber;
	char *firstName;
	char *lastName;
	address *location;
} person;

void print_person(const person *p){
	printf("%s %s\n%s %-4d\n%s\n\n",
		p->firstName, p->lastName,
		(p->location)->road, (p->location)->roadNumber,
		(p->location)->town);
}

void move_person(person *p, address *new_address){
	p->location = new_address;
}

int main2(void) {
	/*person morten =
	{ 190583,
	"Morten", "Madsen",
	{ "Bredgade", 23, "Middelfart" }
	};
	address aalborg_address =
	{ "Boulevarden", 33, "Aalborg" };*/

	person *morten = new person;
	morten->idNumber = 190583;
	morten->firstName = "Morten";
	morten->lastName = "Madsen";
	morten->location = new address;
	(morten->location)->road = "Bredgade";
	(morten->location)->roadNumber = 33;
	(morten->location)->town = "Middelfart";

	address *aalborg_address = new address;
	aalborg_address->road = "Boulevarden";
	aalborg_address->roadNumber = 45;
	aalborg_address->town = "Aalborg";

	print_person(morten);
	move_person(morten, aalborg_address);
	print_person(morten);

	return 0;
}