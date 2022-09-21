#include <cstdlib>
#include <ctime>
#include <iostream>
#include <algorithm>
using namespace std;

	void negTopoz(int mass[], const int lenght) {
		for (int i = 0; i < lenght; i++)
			if (mass[i] < 0)
		    mass[i] = - mass[i];		
}

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Задача 2\nПеревод массива из отрицательного в положительный\n";
	const int S = 5;
	int task[S] = { -6, -7, 9, 4, -5 };
	cout << "Массив до: \n";
	for (int i = 0; i < S; i++)
		cout << task[i] << "  ";


	negTopoz(task, S);
	cout << "\nМассив после: \n";
	for (int i = 0; i < S; i++)
		cout << task[i] << "  ";
	cout << '\n';



	return 0;
}