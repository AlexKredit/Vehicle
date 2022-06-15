#include "UserInterface.h"

using std::cout; using std::cin; using std::string;

bool UserInterface::check_symbols()
{
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(32767, '\n');
		return true;
	}
	return false;
}

void UserInterface::greeting()
{
	cout << "\n\t ~ ~ ~ ~ Вітаю Вас! Ви використовуєте програму для створення та підбору транспортного засобу ~ ~ ~ ~ \n\n";
}

void UserInterface::main_message()
{
	cout << "\t\t\tДля створення автобусу, натисніть..............................1.\n\
                        Для створення метро, натисніть.................................2.\n\
                        Для створення потягу, натисніть................................3.\n\
                        Для створення автомобіля, натисніть............................4.\n\
		        Для підбору відповідного транспортного засобу, натисніть.......5.\n\
		        Для виходу із програми, натисніть..............................0.\n";
}

void UserInterface::user_prompt()
{
	cout << "Зробіть свій вибір: ";
}

void UserInterface::yes()
{
	cout << "Так\n";
}

void UserInterface::no()
{
	cout << "Ні\n";
}

void UserInterface::result_creation(std::string vehicle_name)
{
	cout << vehicle_name << " був успішно створений. Запит надіслан до підприємства. Гарного дня!\n";
}

void UserInterface::result_selection(std::string vehicle_name)
{
	cout << vehicle_name << " був успішно підібран. Гарної поїздки!\n\n";
}

void UserInterface::show_vector_req()
{
	cout << "Бажаєте побачити всі створені транспортні засоби?\nТак - 1 | Ні - 0\n";
}

void UserInterface::repeat()
{
	cout << "Бажаєте ще раз створити або підібрати транспортний засіб?\nТак - 1 | Ні - 0\n";
}

void UserInterface::contin()
{
	cout << "Бажаєте продовжити підбір?\nТак - 1 | Ні - 0\n";
}

void UserInterface::problem_operation()
{
	cout << "\t\t\t-----------------------------------------------------------\n\
		        | Ви ввели неправильний номер операції, спробуйте ще раз! |\n\
		        -----------------------------------------------------------\n\n";
}

void UserInterface::problem_value()
{
	cout << "\t\t\t--------------------------------------------------------------\n\
		        | Ви ввели неправильне значення параметра, спробуйте ще раз! |\n\
                        --------------------------------------------------------------\n\n";
}

void UserInterface::vehicle_weight_req()
{
	cout << "Будь ласка, встановіть загальну вагу транспортного засобу (кілограми)\n\
(обмеження: автобус - 15000, автомобіль - 2500, потяг - 200000, метро - 150000): ";
}

void UserInterface::vehicle_max_speed_req()
{
	cout << "Будь ласка, встановіть максимальну швидкість (км/год)\n\
(обмеження: автобус - 120, автомобіль - 200, потяг - 110, метро - 80): ";
}

void UserInterface::vehicle_avg_speed_req()
{
	cout << "Будь ласка, встановіть середню швидкість (км/год)\n\
(обмеження: автобус - 100, автомобіль - 180, потяг - 90, метро - 60): ";
}

void UserInterface::selection_alert()
{
	cout << "Підбір розпочався. Будь ласка, дотримуйтесь інструкцій!\n\n";
}

void UserInterface::bus_alert()
{
	cout << "Ви вибрали автобус для створення. Будь ласка, опишіть його, вводячи параметри.\n\n";
}

void UserInterface::passenger_car_alert()
{
	cout << "Ви вибрали автомобіль для створення. Будь ласка, опишіть його, вводячи параметри.\n\n";
}

void UserInterface::train_alert()
{
	cout << "Ви вибрали потяг для створення. Будь ласка, опишіть його, вводячи параметри.\n\n";
}

void UserInterface::metro_alert()
{
	cout << "Ви вибрали метро для створення. Будь ласка, опишіть його, вводячи параметри.\n\n";
}

void UserInterface::passengers_req()
{
	cout << "Яка місткість пасажирів має бути?\n\
(обмеження: автобус - 25, автомобіль - 4, потяг - 3000, метро - 2000): ";
}

void UserInterface::volume_req()
{
	cout << "Який максимальний обсяг? (куб/м)\n\
(обмеження: автобус - 10, автомобіль - 1, потяг - 200, метро - 50): ";
}

void UserInterface::price_req()
{
	cout << "Скільки Ви готові заплатити за орендований транспортний засіб? (гривень на день): ";
}

void UserInterface::conditioner_req()
{
	cout << "Ви хочете мати кондиціонер?\nТак - 1 | Ні - 0\n";
}

void UserInterface::reclining_seat_req()
{
	cout << "Ви хочете мати відкидні сидіння?\nТак - 1 | Ні - 0\n";
}

void UserInterface::max_luggage_pass_req()
{
	cout << "Яка максимальна вага багажу для пасажира? (кілограми)\n\
(обмеження: 20): ";
}

void UserInterface::max_luggage_req()
{
	cout << "Який загальний максимальний багаж? (кілограми)\n\
(обмеження: автобус - 500, автомобіль - 120, потяг - 10000, метро - 2000): ";
}

void UserInterface::avg_speed_select_req()
{
	std::cout << "Будь ласка, встановіть середню швидкість (км/год)\n\
(обмеження: автобус - 100, автомобіль - 180, потяг - 90, метро - 60): ";
}

void UserInterface::price_moving_req()
{
	std::cout << "Яка вартість переміщення на 100 км? (гривень)\n\
(обмеження: автобус - 100, автомобіль - 200, потяг - 50, метро - 30): ";
}


void UserInterface::body_type_req()
{
	cout << "Існує величезна різноманітність типів кузова для автомобілів. Ось основні: седан, універсал, купе, кросовер.\n\
Який тип Ви обираєте? (необхідно написати один із запропонованих вище варіантів): ";
}

void UserInterface::vehicle_segment_req()
{
	cout << "Всього існує 4 основних класи транспортних засобів: економ, стандарт, преміум, люкс\n\
(де економ — найнижчий клас, а люкс — вищий).\n\
Який клас Ви обираєте? (необхідно написати один із запропонованих вище варіантів): ";
}

void UserInterface::seat_type_req()
{
	cout << "Основні оббивки сидіння: тканина, комбінована, шкіра\n\
Яку оббивку сидінь Ви хочете? (необхідно написати один із запропонованих вище варіантів): ";
}

void UserInterface::good_selecting()
{
	cout << "Чудово! Ми знайшли для вас найбільш підходящий автомобіль, який відповідає всім умовам!\n\
Оскільки Ви скористалися функцією підбору, ми пропонуємо вам автомобіль зі стандартними характеристиками, який відповідають\n\
вашим умовам. Якщо Ви бажаєте отримати автомобіль з певними параметрами, заповніть, будь ласка, форму заявки.";
}

void UserInterface::bad_selecting()
{
	cout << "Для вас немає підходящого транспортного засобу! Спробуйте ще раз!\n";
}

void UserInterface::user_checks()
{
	cout << "Введені Вами значення:\n\n";
}

void UserInterface::vehicle_weight_ans()
{
	cout << "Загальна вага транспортного засобу (кілограми): ";
}

void UserInterface::vehicle_max_speed_ans()
{
	cout << "Максимальна швидкість (км/год): ";
}

void UserInterface::vehicle_avg_speed_ans()
{
	cout << "Середня швидкість (км/год): ";
}

void UserInterface::max_luggage_ans()
{
	cout << "Максимальна вага багажу (кілограми): ";
}

void UserInterface::volume_ans()
{
	cout << "Максимальний обсяг (куб/м): ";
}

void UserInterface::passengers_ans()
{
	cout << "Кількість пасажирів: ";
}

void UserInterface::body_type_ans()
{
	cout << "Тип кузова: ";
}

void UserInterface::vehicle_segment_ans()
{
	cout << "Клас: ";
}

void UserInterface::vehicle_price_moving_ans()
{
	cout << "Вартість переміщення на 100 км: ";
}

void UserInterface::seat_type_ans()
{
	cout << "Оббивка сидінь: ";
}

void UserInterface::max_luggage_pass_ans()
{
	cout << "Максимальна вага багажу для одного пасажира (кілограми): ";
}

void UserInterface::conditioner_ans()
{
	cout << "Кондиціонер: ";
}

void UserInterface::reclining_seat_ans()
{
	cout << "Відкидні сидіння: ";
}

void UserInterface::conclusion_creation()
{
	std::cout << "\nЧудово! Ми зв'яжемося з Вами, як тільки буде доступний відповідний транспортний засіб, який відповідає вашим параметрам.\n";
}

void UserInterface::empty_vector_of_vehicles()
{
	std::cout << "Ви ще не створили запит на один із транспортних засобів!";
}

void UserInterface::show_comfort(const int count_comfort)
{
	cout << "Кількість балів комфорту вашого транспортного засобу (за семибальною шкалою): " << count_comfort << "\n";
}

void UserInterface::exit()
{
	cout << "Програма була завершана користувачем. До побачення!\n";
}
