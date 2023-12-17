/*
   This program prints out the perfect numbers between 1 and N
*/

#include <iostream>
using namespace std;

const int N = 1000;//set the bound

bool isPerfect(int num)
{
    int sum=0;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    if(sum==num)//check the condition that sum of divisors and the number is equal
    {
        return true;//if true, then it is perfect number
    }
    else
    {
        return false;
    }
}

int main()
{
	cout << "For the integers from 1 to " << N << ":\n";

	for (int j = 2; j <= N; ++j)
		if (isPerfect(j))
			cout << j << " is perfect\n";

	cout << endl;

	return 0;
}
