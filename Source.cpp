#include <iostream>

using namespace std;

int main() 
{
	int TotalCost = 0;
	cin >> TotalCost;
	int kind;
	cin >> kind;
	int* cost = new int[kind];
	int* Num = new int[kind];

	int TC = 0;
	for (int i = 0; i < kind; i++)
	{
		cin >> cost[i];
		cin >> Num[i];
	}

	for (int i = 0; i < kind; i++)
	{
		TC += cost[i]*Num[i];
	}

	if (TotalCost == TC)
	{
		cout << "Yes";
	}
	else if (TotalCost != TC)
	{
		cout << "No";
	}
}