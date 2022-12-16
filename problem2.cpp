#include<iostream>
using namespace std;
bool  isValidTriangle(int x,int y,int z){
	if(x<=0||y<=0||z<=0)
	return 0;
	else{
		if(x<y+z&&y<x+z&&z<x+y)
		return 1;
		else 
		return 0;
		
	}
}
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	cout<< isValidTriangle(a,b,c);
	return 0;
}
