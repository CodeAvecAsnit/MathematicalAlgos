#include<iostream>
using namespace std;

double f(double x){
  return x*x+5*x-9;
}

int main(){
  double high,low,integration=0,ans,diff;
  int intervals;


  cout<<"Enter the higher bound : ";
  cin>>high;

  cout<<"Enter the lower bound : ";
  cin>>low;

  cout<<"Enter the number of trapezoids : ";
  cin>>intervals;

  diff=(high-low)/intervals;

  for(int i=0;i<intervals;++i){
    integration+= f(low+diff*i)+f(low+diff*(i+1));
  }
  integration*=diff/2;

  cout<<"The required integration is : "<<integration<<endl;


  return 0;



}