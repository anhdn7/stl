#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int agrc, char *agrv[]){

	//For binary search in containers like vector(let target element=6)
	binary_search(v.begin(), v.end(), 6);
	
	// max/min of two numbers
	ans = max(a,b);

	// swap two numbers
	swap(a,b);
	
	// reverse container like vectors, strings
	reverse(v.begin(), v.end());
	
	// Rotate containers like vector,strings by n position
	rotate(v.begin(), v.begin()+n, v.end());
	
	//Sort arrays of size n
	sort(arr, arr+n);
	// Sort containers like vector, strings(based on intro sort)
	sort(v.begin(), v.end());

	return 0;
}
