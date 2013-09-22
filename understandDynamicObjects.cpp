#include <iostream>

class Test{
	public:
		int getNum();
		Test(int);
	private:
		int num;
};

Test::Test(int input){
	num = input;
}

int Test::getNum(){
	return num;
}

using namespace std;

int main(int argc, const char *argv[])
{
	Test *clsPtr = new Test(1);
	
	cout << "num = " << clsPtr->getNum() << endl;
	
	return 0;
}
