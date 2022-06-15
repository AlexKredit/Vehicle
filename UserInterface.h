#pragma once
#include <iostream>
#include <string>

class UserInterface
{
public:
	bool check_symbols();
	void show_comfort(const int count_comfort);
	void greeting();
	void main_message();
	void yes();
	void no();
	void user_prompt();
	void show_vector_req();
	void repeat();
	void contin();
	void problem_operation();
	void problem_value();
	void vehicle_weight_req();
	void vehicle_max_speed_req();
	void vehicle_avg_speed_req();
	void price_moving_req();
	void selection_alert();
	void bus_alert();
	void passenger_car_alert();
	void train_alert();
	void metro_alert();
	void passengers_req();
	void volume_req();
	void avg_speed_select_req();
	void price_req();
	void conditioner_req();
	void reclining_seat_req();
	void max_luggage_pass_req();
	void max_luggage_req();
	void body_type_req();
	void vehicle_segment_req();
	void seat_type_req();
	void good_selecting();
	void bad_selecting();
	void result_creation(std::string vehicle_name);
	void result_selection(std::string vehicle_name);
	void user_checks();
	void vehicle_weight_ans();
	void vehicle_max_speed_ans();
	void vehicle_avg_speed_ans();
	void vehicle_price_moving_ans();
	void max_luggage_ans();
	void volume_ans();
	void passengers_ans();
	void body_type_ans();
	void vehicle_segment_ans();
	void seat_type_ans();
	void max_luggage_pass_ans();
	void conditioner_ans();
	void reclining_seat_ans();
	void conclusion_creation();
	void empty_vector_of_vehicles();
	void exit();
};
