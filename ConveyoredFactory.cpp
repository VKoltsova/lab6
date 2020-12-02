#include "ConveyoredFactory.h"
#include <Windows.h>
#include <math.h>

char** getConveyor(int);
void printConveyor(char**, int);

double ConveyoredFactory::getConveyorSpeed() {
	return conveyorSpeed;
}

double ConveyoredFactory::getConveyorLength() {
	return conveyorLength;
}

void ConveyoredFactory::setConveyorSpeed(double conveyorSpeed) {
	this->conveyorSpeed = conveyorSpeed;
}

void ConveyoredFactory::setConveyorLength(double conveyorLength) {
	this->conveyorLength = conveyorLength;
}

void ConveyoredFactory::launchConveyor() {
	//int length = conveyorLength;
	//int speed = ceil(conveyorSpeed);	// округляем до верхнего целого, так как может быть "0 < скорость < 1"

	//char** conveyor = getConveyor(length);

	//for (int i = 0; i < length; i++) {
	//	system("cls");
	//	printConveyor(conveyor, length);
	//	Sleep(1000 / speed);
	//	
	//}

	cout << "Произошёл запуск конвейера" << endl;	 // Дописать какой нибудь прикольный вывод
}

void ConveyoredFactory::stopConveyor() {

	cout << "Произошла остановка конвейера" << endl; // Дописать какой нибудь прикольный вывод
}

double ConveyoredFactory::getFactoryOutput() {
	double result = Factory::getFactoryOutput() + conveyorSpeed * conveyorLength;
	return result;
}

char** getConveyor(int length) {
	char** conveyor = new char* [2];
	
	for (int i = 0; i < 3; i++) {
		conveyor[i] = new char[length];
		for (int j = 0; j < length; j++) {
			if (i == 0) {
				if (j % 2 == 0) {
					conveyor[i][j] = '=';
				}
				else{
					conveyor[i][j] = ' ';
				}
			}
			else if (i == 1) {
				conveyor[i][j] = '-';
			}
			else {
				conveyor[i][j] = 'o';
			}
		}
	}

	return conveyor;
}
void printConveyor(char** conveyor, int length) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < length; j++) {
			cout << conveyor[i][j];
		}
		cout << endl;
	}
	cout << endl;
}