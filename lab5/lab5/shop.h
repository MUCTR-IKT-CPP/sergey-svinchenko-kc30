#pragma once
#include "knife.h"
#include "pistol.h"
#include "time.h"


using namespace std;

class Shop {
public:
	int n=0;
	void nInp(int &n) {
		std::cout << "������� ����� ������?" << std::endl;
		std::cin >> n;
	}
	//void gGenerate() {

	//}
	void check(Knife* knife, Pistol* pistol, int chance, int n) {
		int crutch = 0;
		cout << "������� �������:" << endl;
		for (int i = 0; i != n; i++) {
			srand(time(NULL) + i);
			if (rand() % 2 != 0) {
				knife[i].damage = rand() % 80 + 20;
				knife[i].aspd = rand() % 13 + 7;
				cout << "� ���� " << i + 1 - crutch << endl; knife->sound();
				cout << knife[i].damage << "\t �����" << endl
					 << knife[i].aspd << "\t �������� �����" << endl
					 << knife[i].dMax() << "\t ����� � ������" << endl;
				if (chance >= rand() % 1000 + 1) {
					cout << "��� ������ ��������, ����!" << endl;
					return;
				}
				cout << "������ �� �������� :(" << endl;
			}
			else {
				crutch++;
				pistol[i].damage = rand() % 30 + 10;
				pistol[i].aspd = rand() % 7 + 3;
				cout << "� ��������� " << crutch << endl; pistol->sound();
				cout << pistol[i].damage << "\t �����" << endl
					 << pistol[i].aspd << "\t �������� �����" << endl
					 << pistol[i].dMax() << "\t ����� � ������" << endl;
				if (5 >= rand() % 1000 + 1) {
					cout << "��� ������ ��������, ����!" << endl;
					return;
				}
				cout << "������ �� �������� :(" << endl;
			}
		}
		delete[] knife;
		delete[] pistol;
	}
};