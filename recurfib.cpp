#include<iostream>
using namespace std;
int first = 0, second = 1;

void recursive_fibonacci(int n){
	int next;
	if(n>0){
		next = first + second;
		first = second;
		second = next;
		cout<<next<<" ";
		recursive_fibonacci(n-1);
	}
	cout<<endl;
}

int main(){
	int n;
	cout<<"Enter the number of elements you want in the Fibonacci Series: ";
	cin>>n;
	cout<<first<<" "<<second<<" ";
	recursive_fibonacci(n-2);
	return 0;
}
