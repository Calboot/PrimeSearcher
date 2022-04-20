#include <bits/stdc++.h>
#include <fstream>
using namespace std;

long long x=2;
int a=1;
int main(){
	ofstream write;
	write.open("prime.txt");
	while(1==1){
		long long y=x/2;
		for(int i=2;i<=y;i++){
			a=1;
			if (x%i==0){
				a=0;
				break;
			}
		}
		if(a==1){
			write<<x<<endl;
		}
		x++;
	}
}