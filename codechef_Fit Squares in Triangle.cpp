// What is the maximum number of squares of size 2x2 that can be fit in a right angled isosceles triangle of base B.
// One side of the square must be parallel to the base of the isosceles triangle.
// Base is the shortest side of the triangle

// Input
// First line contains T, the number of test cases.
// Each of the following T lines contains 1 integer B.
// Output
// Output exactly T lines, each line containing the required answer.

#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,ans=0;
	    cin>>n;
	    while(n>2)
	    {
          ans += (n - 2 )/2;
          n = n - 2;
	    }
        cout<< ans<<endl;
	}
    return 0;
}
