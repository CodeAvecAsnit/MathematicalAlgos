#include<iostream>
#include<cmath>
using namespace std;

class Horner{
	int data;
	int a[20];
	int answer;
	int n;
	 
	public:
	void getdata(){
		cout<<"Enter the data that you want to check the root of : ";
		cin>>data;
		cout<<endl;
	}
	
	void getequation(){
		cout<<"Enter the degree of the equation : "<<endl;
		cin>>n;
  for(int i=0;i<=n;++i){
  	cout<<"Enter the "<<n-i<<"th degree variable : ";
  	cin>>a[i];
  	cout<<endl;
  }
	}
	void evaluate(){
		getdata();
		getequation();
		answer=a[0];
		for(int i=1;i<=n;++i){
			answer=a[i]+data*(answer);
			
		}
		cout<<"The required answer of the eqation is : "<<answer<<endl;
		
		if(answer==0){
			cout<<data<<" is the root of the eqation";
		}else{
			cout<<data<<" is not the root of the equation";
		}
		
	}
};
int main(){
	Horner H;
	H.evaluate();
}
