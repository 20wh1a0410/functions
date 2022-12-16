#include<iostream>
using namespace std;
bool checkPassword(string x){
	int u,l,d;
	for(int i=0;i<=x.length();i++){
		if(isupper(x[i]))
		u++;
		else if(islower(x[i]))
		l++;
		else if(isdigit(x[i]))
		d++;
	}
	if(x.length()==8&&u>=1&&l>=1&&d>=1)
	return true;
	else return false;
}
int main(){
	string s;
	cin>>s;
	cout<<checkPassword(s);
	return 0;
}
