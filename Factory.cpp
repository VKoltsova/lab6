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
	this->workerEfficien�y = workerEfficiency;
}

string* Factory::getName() {
	string* result = new string(*(this->name));
	return result;
}

int Factory::getWorkersCount() {
	return workersCount;
}

double Factory::getWorkerEfficiency() {
	return workerEfficien�y;
}

void Factory::print() {
	cout << "�������� ������: " << *(this->name) << endl;
	cout << "���������� ���������� ������: " << this->workersCount << endl;
	cout << "���������� ������������� ������ ��������: " << this->workerEfficien�y << endl;
}

double Factory::getFactoryOutput() {
	double output = workerEfficien�y * workersCount;

	return output;
}