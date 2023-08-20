//Gone bananas
#include<bits/stdc++.h>
using namespace std;

bool isPrime (int);
bool isPrime(int n)
{
  if (n <= 1)
  return false;
  if (n <= 3)
  return true;
  if (n % 2 == 0 || n % 3 == 0)
  return false;
  for (int i = 5; i * i <= n; i = i + 6)
  {
  if (n % i == 0 || n % (i + 2) == 0)
  return false;
  }

return true;

}

string solve (int N) {
 if(N<=3)
 return "No";
 bool t= isPrime(N);
 if(t)
 return "No";
 else
 return "Yes";
}

int main() {
int T;
cin >> T;
for(int i=0; i<T; i++)
{
  int N;
  cin >> N;
  string str;
  str = solve(N);
  cout << str;
  cout << "\n";
}

}
