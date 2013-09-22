#include <iostream>

class ExampleClass {
	public:
		int getA();
		ExampleClass();
	private:
		int a;
};

ExampleClass::ExampleClass(){
	a = 1;
}

int ExampleClass::getA(){
	return a;
}

using namespace std;

int main(int argc, const char *argv[])
{
	ExampleClass test1;
	ExampleClass *test2;
	test2 = &test1;
	
	/* test1.a does not work because a is private, can only do this when a is public */
	int i = test2->getA(); // the same as test1.getA()

	cout << i << endl;
	return 0;
}
