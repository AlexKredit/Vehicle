#pragma once
#include <string>
#include "UserInterface.h"
class Vehicle
{
public:
    virtual double get_weight() const = 0;
    virtual void set_weight(const double weight) = 0;
    virtual double get_max_speed() const = 0;
    virtual void set_max_speed(const double max_speed) = 0;
    virtual double get_avg_speed() const = 0;
    virtual void set_avg_speed(const double avg_speed) = 0;
    virtual double get_price_moving() const = 0;
    virtual void set_price_moving(const double price_moving) = 0;
    virtual double get_max_luggage() const = 0;
    virtual void set_max_luggage(const double max_luggage) = 0;
    virtual double get_max_volume() const = 0;
    virtual void set_max_volume(const double max_volume) = 0;
    virtual int get_passengers_number() const = 0;
    virtual void set_passengers_number(const int passengers_number) = 0;
    virtual std::string get_vehicle_segment() const = 0;
    virtual void set_vehicle_segment(const std::string& vehicle_segment) = 0;
    virtual std::string get_seat_type() const = 0;
    virtual void set_seat_type(const std::string& seat_type) = 0;
    virtual int count_comfort() = 0;
    virtual std::string vehicle_name() = 0;
    virtual void print(UserInterface* ui) = 0;
};