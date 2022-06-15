#include <vector>
#include <windows.h>
#include "Vehicle.h"
#include "PassengerCar.h"
#include "Train.h"
#include "Metro.h"
#include "Bus.h"
#include "UserInterface.h"
#include "Creation.h"
#include "Selection.h"

using std::cin; using std::vector;

enum Vehicle_enum
{
	bus = 1,
	metro,
	train,
	passenger_car
};

void print_vehicles(vector<Vehicle*> vehicles, UserInterface* ui)
{
	if (vehicles.empty())
	{
		ui->empty_vector_of_vehicles();
	}
	else
	{
		for (auto it = vehicles.begin(); it != vehicles.end(); ++it)
			ui->result_creation((*it)->vehicle_name());
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	UserInterface ui;
	Creation cr;
	Selection s;
	Vehicle* veh;
	vector<Vehicle*> vehicles;
	int choice = 0;
	int count_comfort = 0;
	ui.greeting();
	while (true)
	{
		ui.main_message();
		ui.user_prompt();
		cin >> choice;
		if (ui.check_symbols() || choice > 5 || choice < 0)
		{
			ui.problem_operation();
			continue;
		}
		else if (choice == 0)
		{
			ui.exit();
			return 0;
		}
		else if (choice == bus)
		{
			veh = cr.create_bus(&ui);
			ui.result_creation(veh->vehicle_name());
			ui.user_checks();
			veh->print(&ui);
			ui.show_comfort(veh->count_comfort());
			ui.conclusion_creation();
			vehicles.push_back(veh);
		}
		else if (choice == metro)
		{
			veh = cr.create_metro(&ui);
			ui.result_creation(veh->vehicle_name());
			ui.user_checks();
			veh->print(&ui);
			ui.show_comfort(veh->count_comfort());
			ui.conclusion_creation();
			vehicles.push_back(veh);
		}
		else if (choice == train)
		{
			veh = cr.create_train(&ui);
			ui.result_creation(veh->vehicle_name());
			ui.user_checks();
			veh->print(&ui);
			ui.show_comfort(veh->count_comfort());
			ui.conclusion_creation();
			vehicles.push_back(veh);
		}
		else if (choice == passenger_car)
		{
			veh = cr.create_passenger_car(&ui);
			ui.result_creation(veh->vehicle_name());
			ui.user_checks();
			veh->print(&ui);
			ui.show_comfort(veh->count_comfort());
			ui.conclusion_creation();
			vehicles.push_back(veh);
		}
		else if (choice == 5)
		{
			veh = s.select(&ui);
			if (veh != 0)
			{
				ui.good_selecting();
				ui.result_selection(veh->vehicle_name());
				veh->print(&ui);
			}
		}
		ui.show_vector_req();
		while (true)
		{
			ui.user_prompt();
			cin >> choice;
			if (ui.check_symbols() || choice > 1 || choice < 0)
			{
				ui.problem_operation();
				continue;
			}
			else if (choice == 1)
			{
				print_vehicles(vehicles, &ui);
				break;
			}
			else if (choice == 0)
			{
				break;
			}
		}
		ui.repeat();
		while (true)
		{
			ui.user_prompt();
			cin >> choice;
			if (ui.check_symbols() || choice > 1 || choice < 0)
			{
				ui.problem_operation();
				continue;
			}
			else if (choice == 1)
			{
				break;
			}
			else if (choice == 0)
			{
				ui.exit();
				return 0;
			}
		}
	}
	return 0;
}
