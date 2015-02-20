#include <iostream>
#include <string>

using namespace std;

typedef struct {
	string text;
	void (*function)(int a, string funcName);
} func;

void activator(func* funcArray, int size, string funcName){
	for (int i = 0; i < size; i++){
		if (funcArray[i].text == funcName){
			funcArray[i].function(i, funcName);
			break;
		}
	}
}

void printFn(string fn){
	cout << "Function " << fn << " returns ";
}

void fn1(int a, string b){
	printFn(b);
	cout << a * 2 << endl;
}

void fn2(int a, string b){
	printFn(b);
	cout << a - 10 << endl;
}

void fn3(int a, string b){
	printFn(b);
	cout << a * a << endl;
}


int main(){
	func *funcArray = new func[3];

	funcArray[0].text = "fn1";
	funcArray[0].function = fn1;
	funcArray[1].text = "fn2";
	funcArray[1].function = fn2;
	funcArray[2].text = "fn3";
	funcArray[2].function = fn3;

	activator(funcArray, 3, "fn3");

	return 0;
}