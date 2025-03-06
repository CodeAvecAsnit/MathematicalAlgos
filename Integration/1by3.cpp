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

  cout<<"Enter the  even number of intervals : ";
  cin>>intervals;


  diff=(high-low)/intervals;


  for(int i=0;i<=intervals-2;i+=2){
    integration+=f(low+diff*i)+4*f(low+diff*(i+1))+f(low+diff*(i+2));
  }
  integration*=diff/3;

  cout<<"The required integration is : "<<integration<<endl;
  return 0;
}