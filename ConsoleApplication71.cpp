// ConsoleApplication71.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;
struct info {
	char name[15];
	char surname[15];
	char tel;
	char otch[15];
};
struct date {

	char day[15];
	char month[15];
	char year;
};
int comp(const void *a, const void *b)
{
	char *str1 = ((info *)a)->name;
	char *str2 = ((info *)b)->name;
	return strcmp(str1, str2);
}
int main()
{
	info contact[4];
	for (int i = 0; i < 4; i++)
		
	{
		cout << "inter about i-th contact";
		cin >> contact[i].name;
		cin >> contact[i].surname;
		cin >> contact[i].otch;
		cin >> contact[i].tel;
	};
	date person[4];
	for (int i = 0; i < 3; i++)
	{
		cin >> person[i].day;
		cin >> person[i].month;
		cin >> person[i].year;
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
