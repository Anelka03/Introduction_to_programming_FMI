#include <iostream>
using namespace std;

int main()
{
	unsigned int n, k;
	cin >> n >> k;


	//��������� k ���� �������� �� n � 1.
	for (int i = 0; i < k; i++)
	{
		//����� �� �������� ������ - �������� n � 1.
		int mask = 1;
		while ((n & mask) > 0)
		{
			n ^= mask;
			mask <<= 1;
		}
		n |= mask;
	}
	cout << n << endl;
}