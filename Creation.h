#pragma once
#include <iostream>
#include "UserInterface.h"
#include "PassengerCar.h"
#include "Train.h"
#include "Bus.h"
#include "Metro.h"

class Creation
{
public:
    PassengerCar* create_passenger_car(UserInterface* ui);
    Metro* create_metro(UserInterface* ui);
    Train* create_train(UserInterface* ui);
    Bus* create_bus(UserInterface* ui);
};
