#include "ChemicalFactory.h"
#include <Windows.h>

char** getFullTank(int);
char** getEmptyTank(int);
void printTank(char**, int);
void fillLine(char**, int, int, char);

int ChemicalFactory::getNumOfTanks() {
	return numOfTanks;
}

double ChemicalFactory::getTankCapacity() {
	return tankCapacity;
}

void ChemicalFactory::setNumOfTanks(int numOfTanks) {
	this->numOfTanks = numOfTanks;
}

void ChemicalFactory::setTankCapacity(double tankCapacity) {
	this->tankCapacity = tankCapacity;
}

void ChemicalFactory::fillTanks() {
	int size = this->getTankCapacity();
	char** tank = getEmptyTank(size);

	int temp = size - 2;	// начинаем не с нижней линии, а с предпоследней
	while(true){
		system("cls");
		fillLine(tank, size, temp, '0');
		printTank(tank, size);
		Sleep(1000);
		if (--temp < 0) {
			break;
		}
	}

	cout << "Произошло наполнение чанов" << endl;
}

void ChemicalFactory::emptyTanks() {
	int size = this->getTankCapacity();
	char** tank = getFullTank(size);

	int temp = 0;
	while (true) {
		system("cls");
		fillLine(tank, size, temp, ' ');
		printTank(tank, size);
		Sleep(1000);
		if (++temp == size - 1) {
			break;
		}
	}
	
	cout << "Произошло осушение чанов" << endl;
}

double ChemicalFactory::getFactoryOutput() {
	double result = Factory::getFactoryOutput() + numOfTanks * tankCapacity;
	return result;
}

char** getEmptyTank(int size) {
	char** tank = new char*[size];
	
	for (int i = 0; i < size; i++) {
		tank[i] = new char[size];
		for (int j = 0; j < size; j++) {
			if ((i == size - 1) || (j == 0) || (j == size - 1)) {
				tank[i][j] = '*';
			}
			else {
				tank[i][j] = ' ';
			}
		}
	}

	return tank;
}
char** getFullTank(int size) {
	char** tank = new char* ();

	for (int i = 0; i < size; i++) {
		tank[i] = new char[size];
		for (int j = 0; j < size; j++) {
			if ((i == size - 1) || (j == 0) || (j == size - 1)) {
				tank[i][j] = '*';
			}
			else {
				tank[i][j] = '0';
			}
		}
	}

	return tank;
}
void printTank(char** tank, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << tank[i][j];
		}
		cout << endl;
	}
	cout << endl;
}
void fillLine(char** mx, int size, int numOfLine, char symbol) {
	for (int i = 1; i < size - 1; i++) {
		mx[numOfLine][i] = symbol;
	}
}