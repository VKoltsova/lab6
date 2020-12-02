#include "DrugFactory.h"
#include <Windows.h>

string* DrugFactory::getDrugName() {
	string* result = new string(*(this->drugName));
	return result;
}

int DrugFactory::getDrugDosage() {
	return drugDosage;
}

void DrugFactory::setDrugName(string* drugName) {
	if (drugName == NULL) {
		return;
	}
	if (this->drugName != NULL) {
		delete this->drugName;
	}
	this->drugName = new string(*(drugName));
}

void DrugFactory::setDrugDosage(int drugDosage) {
	this->drugDosage = drugDosage;
}

void DrugFactory::researchDrugs() {
	// ����� ������ ������� �����
	cout << "(����� �����)";

	for (int i = 0; i < 6; i++) {
		Sleep(1000);
		cout << ".";
	}

	cout << endl << "������ ���������� ��������� ���������  "
		<< drugName << " � ���������� "
		<< drugDosage << " ." << endl;
}

		//��������
void DrugFactory::testDrugs() {
	cout << "(����� �����)";

	for (int i = 0; i < 6; i++) {
		Sleep(1000);
		cout << ".";
	}

	cout << endl << " � ���������� ������������ ��������� "
		<< drugName << " ����� �� ����. ���! "
		<< endl;
	
}