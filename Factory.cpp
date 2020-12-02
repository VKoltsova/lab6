#include "Factory.h"

void Factory::setName(string* name) {
	if (name == NULL) {
		return;
	}
	if (this->name != NULL) {
		delete this->name;
	}
	this->name = new string(*(name));
}

void Factory::setWorkersCount(int workersCount) {
	this->workersCount = workersCount;
}

void Factory::setWorkerEfficienty(double workerEfficiency) {
	this->workerEfficienñy = workerEfficiency;
}

string* Factory::getName() {
	string* result = new string(*(this->name));
	return result;
}

int Factory::getWorkersCount() {
	return workersCount;
}

double Factory::getWorkerEfficiency() {
	return workerEfficienñy;
}

void Factory::print() {
	cout << "Íàçâàíèå çàâîäà: " << *(this->name) << endl;
	cout << "Êîëè÷åñòâî ðàáîòíèêîâ çàâîäà: " << this->workersCount << endl;
	cout << "Åæåäíåâíàÿ ýôôåêòèâíîñòü îäíîãî ðàáî÷åãî: " << this->workerEfficienñy << endl;
}

double Factory::getFactoryOutput() {
	double output = workerEfficienñy * workersCount;

	return output;
}