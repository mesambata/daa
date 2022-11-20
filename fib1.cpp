#include<iostream>
#define MAX 50
using namespace std;

void fibonacci(int n)
{
	int first = 0, second = 1, next;
	cout<<first<<" "<<second<<" ";
	for(int i=2; i<n; i++){
		next = first + second;
		cout<<next<<" ";
		first = second;
		second = next;
	}
	cout<<endl;
}

int main(){
	int n;
	cout<<"Enter the number of elements you want in the Fibonacci Series: ";
	cin>>n;
	fibonacci(n);
	return 0;
}
