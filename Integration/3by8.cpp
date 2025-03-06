#include<iostream>
using namespace std;

double f(double x){
  return x*x+5*x-9;
}

int main(){
  double high,low,integration=0,diff;
  int intervals;


  cout<<"Enter the higher bound : ";
  cin>>high;

  cout<<"Enter the lower bound : ";
  cin>>low;

  cout<<"Enter the  even number of intervals : ";
  cin>>intervals;



  diff=(high-low)/intervals;

for(int i=0;i<=intervals-3;i+=3){
  integration+=f(low+diff*i)+3*f(low+diff*(i+1))+3*f(low+diff*(i+2))+f(low+diff*(i+3));
}
integration*=(3*diff)/8;
cout<<"The required Integral value is : "<<integration<<endl;
return 0;
}