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
	cout << "\n������� ���������� �������� ���� �� 0 �� 1  ";
	cin >> health;
	if (health < 0 || health>1) {
		cout << "\n������� ��������� ���������� �������� ����";
	}
	cout << "\n������� ���������������� ����� ���� �� 0 �� 1  ";
	cin >> resistanceIndex;
	if (resistanceIndex < 0 || resistanceIndex>1) {
		cout << "\n������� ��������� ���������������� ����� ���� ";
	}
	if (health >= 0 && health <= 1 && resistanceIndex >= 0 && resistanceIndex <= 1) {
		do {
			cout << "\n������� �������� ��������� ���� �� 0 �� 1  ";
			cin >> power;
			if (power < 0 || power>1) {
				cout << "\n������� ��������� �������� ��������� ����."; break;
			}
			power*= 1-resistanceIndex;
			cout << "\n� ���������� �������� ���� ������ ���� �������� " << power;
health -= power;
if (health < 0.00001) {
				health = 0;
			}
			cout << "\n� ���� �������� " << health << " ����� ��������";
			
			
			if (health == 0.) {
				cout << "\n\n                ��� �����!";
			}
		} while (health >0.);
	}
	else {
		cout << "\n������� ��������� ������� ������.";
	}
}
