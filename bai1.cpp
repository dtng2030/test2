//bai1dofsangdoc
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	float x;
	cout<<"nhap do f can doi: "<<endl;
	cin>>x;
	cout<<x<<"do f: "<<setprecision(2)<<fixed<<5*(x-32)/9<<" do c";
	return 0;
}
