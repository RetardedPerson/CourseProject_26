#include <string>
#include <iostream>
#include "Date.h"

using namespace std;

struct Record
{
	int id; //Порядковый номер
	string fio; //ФИО
	Date birthdayDate; //Дата рождения
	string gender; //Пол
	string post; //Должность
	int experience; //Стаж (лет)
	string division; //Подразделение
	double salary; //Оклад
};

