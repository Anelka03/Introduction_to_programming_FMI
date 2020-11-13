#include <iostream>
using namespace std;

int main()
{
	unsigned int n, k;
	cin >> n >> k;

	//������� n*k.  n+n+n...+n (k ����).
	//��������� ���� �� ���������� ������ k ����
	

	int result = 0;

	// ���������� �� k ����.
	for (int t = 0; t < k; t++)
	{
	
		//������ result � n
		for (int i = 0; i < n; i++)
		{
			//�������� result � 1.
			int mask = 1;
			while ((result & mask) > 0)
			{
				result ^= mask;
				mask <<= 1;
			}
			result |= mask;
		}
	}
	cout << result << endl;
}