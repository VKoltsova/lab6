#pragma once

#include <iostream>
using namespace std;

#define DEFAULT_WORKERS_COUNT 10;
#define DEFAULT_WORKER_EFFICIENСY 1.0;

class Factory {
protected:
	string* name;
	int workersCount;
	double workerEfficienсy; //количество продуктов, которое работник может производить в день, типо эффективность
public:
	Factory() {
		name = new string("default factory"); //название завода
		workersCount = DEFAULT_WORKERS_COUNT; //кол-во рабочих
		workerEfficienсy = DEFAULT_WORKER_EFFICIENСY; // эффективность рабочего
	}
	Factory(string* name, int workersCount, double workerEfficiency) {
		this->setName(name);
		this->setWorkersCount(workersCount);
		this->setWorkerEfficienty(workerEfficiency);
	}
	~Factory() {
		delete name;
	}
	Factory(const Factory& obj) {
		if (this->name != NULL) {
			delete name;
		}
		this->setName(obj.name);
		this->setWorkersCount(obj.workersCount);
		this->setWorkerEfficienty(obj.workerEfficienсy);
	}

	void setName(string*);
	void setWorkersCount(int);
	void setWorkerEfficienty(double);

	string* getName();
	int getWorkersCount();
	double getWorkerEfficiency();

	void print();
	double getFactoryOutput(); // кол-во продукции, которые производит завод в день - эффективность 
};