#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main1(){
	time_t t1 = time(NULL),
		t2 = t1 - 7 * 24 * 60 * 60;

	tm *tm1 = localtime(&t1);
	char *tmstr1 = asctime(tm1);
	
	tm *tm2 = localtime(&t2);
	char *tmstr2 = asctime(tm2);

	/*
	The following to calls will print out the same time, since localtime points to an internal object.
	After the first call the time i correct, but the second call changes the value of the internal object.
	The same is relevant for asctime which points to an internal array.
	Thus at the point of printing the values tmstr1 and tmstr2 both point to the same object.

	I think the designers chose this design since they could then save memory by only having one object for 
	the time being used and one array representing the textual representation.

	This means that time.h is not thread safe either.

	To fix this i would instead of return a pointer to a struct i would return a copy of a struct instead.
	*/

	cout << "Time now: " << tmstr1 << endl;
	cout << "Time a week ago: " << tmstr2 << endl;

	return 0;
}