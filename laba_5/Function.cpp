#include "Header.h"
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;
void zadanie_1()
{
	int n;
	cin >> n;
	vector<string> tram(n);

	for (int i = 0; i < n; i++)
	{
		cin >> tram[i];
	}

	cout << tram[1];
	map<string, vector<string>> Tram = { make_pair("Tram",tram)};
	auto it = Tram.begin();

	for (; it != Tram.end(); it++)
	{
		cout << (*it).first << (*it).second;
	}
}
void zadanie_2()
{

}
void zadanie_3()
{

}
void zadanie_4()
{

}