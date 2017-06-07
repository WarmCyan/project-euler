#include <iostream>
#include <vector>

using namespace std;

bool isPrime(long num)
{
	for (long i = 2; i < (long)(num / 2); i++)
	{
		if (num % i == 0) { return false; }
	}
	cout << num << " is prime" << endl;
	return true;
}

int main()
{
	long n = 600851475143;
	long half = (long)(n / 2);

	vector<long> primes = vector<long>();

	for (long i = 2; i < half; i++)
	{
		if (i % 100000 == 0) { cout << "\r" << i << flush; }
		if (n % i == 0 && isPrime(i)) { primes.push_back(i); }
	}

	for (int i = 0; i < primes.size(); i++) { cout << "Prime: " << primes[i] << endl; }
	
	return 0;
}
