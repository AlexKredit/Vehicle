#include "Creation.h"

using std::cout; using std::cin; using std::string;

PassengerCar* Creation::create_passenger_car(UserInterface* ui)
{
    PassengerCar* car = new PassengerCar;
    ui->passenger_car_alert();
    double weight;
    while (true)
    {
        ui->vehicle_weight_req();
        cin >> weight;
        if (ui->check_symbols() || weight < 0 || weight > 2500)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            car->set_weight(weight);
            break;
        }

    }
    double max_speed;
    while (true)
    {
        ui->vehicle_max_speed_req();
        cin >> max_speed;
        if (ui->check_symbols() || max_speed < 0 || max_speed > 200)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            car->set_max_speed(max_speed);
            break;
        }
    }
    double avg_speed;
    while (true)
    {
        ui->vehicle_avg_speed_req();
        cin >> avg_speed;
        if (ui->check_symbols() || avg_speed < 0 || avg_speed > 180)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            car->set_avg_speed(avg_speed);
            break;
        }
    }
    double price_moving;
    while (true)
    {
        ui->price_moving_req();
        cin >> price_moving;
        if (ui->check_symbols() || price_moving > 200)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            car->set_price_moving(price_moving);
            break;
        }
    }
    int passengers;
    while (true)
    {
        ui->passengers_req();
        cin >> passengers;
        if (ui->check_symbols() || passengers < 0 || passengers > 4)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            car->set_passengers_number(passengers);
            break;
        }
    }
    double max_luggage;
    while (true)
    {
        ui->max_luggage_req();
        cin >> max_luggage;
        if (ui->check_symbols() || max_luggage < 0 || max_luggage > 120)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            car->set_max_luggage(max_luggage);
            break;
        }
    }
    double max_volume;
    while (true)
    {
        ui->volume_req();
        cin >> max_volume;
        if (ui->check_symbols() || max_volume < 0 || max_volume > 1)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            car->set_max_volume(max_volume);
            break;
        }
    }
    string body_type;
    while (true)
    {
        ui->body_type_req();
        cin >> body_type;
        if (body_type == "седан" || body_type == "універсал" ||
             body_type == "купе" || body_type == "кросовер")
        {
            car->set_body_type(body_type);
            break;
        }
        else
        {
            ui->problem_value();
            continue;
        }
    }
    string vehicle_segment;
    while (true)
    {
        ui->vehicle_segment_req();
        cin >> vehicle_segment;
        if (vehicle_segment == "економ" || vehicle_segment == "стандарт" ||
           vehicle_segment == "преміум" || vehicle_segment == "люкс")
        {
            car->set_vehicle_segment(vehicle_segment);
            break;
        }
        else
        {
            ui->problem_value();
            continue;
        }
    }
    string seat_type;
    while (true)
    {
        ui->seat_type_req();
        cin >> seat_type;
        if (seat_type == "тканина" || seat_type == "комбінована" || seat_type == "шкіра")
        {
            car->set_seat_type(seat_type);
            break;
        }
        else
        {
            ui->problem_value();
            continue;
        }
    }
    return car;
}

Metro* Creation::create_metro(UserInterface* ui)
{
    Metro* metro = new Metro;
    ui->metro_alert();
    double weight;
    while (true)
    {
        ui->vehicle_weight_req();
        cin >> weight;
        if (ui->check_symbols() || weight < 0 || weight > 150000)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            metro->set_weight(weight);
            break;
        }

    }
    double max_speed;
    while (true)
    {
        ui->vehicle_max_speed_req();
        cin >> max_speed;
        if (ui->check_symbols() || max_speed < 0 || max_speed > 80)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            metro->set_max_speed(max_speed);
            break;
        }
    }
    double avg_speed;
    while (true)
    {
        ui->vehicle_avg_speed_req();
        cin >> avg_speed;
        if (ui->check_symbols() || avg_speed < 0 || avg_speed > 60)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            metro->set_avg_speed(avg_speed);
            break;
        }
    }
    double price_moving;
    while (true)
    {
        ui->price_moving_req();
        cin >> price_moving;
        if (ui->check_symbols() || price_moving > 30)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            metro->set_price_moving(price_moving);
            break;
        }
    }
    int passengers;
    while (true)
    {
        ui->passengers_req();
        cin >> passengers;
        if (ui->check_symbols() || passengers < 0 || passengers > 2000)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            metro->set_passengers_number(passengers);
            break;
        }
    }
    double luggage_pass;
    while (true)
    {
        ui->max_luggage_pass_req();
        cin >> luggage_pass;
        if (ui->check_symbols() || luggage_pass < 0 || luggage_pass > 20)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            metro->set_max_luggage_pass(luggage_pass);
            break;
        }
    }
    double max_luggage;
    while (true)
    {
        ui->max_luggage_req();
        cin >> max_luggage;
        if (ui->check_symbols() || max_luggage < 0 || max_luggage > 2000 || luggage_pass * passengers > max_luggage)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            metro->set_max_luggage(max_luggage);
            break;
        }
    }
    double max_volume;
    while (true)
    {
        ui->volume_req();
        cin >> max_volume;
        if (ui->check_symbols() || max_volume < 0 || max_volume > 50)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            metro->set_max_volume(max_volume);
            break;
        }
    }
    bool conditioner;
    while (true)
    {
        ui->conditioner_req();
        cin >> conditioner;
        if (ui->check_symbols() || conditioner != 0 && conditioner != 1)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            metro->set_conditioner(conditioner);
            break;
        }
    }
    string vehicle_segment;
    while (true)
    {
        ui->vehicle_segment_req();
        cin >> vehicle_segment;
        if (vehicle_segment == "економ" || vehicle_segment == "стандарт" ||
           vehicle_segment == "преміум" || vehicle_segment == "люкс")
        {
            metro->set_vehicle_segment(vehicle_segment);
            break;
        }
        else
        {
            ui->problem_value();
            continue;
        }
    }
    string seat_type;
    while (true)
    {
        ui->seat_type_req();
        cin >> seat_type;
        if (seat_type == "тканина" || seat_type == "комбінована" || seat_type == "шкіра")
        {
            metro->set_seat_type(seat_type);
            break;
        }
        else
        {
            ui->problem_value();
            continue;
        }
    }
    return metro;
}

Train* Creation::create_train(UserInterface* ui)
{
    Train* train = new Train;
    ui->train_alert();
    double weight;
    while (true)
    {
        ui->vehicle_weight_req();
        cin >> weight;
        if (ui->check_symbols() || weight < 0 || weight > 200000)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            train->set_weight(weight);
            break;
        }

    }
    double max_speed;
    while (true)
    {
        ui->vehicle_max_speed_req();
        cin >> max_speed;
        if (ui->check_symbols() || max_speed < 0 || max_speed > 110)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            train->set_max_speed(max_speed);
            break;
        }
    }
    double avg_speed;
    while (true)
    {
        ui->vehicle_avg_speed_req();
        cin >> avg_speed;
        if (ui->check_symbols() || avg_speed < 0 || avg_speed > 90)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            train->set_avg_speed(avg_speed);
            break;
        }
    }
    double price_moving;
    while (true)
    {
        ui->price_moving_req();
        cin >> price_moving;
        if (ui->check_symbols() || price_moving > 50)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            train->set_price_moving(price_moving);
            break;
        }
    }
    int passengers;
    while (true)
    {
        ui->passengers_req();
        cin >> passengers;
        if (ui->check_symbols() || passengers < 0 || passengers > 3000)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            train->set_passengers_number(passengers);
            break;
        }
    }
    double luggage_pass;
    while (true)
    {
        ui->max_luggage_pass_req();
        cin >> luggage_pass;
        if (ui->check_symbols() || luggage_pass < 0 || luggage_pass > 20)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            train->set_max_luggage_pass(luggage_pass);
            break;
        }
    }
    double max_luggage;
    while (true)
    {
        ui->max_luggage_req();
        cin >> max_luggage;
        if (ui->check_symbols() || max_luggage < 0 || max_luggage > 10000 || luggage_pass * passengers > max_luggage)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            train->set_max_luggage(max_luggage);
            break;
        }
    }
    double max_volume;
    while (true)
    {
        ui->volume_req();
        cin >> max_volume;
        if (ui->check_symbols() || max_volume < 0 || max_volume > 200)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            train->set_max_volume(max_volume);
            break;
        }
    }
    bool conditioner;
    while (true)
    {
        ui->conditioner_req();
        cin >> conditioner;
        if (ui->check_symbols() || conditioner != 0 && conditioner != 1)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            train->set_conditioner(conditioner);
            break;
        }
    }
    bool reclining_seat;
    while (true)
    {
        ui->reclining_seat_req();
        cin >> reclining_seat;
        if (ui->check_symbols() || reclining_seat != 0 && reclining_seat != 1)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            train->set_reclining_seat(reclining_seat);
            break;
        }
    }
    string vehicle_segment;
    while (true)
    {
        ui->vehicle_segment_req();
        cin >> vehicle_segment;
        if (vehicle_segment == "економ" || vehicle_segment == "стандарт" ||
           vehicle_segment == "преміум" || vehicle_segment == "люкс")
        {
            train->set_vehicle_segment(vehicle_segment);
            break;
        }
        else
        {
            ui->problem_value();
            continue;
        }
    }
    string seat_type;
    while (true)
    {
        ui->seat_type_req();
        cin >> seat_type;
        if (seat_type == "тканина" || seat_type == "комбінована" || seat_type == "шкіра")
        {
            train->set_seat_type(seat_type);
            break;
        }
        else
        {
            ui->problem_value();
            continue;
        }
    }
    return train;
}

Bus* Creation::create_bus(UserInterface* ui)
{
    Bus* bus = new Bus;
    ui->bus_alert();
    double weight;
    while (true)
    {
        ui->vehicle_weight_req();
        cin >> weight;
        if (ui->check_symbols() || weight < 0 || weight > 15000)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            bus->set_weight(weight);
            break;
        }

    }
    double max_speed;
    while (true)
    {
        ui->vehicle_max_speed_req();
        cin >> max_speed;
        if (ui->check_symbols() || max_speed < 0 || max_speed > 120)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            bus->set_max_speed(max_speed);
            break;
        }
    }
    double avg_speed;
    while (true)
    {
        ui->vehicle_avg_speed_req();
        cin >> avg_speed;
        if (ui->check_symbols() || avg_speed < 0 || avg_speed > 100)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            bus->set_avg_speed(avg_speed);
            break;
        }
    }
    double price_moving;
    while (true)
    {
        ui->price_moving_req();
        cin >> price_moving;
        if (ui->check_symbols() || price_moving > 100)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            bus->set_price_moving(price_moving);
            break;
        }
    }
    int passengers;
    while (true)
    {
        ui->passengers_req();
        cin >> passengers;
        if (ui->check_symbols() || passengers < 0 || passengers > 25)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            bus->set_passengers_number(passengers);
            break;
        }
    }
    double luggage_pass;
    while (true)
    {
        ui->max_luggage_pass_req();
        cin >> luggage_pass;
        if (ui->check_symbols() || luggage_pass < 0 || luggage_pass > 20)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            bus->set_max_luggage_pass(luggage_pass);
            break;
        }
    }
    double max_luggage;
    while (true)
    {
        ui->max_luggage_req();
        cin >> max_luggage;
        if (ui->check_symbols() || max_luggage < 0 || max_luggage > 500 || luggage_pass * passengers > max_luggage)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            bus->set_max_luggage(max_luggage);
            break;
        }
    }
    double max_volume;
    while (true)
    {
        ui->volume_req();
        cin >> max_volume;
        if (ui->check_symbols() || max_volume < 0 || max_volume > 10)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            bus->set_max_volume(max_volume);
            break;
        }
    }
    bool conditioner;
    while (true)
    {
        ui->conditioner_req();
        cin >> conditioner;
        if (ui->check_symbols() || conditioner != 0 && conditioner != 1)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            bus->set_conditioner(conditioner);
            break;
        }
    }
    bool reclining_seat;
    while (true)
    {
        ui->reclining_seat_req();
        cin >> reclining_seat;
        if (ui->check_symbols() || reclining_seat != 0 && reclining_seat != 1)
        {
            ui->problem_value();
            continue;
        }
        else
        {
            bus->set_reclining_seat(reclining_seat);
            break;
        }
    }
    string vehicle_segment;
    while (true)
    {
        ui->vehicle_segment_req();
        cin >> vehicle_segment;
        if (vehicle_segment == "економ" || vehicle_segment == "стандарт" ||
           vehicle_segment == "преміум" || vehicle_segment == "люкс")
        {
            bus->set_vehicle_segment(vehicle_segment);
            break;
        }
        else
        {
            ui->problem_value();
            continue;
        }
    }
    string seat_type;
    while (true)
    {
        ui->seat_type_req();
        cin >> seat_type;
        if (seat_type == "тканина" || seat_type == "комбінована" || seat_type == "шкіра")
        {
            bus->set_seat_type(seat_type);
            break;
        }
        else
        {
            ui->problem_value();
            continue;
        }
    }
    return bus;
}
