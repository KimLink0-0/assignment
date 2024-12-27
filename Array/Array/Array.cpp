#include <iostream>

using namespace std;


double sumArray(int n)
{
	
	int* array = new int[n];


	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << "번째 원소를 입력해주세요. : ";
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

	cout << "원소의 갯수를 입력해주세요. : ";
	cin >> n;

	double sum = 0; 
	double avg = 0;

	sum = sumArray(n);
	avg = avgArray(n, sum);

	cout << "배열의 합은 :" << sum << endl;
	cout << "배열의 평균은 :" << avg << endl;
	

	return 0;
}