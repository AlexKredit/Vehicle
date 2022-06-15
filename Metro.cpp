#include "Metro.h"

using std::cout; using std::string; using  std::endl;

Metro::Metro()
{
    weight = 80000;
    max_speed = 80;
    avg_speed = 50;
    price_moving = 15;
    passengers_number = 20;
    max_luggage = 300;
    max_volume = 7;
    max_luggage_pass = 15;
    conditioner = false;
    vehicle_segment = "економ";
    seat_type = "тканина";
}

int Metro::count_comfort()
{
    int counter = 1;
    if (get_conditioner())
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

string Metro::vehicle_name()
{
    return metro;
}

void Metro::print(UserInterface* ui)
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
    ui->vehicle_segment_ans();
    cout << get_vehicle_segment() << endl;
    ui->seat_type_ans();
    cout << get_seat_type() << endl;
}

double Metro::get_weight() const
{
    return weight;
}
void Metro::set_weight(const double weight)
{
    this->weight = weight;
}

double Metro::get_max_speed() const
{
    return max_speed;
}
void Metro::set_max_speed(const double max_speed)
{
    this->max_speed = max_speed;
}

double Metro::get_avg_speed() const
{
    return avg_speed;
}
void Metro::set_avg_speed(const double avg_speed)
{
    this->avg_speed = avg_speed;
}

double Metro::get_price_moving() const
{
    return price_moving;
}

void Metro::set_price_moving(const double price_moving)
{
    this->price_moving = price_moving;
}

int Metro::get_passengers_number() const
{
    return passengers_number;
}
void Metro::set_passengers_number(const int passengers_number)
{
    this->passengers_number = passengers_number;
}

double Metro::get_max_luggage() const
{
    return max_luggage;
}
void Metro::set_max_luggage(const double max_luggage)
{
    this->max_luggage = max_luggage;
}

double Metro::get_max_volume() const
{
    return max_volume;
}
void Metro::set_max_volume(const double max_volume)
{
    this->max_volume = max_volume;
}

string Metro::get_vehicle_segment() const
{
    return vehicle_segment;
}
void Metro::set_vehicle_segment(const string& vehicle_segment)
{
    this->vehicle_segment = vehicle_segment;
}

string Metro::get_seat_type() const
{
    return seat_type;
}
void Metro::set_seat_type(const string& seat_type)
{
    this->seat_type = seat_type;
}

bool Metro::get_conditioner() const
{
    return conditioner;
}
void Metro::set_conditioner(const bool conditioner)
{
    this->conditioner = conditioner;
}

double Metro::get_max_luggage_pass() const
{
    return max_luggage_pass;
}
void Metro::set_max_luggage_pass(const double max_luggage_pass)
{
    this->max_luggage_pass = max_luggage_pass;
}
