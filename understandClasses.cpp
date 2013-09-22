#include <iostream>

class ExampleClass {
	public:
		int getA();
		ExampleClass();
	protected:
		int a;
};
	
class DerivedClass : public ExampleClass {
	public:
		int getB();
		DerivedClass(int);
	private:
		int b;
};


ExampleClass::ExampleClass(){
	a = 10;
}

int ExampleClass::getA(){
	return a;
}

DerivedClass::DerivedClass(int input){
	b = input;
}
	
int DerivedClass::getB(){
	return b;
}


using namespace std;

int main(int argc, const char *argv[])
{
	// ExampleClass test1(1);
	// ExampleClass *test2; // can create without constructors because this is just a pointer
	// test2 = &test1;
	
	ExampleClass *test = new ExampleClass; // dynamic objects

	cout << "test= " << test->getA() << endl;

	DerivedClass derTest(4);
	/* This works because when DerivedClass object is created, a base class ExampleClass is also constructed to having the value of 10 ( I think ) */
	
	int k = derTest.getB();
	int i = derTest.getA();
	
	/* test1.a does not work because a is private, can only do this when a is public */
	// int i = test2->getA(); // the same as test1.getA()

	cout << "i: " << i << endl;
	cout << "k: " << k << endl;
	
	delete test;
	return 0;
}
