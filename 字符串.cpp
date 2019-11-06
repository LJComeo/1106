#include <iostream>
#include <string>
using namespace std;

void Delete(string &s,int n)
{
	if (n == s.size() - 1)
	{
		s.pop_back();
	}
	for (int i = n; i < s.size(); i++)
	{
		s[i] = s[i + 1];
	}
	s.pop_back();
}

void STR(string &s,const string &s1)
{
	string s2;
	for (int i = 0; i < s1.size(); i++)
	{
		for (int j = 0; j < s.size(); j++)
		{
			if (s[j] == s1[i])
			{
				Delete(s,j);
			}
		}
	}
}

int main1()
{
	string s;
	string s1;
	getline(cin, s);
	getline(cin, s1);
	STR(s, s1);
	for (auto & i : s)
	{
		cout << i;
	}
	return 0;
}