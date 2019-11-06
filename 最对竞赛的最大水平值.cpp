#include <iostream>
#include <vector>
using namespace std;


int main()
{
	vector<int> v;
	int n;
	int cur = 0;
	int tmp;
	cin >> n;
	if (n == 0)
	{
		return 0;
	}
	int m = 3 * n;
	int a_i[100];
	for (int i = 0; i < m; i++)
	{
		cin >> a_i[i];
	}
	
	for (int i = 0;i < m; i++)
	{
		v.push_back(a_i[i]);
	}
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v.size() - i - 1; j++)
		{
			if (v[j] > v[j + 1])
			{
				tmp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = tmp;
			}
		}
	}

	v.pop_back();
	for (int i = 0; i < v.size()-1; i++)
	{
		v[i] = v[i + 1];
	}
	v.pop_back();
	
	for (int i = 0; i < n; i++)
	{
		cur += v.back();
		v.pop_back();
	}
	cout << cur;
 	return 0;
}