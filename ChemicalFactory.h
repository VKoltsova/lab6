#pragma once

#include "Factory.h"
#include <iostream>
using namespace std;

#define DEFAULT_NUM_OF_TANKS 3
#define DEFAULT_TANK_CAPACITY 10.0

class ChemicalFactory : virtual public Factory {
protected:
	int numOfTanks;			// Количество чанов с химикатами
	double tankCapacity;	// Объём одного чана в м3 
public:
	ChemicalFactory() : Factory() {
		numOfTanks = DEFAULT_NUM_OF_TANKS;
		tankCapacity = DEFAULT_TANK_CAPACITY;
	}
	ChemicalFactory(string* name, int workersCount, double workerEfficiency, int numOfTanks, double tankCapacity)
		: Factory(name, workersCount, workerEfficiency) {
		this->setNumOfTanks(numOfTanks);
		this->setTankCapacity(tankCapacity);
	}
	ChemicalFactory(const ChemicalFactory& obj) : Factory(obj) {
		this->setNumOfTanks(obj.numOfTanks);
		this->setTankCapacity(obj.tankCapacity);
	}
	
	int getNumOfTanks();
	double getTankCapacity();
	void setNumOfTanks(int);
	void setTankCapacity(double);

	double getFactoryOutput();
	void fillTanks();	// наполнить чаны
	void emptyTanks();	// опустошить чаны
};