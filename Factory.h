#pragma once

#include <iostream>
using namespace std;

#define DEFAULT_WORKERS_COUNT 10;
#define DEFAULT_WORKER_EFFICIEN�Y 1.0;

class Factory {
protected:
	string* name;
	int workersCount;
	double workerEfficien�y; //���������� ���������, ������� �������� ����� ����������� � ����, ���� �������������
public:
	Factory() {
		name = new string("default factory"); //�������� ������
		workersCount = DEFAULT_WORKERS_COUNT; //���-�� �������
		workerEfficien�y = DEFAULT_WORKER_EFFICIEN�Y; // ������������� ��������
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
		this->setWorkerEfficienty(obj.workerEfficien�y);
	}

	void setName(string*);
	void setWorkersCount(int);
	void setWorkerEfficienty(double);

	string* getName();
	int getWorkersCount();
	double getWorkerEfficiency();

	void print();
	double getFactoryOutput(); // ���-�� ���������, ������� ���������� ����� � ���� - ������������� 
};