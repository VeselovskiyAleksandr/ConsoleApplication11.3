﻿// ConsoleApplication11.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Урок 11.Задача 3. Immolate Improved.

#include <iostream>
#include<locale.h>
#include<cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float power, health, resistanceIndex;
	cout << "\nУкажите количество здоровья Орка от 0 до 1  ";
	cin >> health;
	if (health < 0 || health>1) {
		cout << "\nУкажите правильно количество здоровья Орка от 0 до 1";
	}
	cout << "\nУкажите сопротивляемость магии Орка от 0 до 1  ";
	cin >> resistanceIndex;
	if (resistanceIndex < 0 || resistanceIndex>1) {
		cout << "\nУкажите правильно сопротивляемость магии Орка ";
	}
		if (health >= 0 && health <= 1 && resistanceIndex >= 0 && resistanceIndex <= 1) {
		do {
			cout << "\nУкажите мощность огненного шара от 0 до 1  ";
			cin >> power;
			if (power < 0 || power>1) {
				cout << "\nУкажите правильно мощность огненного шара."; break;
			}
			power*= 1-resistanceIndex;
				cout << "\nВ результате выстрела Орку нанесён урон здоровью " << power;
				health -= power;
if (health < 0.00001) {
				health = 0;
			}
			cout << "\nУ Орка осталось " << health << " очков здоровья";
			
			
			if (health == 0.) {
				cout << "\n\n                Орк погиб!";
			}
		} while (health >0.);
	}
	else {
		cout << "\nУкажите правильно входные данные.";
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
