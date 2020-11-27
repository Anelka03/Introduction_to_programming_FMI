#include <iostream>
using namespace std;

int main()
{
	unsigned int n;
	cin >> n;

    //������� 1:
	bool isPrime1 = true;
	for (int i = 2; i <= n - 1; i++)
	{
		if (n % i == 0)
			isPrime1 = false;
	}
	cout << isPrime1 << endl;
	// ��������� ������. �� ����� ������� ��������. �� � ���������� �� ������ ������� ��� �� n-1.
	// ��� �� ������� ������� �� �����(n), �� ���� �� ������� � ���� ������. 

	//������� 2:
	bool isPrime2 = true;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			isPrime2 = false;
	}
	cout << isPrime2 << endl;

	// ��������� ��� ������. �� �� ����� �������� i <= sqrt(n) ���������� �����(n), ����� � ��������, �� � �������.
	// ���� �� �� ������� ������ � ����� �� �� ��������.

	//������� 3:
	bool isPrime3 = true;
	double temp = sqrt(n);
	for (int i = 2; i <= temp; i++)
	{
		if (n % i == 0)
			isPrime3 = false;
	}
	cout << isPrime3 << endl;

	// � ���� ������� ���� ����� ��������. �� ������ � �������� �� ����� ������� ��������.
	// ��� ��������� �� ������� 2000000, �������� �� ����, �� ������� �� � ������, ������ �� ���� �� 2.
	// �� ������ ������� �� �������� �� ����� ��������, ���� ���� ���� � ������, �� ��� ����� (� ������ ������� 2).

	//������� �������:
	bool isPrime4 = true;
	double temp2 = sqrt(n);
	for (int i = 2; i <= temp2; i++)
	{
		if (n % i == 0)
		{
			isPrime4 = false;
			break;
		}
	}
	cout << isPrime4 << endl;
}