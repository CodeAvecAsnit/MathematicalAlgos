#include<iostream>
#include<cmath>
#define f(x) x-exp(-x)
#define g(x) exp(-x)

using namespace std;

class fixedata{
	double data;
	double error;
	double nextdata;
	int iteration;
	
	public :
	fixedata(){
	this->nextdata=0;
	this->error=1;
  this->iteration=1;
}
	
	double geterror(double ew,double old){
		return fabs(ew-old)/ew;
	}
		void getanswer(){
			cout<<"Enter a value"<<endl;
			cin>>data;
			do{
				++iteration;
				nextdata=g(data);
				error=geterror(nextdata,data);
				data=nextdata;
			}while(error>=0.005);
		cout<<"The required root of the answer is : "<<data<<endl;
    cout<<"The functional value at calculated root is "<<f(data)<<endl;
		cout<<"The number of iteration required is : "<<iteration<<endl;
		}
};

int main(){
	fixedata f;
	f.getanswer();
	return 0;
}

