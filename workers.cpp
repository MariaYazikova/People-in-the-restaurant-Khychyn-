#include "workers.h"
void worker::set_work_experience(double expirience) {
	this->work_experience = expirience;
}
void worker::set_salary(double SALARY) {
	salary = SALARY;
}
void worker::set_shift_length(int shift_length) {
	this->shift_length = shift_length;
}
double worker::get_work_experience() {
	return work_experience;
}
double worker::get_salary() {
	return salary;
}
int worker::get_shift_length() {
	return shift_length;
}
ostream& operator<< (ostream& output, const worker& person) {
	output << "Name: " << person.name << "\n" << "Gender: " << person.gender << "\n" << "Age: " << person.age;
	output << "\n" << "Country: " << person.country << "\n" << "Work experience: " << person.work_experience;
	output << "\n" << "Shift length: " << person.shift_length << "\n" << "Salary: " << person.salary;
	return output;
}