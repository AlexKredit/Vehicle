#include "Bus.h"

using std::cout; using std::string; using  std::endl;

Bus::Bus()
{
	weight = 10000;
	max_speed = 100;
	avg_speed = 70;
	price_moving = 50;
	passengers_number = 20;
	max_luggage = 300;
	max_volume = 7;
	max_luggage_pass = 15;
	conditioner = false;
	reclining_seat = false;
	vehicle_segment = "економ";
	seat_type = "тканина";
}

int Bus::count_comfort()
{
	int counter = 1;
	if (get_conditioner())
	{
		counter += 1;
	}
	if (get_reclining_seat())
	{
		counter += 1;
	}
	if (get_vehicle_segment() == "економ")
	{
		counter += 0;
	}
	else if (get_vehicle_segment() == "стандарт")
	{
		counter += 1;
	}
	else if (get_vehicle_segment() == "преміум")
	{
		counter += 2;
	}
	else if (get_vehicle_segment() == "люкс")
	{
		counter += 3;
	}
	if (get_seat_type() == "тканина")
	{
		counter -= 1;
	}
	else if (get_seat_type() == "комбінована")
	{
		counter += 0;
	}
	else if (get_seat_type() == "шкіра")
	{
		counter += 1;
	}
	return counter;
}

string Bus::vehicle_name()
{
	return bus;
}

void Bus::print(UserInterface* ui)
{
	ui->vehicle_weight_ans();
	cout << get_weight() << endl;
	ui->vehicle_max_speed_ans();
	cout << get_max_speed() << endl;
	ui->vehicle_avg_speed_ans();
	cout << get_avg_speed() << endl;
	ui->vehicle_price_moving_ans();
	cout << get_price_moving() << endl;
	ui->max_luggage_ans();
	cout << get_max_luggage() << endl;
	ui->volume_ans();
	cout << get_max_volume() << endl;
	ui->passengers_ans();
	cout << get_passengers_number() << endl;
	ui->max_luggage_pass_ans();
	cout << get_max_luggage_pass() << endl;
	ui->conditioner_ans();
	if (get_conditioner())
	{
		ui->yes();
	}
	else
	{
		ui->no();
	}
	ui->reclining_seat_ans();
	if (get_reclining_seat())
	{
		ui->yes();
	}
	else
	{
		ui->no();
	}
	ui->vehicle_segment_ans();
	cout << get_vehicle_segment() << endl;
	ui->seat_type_ans();
	cout << get_seat_type() << endl;
}

double Bus::get_weight() const
{
	return weight;
}
void Bus::set_weight(const double weight)
{
	this->weight = weight;
}

double Bus::get_max_speed() const
{
	return max_speed;
}
void Bus::set_max_speed(const double max_speed)
{
	this->max_speed = max_speed;
}

double Bus::get_avg_speed() const
{
	return avg_speed;
}
void Bus::set_avg_speed(const double avg_speed)
{
	this->avg_speed = avg_speed;
}

double Bus::get_price_moving() const
{
	return price_moving;
}

void Bus::set_price_moving(const double price_moving)
{
	this->price_moving = price_moving;
}

int Bus::get_passengers_number() const
{
	return passengers_number;
}
void Bus::set_passengers_number(const int passengers_number)
{
	this->passengers_number = passengers_number;
}

double Bus::get_max_luggage() const
{
	return max_luggage;
}
void Bus::set_max_luggage(const double max_luggage)
{
	this->max_luggage = max_luggage;
}

double Bus::get_max_volume() const
{
	return max_volume;
}
void Bus::set_max_volume(const double max_volume)
{
	this->max_volume = max_volume;
}

string Bus::get_vehicle_segment() const
{
	return vehicle_segment;
}
void Bus::set_vehicle_segment(const string& vehicle_segment)
{
	this->vehicle_segment = vehicle_segment;
}

string Bus::get_seat_type() const
{
	return seat_type;
}
void Bus::set_seat_type(const string& seat_type)
{
	this->seat_type = seat_type;
}

bool Bus::get_conditioner() const
{
	return conditioner;
}
void Bus::set_conditioner(const bool conditioner)
{
	this->conditioner = conditioner;
}

bool Bus::get_reclining_seat() const
{
	return reclining_seat;
}
void Bus::set_reclining_seat(const bool reclining_seat)
{
	this->reclining_seat = reclining_seat;
}

double Bus::get_max_luggage_pass() const
{
	return max_luggage_pass;
}
void Bus::set_max_luggage_pass(const double max_luggage_pass)
{
	this->max_luggage_pass = max_luggage_pass;
}
