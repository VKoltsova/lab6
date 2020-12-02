#pragma once

#include "ConveyoredFactory.h"
#include "ChemicalFactory.h"

#include <iostream>
using namespace std;

#define DEFAULT_DRUG_DOSAGE 10.0 //дозировка

class DrugFactory : public ConveyoredFactory, public ChemicalFactory {
	string* drugName;	// Название препарата
	int drugDosage;		// Объём препарата в 1 упаковке (в мг)
public:
	DrugFactory() : ConveyoredFactory(), ChemicalFactory() {
		drugName = new string("unnamed drug");
		drugDosage = DEFAULT_DRUG_DOSAGE;
	}
	DrugFactory(string* name, int workersCount, double workerEfficiency, double conveyorSpeed,
		double conveyorLength, int numOfTanks, double tankCapacity, string* drugName, int drugDosage) :
		ConveyoredFactory(name, workersCount, workerEfficiency, conveyorSpeed, conveyorLength),
		ChemicalFactory(name, workersCount, workerEfficiency, numOfTanks, tankCapacity),
		Factory(name, workersCount, workerEfficiency) {
		this->setDrugName(drugName);
		this->setDrugDosage(drugDosage);
	}
	~DrugFactory() {
		delete drugName;
	}
	DrugFactory(const DrugFactory& obj) : ConveyoredFactory(obj), ChemicalFactory(obj) {
		if (this->drugName != NULL) {
			delete drugName;
		}
		this->setDrugName(obj.drugName);
		this->setDrugDosage(obj.drugDosage);
	}
	
	string* getDrugName();
	int getDrugDosage();
	void setDrugName(string*);
	void setDrugDosage(int);

	void researchDrugs();	// провести исследование лекарства
	void testDrugs();		// провести эксперимент с лекарством
};