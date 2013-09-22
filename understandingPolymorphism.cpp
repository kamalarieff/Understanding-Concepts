#include <iostream>

using namespace std;

class Transport{
	public:
	int wheels,posX,posY;
	virtual int getWheels() = 0; // if defined here, must also define in the child classes
	void getValues();
};

void Transport::getValues(){
	cout << "Wheels: " << wheels;
	cout << "\nPos X: " << posX;
	cout << "\nPos Y: " << posY;
}

class Car : public Transport{
	public:
	int getWheels();
	void drive();
	Car() ;
	private:
};

Car::Car(){
	wheels = 4;
}

int Car::getWheels(){
	return wheels;
}

void Car::drive(){
	posX = 10;
	posY = 5;
}

void someFunction(Transport *test){
	cout << "wheels: " << test->getWheels() << endl;
}

int main(int argc, const char *argv[])
{
	
	Car car1;
	Transport *t1 = &car1;
	
	// someFunction(t1); this and the bottom instruction is the same
	// someFunction(&car1);	

	// t1->drive(); // this doesn't work with error: class Transport has no member named drive
	
	car1.drive(); // when do it like this, it doesn't get the error as above but somehow lose the polymorphism
	
	t1->getValues();

		 //   _____                 _           _             
		 //  / ____|               | |         (_)            
		 // | |     ___  _ __   ___| |_   _ ___ _  ___  _ __  
		 // | |    / _ \| '_ \ / __| | | | / __| |/ _ \| '_ \ 
		 // | |___| (_) | | | | (__| | |_| \__ \ | (_) | | | |
		 //  \_____\___/|_| |_|\___|_|\__,_|___/_|\___/|_| |_|

	// Design is very important in developing object oriented programming especially when it involves polymorphism
                                                   
                                                   

	return 0;
}
