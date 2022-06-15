#include "Selection.h"

using std::cin;

Vehicle* Selection::select(UserInterface* ui)
{
	ui->selection_alert();
	while (true)
	{
		int passenger;
		while (true)
		{
			ui->passengers_req();
			cin >> passenger;
			if (ui->check_symbols() || passenger < 0)
			{
				ui->problem_value();
				continue;
			}
			break;
		}
		double luggage;
		while (true)
		{
			ui->max_luggage_req();
			cin >> luggage;
			if (ui->check_symbols() || luggage < 0)
			{
				ui->problem_value();
				continue;
			}
			break;
		}
		double avg_speed;
		while (true)
		{
			ui->avg_speed_select_req();
			cin >> avg_speed;
			if (ui->check_symbols() || avg_speed < 0)
			{
				ui->problem_value();
				continue;
			}
			break;
		}
		double price;
		while (true)
		{
			ui->price_req();
			cin >> price;
			if (ui->check_symbols() || price < 0)
			{
				ui->problem_value();
				continue;
			}
			break;
		}
		if ((passenger <= 2000 && passenger > 0) && (luggage <= 2000 && luggage >= 0) && (avg_speed <= 60 && avg_speed >= 0) &&
			(price <= 30 && price >= 10))
		{
			Metro* m = new Metro;
			return m;
		}
		else if ((passenger <= 200 && passenger > 0) && (luggage <= 10000 && luggage >= 0) && (avg_speed <= 90 && avg_speed >= 0) &&
			(price <= 50 && price >= 30))
		{
			Train* t = new Train;
			return t;
		}
		else if ((passenger <= 25 && passenger > 0) && (luggage <= 500 && luggage >= 0) && (avg_speed <= 100 && avg_speed >= 0) &&
			(price <= 100 && price >= 50))
		{
			Bus* b = new Bus;
			return b;
		}
		else if ((passenger <= 4 && passenger > 0) && (luggage <= 120 && luggage >= 0) && (avg_speed <= 180 && avg_speed >= 0) &&
			(price <= 200 && price >= 100))
		{
			PassengerCar* c = new PassengerCar;
			return c;
		}
		else
		{
			ui->bad_selecting();
			while (true)
			{
				ui->contin();
				ui->user_prompt();
				int choice;
				cin >> choice;
				if (ui->check_symbols() || choice > 2 || choice < 0)
				{
					ui->problem_operation();
					continue;
				}
				else if (choice == 0)
				{
					return nullptr;
				}
				else if (choice == 1)
				{
					break;
				}
			}
		}
		continue;
	}
}
