// CPP program to pick a value among two
// according to value of a third variable.
#include <iostream>
using namespace std;

// Returns a if x is 0 and returns
// b if x is 1.
int assignValue(int a, int b, bool x)
{
	int arr[] = {a, b};

	return(arr[x]);
}

// Driver code
int main()
{
	int y = assignValue(3, 7, 0);
	cout << y;
	return 0;
}
