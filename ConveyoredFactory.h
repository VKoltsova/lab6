#pragma once
#include "Factory.h"
#include <iostream>
using namespace std;

#define DEFAULT_CONVEYOR_SPEED 1.0
#define DEFAULT_CONVEYOR_LENGTH 7.0 

class ConveyoredFactory : virtual public Factory {
protected:
	double conveyorSpeed;	// скорость движения конвейера в м/c
	double conveyorLength;		// длина конвейера в метрах
public:
	ConveyoredFactory() : Factory() {
		conveyorSpeed = DEFAULT_CONVEYOR_SPEED;
		conveyorLength = DEFAULT_CONVEYOR_LENGTH;
	}
	ConveyoredFactory(string* name, int workersCount, double workerEfficiency, double conveyorSpeed, double conveyorLength)
		: Factory(name, workersCount, workerEfficiency) {
		this->setConveyorSpeed(conveyorSpeed);
		this->setConveyorLength(conveyorLength);
	}
	ConveyoredFactory(const ConveyoredFactory& obj) : Factory(obj) {
		this->setConveyorSpeed(obj.conveyorSpeed);
		this->setConveyorLength(obj.conveyorLength);
	}
	double getConveyorSpeed();
	double getConveyorLength();
	void setConveyorSpeed(double);
	void setConveyorLength(double);
	
	double getFactoryOutput();
	void stopConveyor();
	void launchConveyor();
};