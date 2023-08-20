
#include <iostream>
using namespace std;

bitset<500001> Primes;
void SieveOfEratosthenes(int n)
{
	Primes[0] = 1;
	for (int i = 3; i*i <= n; i += 2) {
		if (Primes[i / 2] == 0) {
			for (int j = 3 * i; j <= n; j += 2 * i)
				Primes[j / 2] = 1;		}
	}
}

int main()
{
	int n;
    cin>>n;
	SieveOfEratosthenes(n);
	for (int i = 1; i <= n; i++) {
		if (i == 2)
			cout << i << ' ';
		else if (i % 2 == 1 && Primes[i / 2] == 0)
			cout << i << ' ';
	}
	return 0;
}


//optimized solution
#include <iostream>
#include <vector>

using namespace std;

void sieve(int n)
{
    vector<bool> isprime(n+1, true);  // Create a vector to store whether numbers are prime, here the values are first stored as true for prime no. in the vector

    for (int i = 2; i<= n; i++)
    {
        if (isprime[i])
        {
            cout << i << " ";
            for (int j = i * i; j <= n; j =j+i)
            {
                isprime[j] = false;  // Mark multiples of i as not prime
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    sieve(n);
    return 0;
}

