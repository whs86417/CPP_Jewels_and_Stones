#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class JNS {
public:
	int numJewelsInStones(string J, string S) {
		short count = 0;
		for (short i = 0; i < J.length(); i++)
		{
			for (short j = 0; j < S.length(); j++)
			{
				if (J[i] == S[j])
					count++;
			}
		}
		return count;
	}
};

int main(int argc, char* argv)
{
	JNS firstTry;
	string j, s;
	cout << "< Description (from LeetCode problem 771) >\n\n";;
	cout << "You're given strings J representing the types of stones \n" 
		<< "that are jewels, and S representing the stones you have. \n"
		<< "Each character in S is a type of stone you have. You want \n" 
		<< "to know how many of the stones you have are also jewels.\n\n";
	cout << "Enter a string for jewels:  ";
	cin >> j;
	cout << "Enter a string for stones:  ";
	cin >> s;
	cout << "Result: ";

	cout << firstTry.numJewelsInStones(j, s) << endl;

	return 0;
}
