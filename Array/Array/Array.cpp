#include <iostream>

using namespace std;


double sumArray(int n)
{
	
	int* array = new int[n];


	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << "��° ���Ҹ� �Է����ּ���. : ";
		cin >> array[i];
	}

	double sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += array[i];
	}


	return sum;
}

double avgArray(int n, double sum) 
{

	double avg;

	avg = sum / n;

	return avg;
}



int main() 
{

	int n;

	cout << "������ ������ �Է����ּ���. : ";
	cin >> n;

	double sum = 0; 
	double avg = 0;

	sum = sumArray(n);
	avg = avgArray(n, sum);

	cout << "�迭�� ���� :" << sum << endl;
	cout << "�迭�� ����� :" << avg << endl;
	

	return 0;
}