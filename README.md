# ConsoleApplication11.3
int main()

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
		cout << "\nУкажите правильно количество здоровья Орка";
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
