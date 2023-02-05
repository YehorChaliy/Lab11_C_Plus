#include <iostream>
#include <string>
#include <locale.h>
#include <iomanip>
#include <windows.h>

using namespace std;

struct lecturer_1
{
	string name_1;
	int age_1;
	string subject_1;
	char shedule_1;
};

class lecturer
{
protected:
	string name;
	int age;
	string subject;
public:
	lecturer()
	{

	};
	lecturer(string name_1, int age_1, string subject_1)
	{
		name = name_1;
		age = age_1;
		subject = subject_1;
	};
	lecturer(const lecturer& oblects)
	{

	};
	~lecturer()
	{

	};
};

class schedule_lecturer : public lecturer
{
protected:
	string schedule = " Не вказано!";
public:
	schedule_lecturer()
	{

	};
	schedule_lecturer(string name_1, int age_1, string subject_1)
	{
		name = name_1;
		age = age_1;
		subject = subject_1;
	};
	schedule_lecturer(const schedule_lecturer& objects)
	{

	};
	lecturer_1 get();
	void change_subject();
	void change_age();
	void show_age();
	void show();
	void input_shedule();
	~schedule_lecturer()
	{

	};
};

lecturer_1 schedule_lecturer::get()
{
	return { name, age, subject };
}

void schedule_lecturer::change_age()
{
	int age_2;
	cout << "Укажіть справжній вік викладача: " << endl;
	cin >> age_2;
	age = age_2;
}

void schedule_lecturer::change_subject()
{
	string subject_2;
	cout << " Укажіть новий предмет: " << endl;
	cin >> subject_2;
	subject = subject_2;
}

void schedule_lecturer::show_age()
{
	cout << "Вік викладача предмета = " << age << " роки." << endl << endl;
}

void schedule_lecturer::show()
{
	cout << "Ім'я викладача - " << name << ";" << endl;
	cout << "Вік викладача - " << age << ";" << endl;
	cout << "Предмет, що викладає - " << subject << ";" << endl;
	cout << "Розклад предмета у "<< name << "а : " << schedule << ";" << endl << endl;
}

void schedule_lecturer::input_shedule()
{
	string schedule_1;
	cout << "Укажіть час проведення заняття:" << endl;
	cin >> schedule_1;
	schedule = schedule_1;
	system("cls");
	cout << "Час проведення викладачем занять: " << schedule << ";";
	cout << endl;
}

void menu()
{
	cout << "1. Ввести інші дані." << endl;
	cout << "2. Змінити назву предмета." << endl;
	cout << "3. Указати вірний вік викладача." << endl;
	cout << "4. Вивести на екран вік викладача." << endl;
	cout << "5. Bідобразити всі дані." << endl;
	cout << "6. Указати час проведення заняття." << endl;
	cout << "7. Вихід з програми." << endl;
	cout << "Оберіть необхідну вам функцію: ";
}

int main()
{
	setlocale(LC_ALL, "Ukrainian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string name_1;
	int age_1;
	string subject_1;
	char shedule_1;

	cout << "Введіть ім'я викладача - ";
	cin >> name_1;
	cout << "Введіть вік викладача - ";
	cin >> age_1;
	cout << "Введіть назву предмета - "; 
	cin >> subject_1;
	cout << endl;
	system("cls");

note:schedule_lecturer k(name_1, age_1, subject_1);

menu:menu();

	int x;
	cin >> x;

	switch (x)
	{
	default:
		cout << "Помилка. Оберіть вірний пункт!" << endl;
		system("cls");
		goto menu;
	case(1):
		system("cls");
		cout << "Введіть ім'я викладача - ";
		cin >> name_1;
		cout << "Введіть вік викладача - ";
		cin >> age_1;
		cout << "Введіть назву предмета - ";
		cin >> subject_1;
		goto note;
		goto menu;
	case(2):
		system("cls");
		k.change_subject();
		goto menu;
	case(3):
		system("cls");
		k.change_age();
		goto menu;
	case(4):
		system("cls");
		k.show_age();
		goto menu;
	case(5):
		system("cls");
		k.show();
		goto menu;
	case(6):
		system("cls");
		k.input_shedule();
		cout << endl;
		goto menu;
	case(7):
		system("cls");
		cout << "Ви вийшли з програми.";
		return 0;
	}
}