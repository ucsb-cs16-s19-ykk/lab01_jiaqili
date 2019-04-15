#include <iostream>
using namespace std;
int main(){
	int var1;
	int var2;

	cout<<"Enter number of rows and columns:"<<endl;
	cin>>var1>>var2;
	while (var1!=0 && var2!=0){
		while (var1>0){
			var1--;
			int count=var2;
			while (count>0){
				cout<<"X.";
				count--;
			}
			cout<<"\n";
		}
		cout<<"Enter number of rows and columns:"<<endl;
		cin>>var1>>var2;
	}return 0;
}

		
