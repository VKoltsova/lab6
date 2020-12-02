#include "DrugFactory.h"
#include "Utils.h"

#include <iostream>
using namespace std;

#define MIN_WORKERS_COUNT 1
#define MAX_WORKERS_COUNT 10000
#define MIN_WORKERS_EFFICIENCY 0.5
#define MAX_WORKERS_EFFICIENCY 5.0

#define MIN_CONVEYOR_SPEED 0.5
#define MAX_CONVEYOR_SPEED 10.0
#define MIN_CONVEYOR_LENGTH 5.0
#define MAX_CONVEYOR_LENGTH 50.0

#define MIN_NUM_OF_TANKS 1
#define MAX_NUM_OF_TANKS 10
#define MIN_TANK_CAPACITY 0.5
#define MAX_TANK_CAPACITY 10.0

#define MIN_DRUG_DOSAGE 1
#define MAX_DRUG_DOSAGE 100

int main() {
	setlocale(LC_ALL, "Russian");

	Utils* util = new Utils();
	cout << "1) Введите название завода" << endl;
	string factoryName = util->inputString();

	cout << "2) Введите количество работников завода" << endl;
	int workersCount = util->inputInteger(MIN_WORKERS_COUNT, MAX_WORKERS_COUNT);

	cout << "3) Введите ежедневную эффективность рабочего (в кол-ве производимых продуктов)" << endl;
	double workerEfficiency = util->inputDouble(MIN_WORKERS_EFFICIENCY, MAX_WORKERS_EFFICIENCY);

	cout << "4) Введите скорость конвейера (в м/с)" << endl;
	double conveyorSpeed = util->inputDouble(MIN_CONVEYOR_SPEED, MAX_CONVEYOR_SPEED);

	cout << "5) Введите длину конвейера (в м)" << endl;
	double conveyorLength = util->inputDouble(MIN_CONVEYOR_LENGTH, MAX_CONVEYOR_LENGTH);

	cout << "6) Введите количество чанов с химикатами" << endl;
	int numOfTanks = util->inputInteger(MIN_NUM_OF_TANKS, MAX_NUM_OF_TANKS);

	cout << "7) Введите объём одного чана с химикатами (в м^3)" << endl;
	double tankCapacity = util->inputDouble(MIN_TANK_CAPACITY, MAX_TANK_CAPACITY);

	cout << "8) Введите название производимого препарата" << endl;
	string drugName = util->inputString();

	cout << "9) Введите количество препарата в 1 пачке (в мг)" << endl;
	int drugDosage = util->inputInteger(MIN_DRUG_DOSAGE, MAX_DRUG_DOSAGE);

	DrugFactory* drugFactory = new DrugFactory(&factoryName, workersCount, workerEfficiency,
		conveyorSpeed, conveyorLength, numOfTanks, tankCapacity, &drugName, drugDosage);

	cout << "Enter any key to continue...";
	cin.get();

	drugFactory->print();	// метод класса Factory

	cout << "Enter any key to continue...";
	cin.get();

	drugFactory->launchConveyor();	// не написан

	cout << "Enter any key to continue...";
	cin.get();
	
	drugFactory->stopConveyor();	// не написан

	cout << "Enter any key to continue...";
	cin.get();

	drugFactory->fillTanks();

	cout << "Enter any key to continue...";
	cin.get();

	drugFactory->emptyTanks();

	cout << "Enter any key to continue...";
	cin.get();

	drugFactory->researchDrugs();	// не написан

	cout << "Enter any key to continue...";
	cin.get();

	drugFactory->testDrugs();	// не написан

	cout << "Enter any key to continue...";
	cin.get();

	cout << "Завод может производить " << drugFactory->Factory::getFactoryOutput()
		<< " лекарств" << endl;

	cout << "Завод может производить " << drugFactory->ConveyoredFactory::getFactoryOutput()
		<< " лекарств с помощью конвейера" << endl;

	cout << "Завод может производить " << drugFactory->ChemicalFactory::getFactoryOutput()
		<< " лекарств с помощью чанов с химикатами" << endl;

	cout << "Enter any key to continue...";
	cin.get();

	delete drugFactory;

	cout << "Вот и все, зачетно?" << endl;

	cout << "Enter any key to continue..." << endl;
	cin.get();

	return 0;
}