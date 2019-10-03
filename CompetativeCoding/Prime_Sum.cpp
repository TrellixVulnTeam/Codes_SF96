#include<iostream>
#include<string.h>
using namespace std;
bool isprime(int number)
{	// Given:   num an integer > 1
	// Returns: true if num is prime
	// 			false otherwise.
	
	int i;
	
	for (i=2; i<number; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	
	return true;	
}

vector<int> Solution::primesum(int A) {
    int x=2,y=A,a,b;
    vector<int> v;
    while(x<A-1)
    {
        a=A-x;
        b=x;
        if(isprime(a)&&isprime(b)){printf("%d %d ",b,a); return v;}
        x++;
    }
}
int main(){
    int n;
    cin>>n;
    primesum(n);
}
