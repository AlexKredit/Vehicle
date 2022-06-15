#include "Train.h"

using std::cout; using std::string; using  std::endl;

Train::Train()
{
    weight = 100000;
    max_speed = 90;
    avg_speed = 80;
    price_moving = 30;
    passengers_number = 20;
    max_luggage = 300;
    max_volume = 7;
    max_luggage_pass = 15;
    conditioner = false;
    reclining_seat = false;
    vehicle_segment = "економ";
    seat_type = "тканина";
}

int Train::count_comfort()
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

string Train::vehicle_name()
{
    return train;
}

void Train::print(UserInterface* ui)
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

double Train::get_weight() const
{
    return weight;
}
void Train::set_weight(const double weight)
{
    this->weight = weight;
}

double Train::get_max_speed() const
{
    return max_speed;
}
void Train::set_max_speed(const double max_speed)
{
    this->max_speed = max_speed;
}

double Train::get_avg_speed() const
{
    return avg_speed;
}
void Train::set_avg_speed(const double avg_speed)
{
    this->avg_speed = avg_speed;
}

double Train::get_price_moving() const
{
    return price_moving;
}

void Train::set_price_moving(const double price_moving)
{
    this->price_moving = price_moving;
}

int Train::get_passengers_number() const
{
    return passengers_number;
}
void Train::set_passengers_number(const int passengers_number)
{
    this->passengers_number = passengers_number;
}

double Train::get_max_luggage() const
{
    return max_luggage;
}
void Train::set_max_luggage(const double max_luggage)
{
    this->max_luggage = max_luggage;
}

double Train::get_max_volume() const
{
    return max_volume;
}
void Train::set_max_volume(const double max_volume)
{
    this->max_volume = max_volume;
}

string Train::get_vehicle_segment() const
{
    return vehicle_segment;
}
void Train::set_vehicle_segment(const string& vehicle_segment)
{
    this->vehicle_segment = vehicle_segment;
}

string Train::get_seat_type() const
{
    return seat_type;
}
void Train::set_seat_type(const string& seat_type)
{
    this->seat_type = seat_type;
}

bool Train::get_conditioner() const
{
    return conditioner;
}
void Train::set_conditioner(const bool conditioner)
{
    this->conditioner = conditioner;
}

bool Train::get_reclining_seat() const
{
    return reclining_seat;
}
void Train::set_reclining_seat(const bool reclining_seat)
{
    this->reclining_seat = reclining_seat;
}

double Train::get_max_luggage_pass() const
{
    return max_luggage_pass;
}
void Train::set_max_luggage_pass(const double max_luggage_pass)
{
    this->max_luggage_pass = max_luggage_pass;
}
