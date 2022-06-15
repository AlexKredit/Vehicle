#pragma once
#include <iostream>
#include "PassengerCar.h"
#include "Train.h"
#include "Bus.h"
#include "Metro.h"
#include "UserInterface.h"

class Selection
{
public:
	Vehicle* select(UserInterface* ui);
}
