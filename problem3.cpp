#include<iostream>
using namespace std;
bool isPrime(int x){
		for(int i=2;i<x;i++){
		if(x%i==0)
		return false;
		else 
		return true;
	}
}
int main(){
	int n;
	cin>>n;
	cout<<isPrime(n);
	 return 0;
	
}
