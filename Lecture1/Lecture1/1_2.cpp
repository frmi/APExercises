//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct{
//	char road[15];
//	int roadNumber;
//	char town[20];
//} address;
//
//typedef struct{
//	int idNumber;
//	char firstName[10],
//		lastName[20];
//	address location;
//} person;
//
//void print_person(const person p){
//	printf("%s %s\n%s %-4d\n%s\n\n",
//		p.firstName, p.lastName,
//		p.location.road, p.location.roadNumber,
//		p.location.town);
//}
//
//void move_person(person *p, address *new_address){
//	p->location = *new_address;
//}
//
//person move_person_new(person p, address new_address){
//	p.location = new_address;
//	return p;
//}
//
//int main(void) {
//	person morten =
//	{ 190583,
//	"Morten", "Madsen",
//	{ "Bredgade", 23, "Middelfart" }
//	};
//	address aalborg_address =
//	{ "Boulevarden", 33, "Aalborg" };
//
//	//move_person(&morten, &aalborg_address);
//	person morten2 = move_person_new(morten, aalborg_address);
//	print_person(morten);
//	print_person(morten2);
//
//	return 0;
//}